(comment_directive "!" @comment) @comment

((content) @injection.content
 (#set! injection.language "html"))

((code) @injection.content
 (#set! injection.language "javascript"))

[
 "if"
 "else"
 "each"
 "html"
 "tmpl"
 "var"
 "!"
 "="
] @keyword

[
 ","
] @punctuation.delimiter

[
 "{{"
 "}}"
 "{{/"
 "("
 ")"
] @punctuation.bracket
