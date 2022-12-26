# tree-sitter-jqtpl

[jqtpl](https://github.com/kof/jqtpl) grammar for
[tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Prerequisites

Either use [asdf (v0.11.0-6a4f51a)](https://asdf-vm.com/) or check
[.tool-versions](.tool-versions) and install them manually.

## Setup

```sh
asdf install
npm install
npx tree-sitter init-config
```

Open `~/.config/tree-sitter/config.json` and extend `"parser-directories"`
array with the absolute path to parent directory of this repository. For
example, if your `pwd` is `/home/lysander/projects/tree-sitter-jqtpl` then add
`/home/lysander/projects`.

## Development

```sh
# regenerate implementation files after changes to `grammar.js`
npx tree-sitter generate

# test parser
npx tree-sitter test

# highlight a file
npx tree-sitter highlight ../some/file.jqtpl
```
