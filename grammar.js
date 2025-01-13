/**
 * @file A generic treesitter parser for those files that just don't have a parser
 * @author Brage Ingebrigtsen
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "generic",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
