module.exports = grammar({
  name: "generic",

  rules: {
    source_file: ($) => repeat($._token),

    _token: ($) =>
      choice(
        $.string,
        $.encapsulation,
        $.word,
        $.punctuation,
        $.operator,
        $.special_char,
        $.white_space,
      ),

    string: (_) =>
      choice(
        seq('"', /[^\"]*/, '"'),
        seq("'", /[^\"]*/, "'"),
        seq("`", /[^\"]*/, "`"),
      ),

    encapsulation: ($) => seq($.open, repeat($._token), $.close),

    open: (_) => choice("{", "(", "[", "<"),
    close: (_) => choice("}", ")", "]", ">"),

    word: (_) => /[a-zA-Z0-9_\-]+/,

    punctuation: (_) => /[\.,;]/,
    operator: (_) => /[\+\-\*\/\^=!?<>%~:]/,

    special_char: (_) => /[^a-zA-Z0-9_\-{}()\[\]<>]/,
    white_space: (_) => /\s/,
  },
});
