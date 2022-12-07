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
    ),

    code: $ => /[^\}\n]+/,
    content: $ => /[^\{]+/,

    output_directive: $ => seq(
      '{{=', optional($.code), '}}',
    ),

    html_directive: $ => seq(
      '{{html', optional($.code), '}}',
    ),

    comment_directive: $ => seq(
      '{{!', optional(alias($.code, $.comment)), '}}',
    ),

    if_directive: $ => seq(
      '{{if', field('condition', $.code), '}}',
      repeat($._node),
      repeat($.else_directive),
      '{{/if}}'
    ),

    else_directive: $ => seq(
      '{{else', optional(field('condition', $.code)), '}}',
      repeat($._node),
    ),

    each_directive: $ => seq(
      '{{each', token.immediate('('), /[^,]+/, ',', /[^)]+/, ')', optional($.code), '}}',
      repeat($._node),
      '{{/each}}'
    ),

    partial_directive: $ => seq(
      '{{partial', token.immediate('('),
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
