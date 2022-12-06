module.exports = grammar({
  name: 'jqtpl',
  rules: {
    template: $ => repeat(choice(
      $.output_directive,
      $.html_directive,
      $.comment_directive,
      $.if_directive,
      $.each_directive,
      $.partial_directive,
      $.content,
    )),
    code: $ => repeat1(/[^\{\}]+|\{|\}/),
    content: $ => prec.right(repeat1(/[^\{]+|\{/)),
    output_directive: $ => seq(
      '{{=',
      optional($.code),
      '}}',
    ),
    html_directive: $ => seq(
      '{{html',
      optional($.code),
      '}}',
    ),
    comment_directive: $ => seq(
      '{{!',
      optional(alias($.code, $.comment)),
      '}}',
    ),
    if_directive: $ => seq(
      '{{if', field('condition', optional($.code)), '}}',
      optional($.content),
      repeat($.else_directive),
      '{{/if}}'
    ),
    else_directive: $ => seq(
      '{{else', field('condition', optional($.code)), '}}',
      optional($.content),
    ),
    each_directive: $ => seq(
      '{{each',
      choice(
        seq('(', /\w+/, ',', /\w+/, ')', $.code),
        $.code,
      ),
      '}}',
      optional($.content),
      '{{/each}}',
    ),
    partial_directive: $ => seq(
      '{{partial(',
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
