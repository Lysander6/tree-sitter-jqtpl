(comment_directive) @comment

((content) @injection.content
 (#set! injection.language "html"))

((code) @injection.content
 (#set! injection.language "javascript"))

[
 "{{if"
 "{{/if}}"
 "{{else"
 "{{each"
 "{{html"
 "{{partial"
 "{{var"
 "{{="
 "}}"
] @keyword

[
 ","
] @punctuation.delimiter

[
 "("
 ")"
] @punctuation.bracket
