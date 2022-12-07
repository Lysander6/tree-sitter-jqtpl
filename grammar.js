module.exports = grammar({
  name: 'jqtpl',
  rules: {
    template: $ => repeat($._blerg),
    _blerg: $ => prec.left(repeat1(choice(
      $.output_directive,
      $.html_directive,
      $.comment_directive,
      $.if_directive,
      $.each_directive,
      $.partial_directive,
      $.content,
    ))),
    code: $ => repeat1(/[^\{\}]+|\{|\}/),
    content: $ => prec.left(repeat1(/[^\{\}]+|\{|\}/)),
    output_directive: $ => seq(
      '{{',
      token.immediate('='),
      optional($.code),
      '}}',
    ),
    html_directive: $ => seq(
      '{{',
      token.immediate('html'),
      optional($.code),
      '}}',
    ),
    comment_directive: $ => seq(
      '{{!',
      optional(alias($.code, $.comment)),
      '}}',
    ),
    if_directive: $ => seq(
      '{{', token.immediate('if'), field('condition', optional($.code)), '}}',
      optional($._blerg),
      repeat($.else_directive),
      '{{', token.immediate('/'), token.immediate('if'), token.immediate('}}')
    ),
    else_directive: $ => prec.left(seq(
      '{{', token.immediate('else'), field('condition', optional($.code)), '}}',
      optional($._blerg),
    )),
    each_directive: $ => seq(
      '{{', token.immediate('each'),
      seq(token.immediate('('), /[^,]+/, ',', /[^)]+/, ')'),
      $.code,
      '}}',
      repeat($._blerg),
      '{{', token.immediate('/'), token.immediate('each'), token.immediate('}}'),
    ),
    partial_directive: $ => seq(
      '{{', 'partial', '(',
      field(
        'bindings',
        alias(
          token(repeat(choice(/[^\(\)]*/, seq('(', /[^\(\)]*/, ')')))),
          $.code,
        ),
      ),
      ')',
      field(
        'path',
        $.code,
      ),
      '}}',
    ),
  },
});
