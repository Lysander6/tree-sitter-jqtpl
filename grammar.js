module.exports = grammar({
  name: 'jqtpl',
  extras: $ => [],
  rules: {
    template: $ => repeat($._node),

    _node: $ => choice(
      $.comment_directive,
      $.content,
      $.each_directive,
      $.html_directive,
      $.if_directive,
      $.output_directive,
      $.partial_directive,
      $.var_directive,
    ),

    code: $ => repeat1(/[^\n\r\}]}+|}[^\n\r\}]+|[^\n\r\}]+/),
    content: $ => /[^\{]+|[^\{]+\{[^\{]+/,

    output_directive: $ => seq(
      '{{', token.immediate('='), optional($.code), '}}',
    ),

    html_directive: $ => seq(
      '{{', token.immediate('html'), optional($.code), '}}',
    ),

    comment_directive: $ => seq(
      '{{', token.immediate('!'), optional(alias($.code, $.comment)), '}}',
    ),

    var_directive: $ => seq(
      '{{', token.immediate('var'), optional($.code), '}}',
    ),

    if_directive: $ => seq(
      '{{', token.immediate('if'), field('condition', $.code), '}}',
      field('consequence', repeat($._node)),
      optional(field('alternative', $.else_directive)),
      '{{/', token.immediate('if'), token.immediate('}}'),
    ),

    else_directive: $ => prec.left(seq(
      '{{', token.immediate('else'), optional(field('condition', $.code)), '}}',
      field('consequence', repeat($._node)),
      optional(field('alternative', $.else_directive)),
    )),

    each_directive: $ => seq(
      '{{', token.immediate('each'), token.immediate('('), /[^,]+/, ',', /[^)]+/, ')', optional($.code), '}}',
      repeat($._node),
      '{{/', token.immediate('each'), token.immediate('}}'),
    ),

    partial_directive: $ => seq(
      '{{', token.immediate('partial'), token.immediate('('),
      field(
        'bindings',
        alias(
          token(repeat(choice(/[^\(\)]*/, seq('(', /[^\(\)]*/, ')')))),
          $.code,
        ),
      ),
      ')',
      field('path', $.code),
      '}}',
    ),
  },
});
