#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DQUOTE = 1,
  aux_sym_string_token1 = 2,
  anon_sym_SQUOTE = 3,
  anon_sym_BQUOTE = 4,
  anon_sym_LBRACE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_LBRACK = 7,
  anon_sym_LT = 8,
  anon_sym_RBRACE = 9,
  anon_sym_RPAREN = 10,
  anon_sym_RBRACK = 11,
  anon_sym_GT = 12,
  sym_word = 13,
  sym_punctuation = 14,
  sym_operator = 15,
  sym_special_char = 16,
  sym_white_space = 17,
  sym_source_file = 18,
  sym__token = 19,
  sym_string = 20,
  sym_encapsulation = 21,
  sym_open = 22,
  sym_close = 23,
  aux_sym_source_file_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LT] = "<",
  [anon_sym_RBRACE] = "}",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [sym_word] = "word",
  [sym_punctuation] = "punctuation",
  [sym_operator] = "operator",
  [sym_special_char] = "special_char",
  [sym_white_space] = "white_space",
  [sym_source_file] = "source_file",
  [sym__token] = "_token",
  [sym_string] = "string",
  [sym_encapsulation] = "encapsulation",
  [sym_open] = "open",
  [sym_close] = "close",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [sym_word] = sym_word,
  [sym_punctuation] = sym_punctuation,
  [sym_operator] = sym_operator,
  [sym_special_char] = sym_special_char,
  [sym_white_space] = sym_white_space,
  [sym_source_file] = sym_source_file,
  [sym__token] = sym__token,
  [sym_string] = sym_string,
  [sym_encapsulation] = sym_encapsulation,
  [sym_open] = sym_open,
  [sym_close] = sym_close,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_special_char] = {
    .visible = true,
    .named = true,
  },
  [sym_white_space] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_encapsulation] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 11,
  [16] = 13,
  [17] = 12,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 21,
  [26] = 22,
  [27] = 24,
  [28] = 19,
  [29] = 20,
  [30] = 18,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      ADVANCE_MAP(
        '"', 4,
        '\'', 7,
        '(', 10,
        ')', 14,
        '-', 17,
        '<', 12,
        '>', 16,
        '[', 11,
        ']', 15,
        '`', 8,
        '{', 9,
        '}', 13,
        ',', 18,
        '.', 18,
        ';', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 1:
      if (eof) ADVANCE(3);
      ADVANCE_MAP(
        '"', 4,
        '\'', 7,
        '(', 10,
        '-', 17,
        '<', 12,
        '>', 19,
        '[', 11,
        '`', 8,
        '{', 9,
        ',', 18,
        '.', 18,
        ';', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\'' || '?' < lookahead) &&
          (lookahead < ']' || '{' < lookahead) &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(20);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '`') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_punctuation);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_special_char);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_white_space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_punctuation] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym_special_char] = ACTIONS(1),
    [sym_white_space] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym__token] = STATE(7),
    [sym_string] = STATE(7),
    [sym_encapsulation] = STATE(7),
    [sym_open] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [sym_word] = ACTIONS(15),
    [sym_punctuation] = ACTIONS(15),
    [sym_operator] = ACTIONS(17),
    [sym_special_char] = ACTIONS(17),
    [sym_white_space] = ACTIONS(17),
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_string] = STATE(3),
    [sym_encapsulation] = STATE(3),
    [sym_open] = STATE(5),
    [sym_close] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [sym_word] = ACTIONS(27),
    [sym_punctuation] = ACTIONS(27),
    [sym_operator] = ACTIONS(29),
    [sym_special_char] = ACTIONS(29),
    [sym_white_space] = ACTIONS(29),
  },
  [3] = {
    [sym__token] = STATE(6),
    [sym_string] = STATE(6),
    [sym_encapsulation] = STATE(6),
    [sym_open] = STATE(5),
    [sym_close] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [sym_word] = ACTIONS(31),
    [sym_punctuation] = ACTIONS(31),
    [sym_operator] = ACTIONS(33),
    [sym_special_char] = ACTIONS(33),
    [sym_white_space] = ACTIONS(33),
  },
  [4] = {
    [sym__token] = STATE(6),
    [sym_string] = STATE(6),
    [sym_encapsulation] = STATE(6),
    [sym_open] = STATE(5),
    [sym_close] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [sym_word] = ACTIONS(31),
    [sym_punctuation] = ACTIONS(31),
    [sym_operator] = ACTIONS(33),
    [sym_special_char] = ACTIONS(33),
    [sym_white_space] = ACTIONS(33),
  },
  [5] = {
    [sym__token] = STATE(4),
    [sym_string] = STATE(4),
    [sym_encapsulation] = STATE(4),
    [sym_open] = STATE(5),
    [sym_close] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [sym_word] = ACTIONS(37),
    [sym_punctuation] = ACTIONS(37),
    [sym_operator] = ACTIONS(39),
    [sym_special_char] = ACTIONS(39),
    [sym_white_space] = ACTIONS(39),
  },
  [6] = {
    [sym__token] = STATE(6),
    [sym_string] = STATE(6),
    [sym_encapsulation] = STATE(6),
    [sym_open] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_LT] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [sym_word] = ACTIONS(55),
    [sym_punctuation] = ACTIONS(55),
    [sym_operator] = ACTIONS(58),
    [sym_special_char] = ACTIONS(58),
    [sym_white_space] = ACTIONS(58),
  },
  [7] = {
    [sym__token] = STATE(8),
    [sym_string] = STATE(8),
    [sym_encapsulation] = STATE(8),
    [sym_open] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [sym_word] = ACTIONS(63),
    [sym_punctuation] = ACTIONS(63),
    [sym_operator] = ACTIONS(65),
    [sym_special_char] = ACTIONS(65),
    [sym_white_space] = ACTIONS(65),
  },
  [8] = {
    [sym__token] = STATE(8),
    [sym_string] = STATE(8),
    [sym_encapsulation] = STATE(8),
    [sym_open] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_BQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_LT] = ACTIONS(50),
    [sym_word] = ACTIONS(76),
    [sym_punctuation] = ACTIONS(76),
    [sym_operator] = ACTIONS(79),
    [sym_special_char] = ACTIONS(79),
    [sym_white_space] = ACTIONS(79),
  },
  [9] = {
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_BQUOTE] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [sym_word] = ACTIONS(82),
    [sym_punctuation] = ACTIONS(82),
    [sym_operator] = ACTIONS(84),
    [sym_special_char] = ACTIONS(84),
    [sym_white_space] = ACTIONS(84),
  },
  [10] = {
    [anon_sym_DQUOTE] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [sym_word] = ACTIONS(86),
    [sym_punctuation] = ACTIONS(86),
    [sym_operator] = ACTIONS(88),
    [sym_special_char] = ACTIONS(88),
    [sym_white_space] = ACTIONS(88),
  },
  [11] = {
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(90),
    [sym_word] = ACTIONS(90),
    [sym_punctuation] = ACTIONS(90),
    [sym_operator] = ACTIONS(92),
    [sym_special_char] = ACTIONS(92),
    [sym_white_space] = ACTIONS(92),
  },
  [12] = {
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(94),
    [sym_word] = ACTIONS(94),
    [sym_punctuation] = ACTIONS(94),
    [sym_operator] = ACTIONS(96),
    [sym_special_char] = ACTIONS(96),
    [sym_white_space] = ACTIONS(96),
  },
  [13] = {
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(98),
    [sym_word] = ACTIONS(98),
    [sym_punctuation] = ACTIONS(98),
    [sym_operator] = ACTIONS(100),
    [sym_special_char] = ACTIONS(100),
    [sym_white_space] = ACTIONS(100),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_LT] = ACTIONS(86),
    [sym_word] = ACTIONS(86),
    [sym_punctuation] = ACTIONS(86),
    [sym_operator] = ACTIONS(88),
    [sym_special_char] = ACTIONS(88),
    [sym_white_space] = ACTIONS(88),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [sym_word] = ACTIONS(90),
    [sym_punctuation] = ACTIONS(90),
    [sym_operator] = ACTIONS(92),
    [sym_special_char] = ACTIONS(92),
    [sym_white_space] = ACTIONS(92),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [sym_word] = ACTIONS(98),
    [sym_punctuation] = ACTIONS(98),
    [sym_operator] = ACTIONS(100),
    [sym_special_char] = ACTIONS(100),
    [sym_white_space] = ACTIONS(100),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(94),
    [sym_word] = ACTIONS(94),
    [sym_punctuation] = ACTIONS(94),
    [sym_operator] = ACTIONS(96),
    [sym_special_char] = ACTIONS(96),
    [sym_white_space] = ACTIONS(96),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_white_space,
    ACTIONS(102), 1,
      aux_sym_string_token1,
  [7] = 2,
    ACTIONS(3), 1,
      sym_white_space,
    ACTIONS(104), 1,
      aux_sym_string_token1,
  [14] = 2,
    ACTIONS(3), 1,
      sym_white_space,
    ACTIONS(106), 1,
      aux_sym_string_token1,
  [21] = 2,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_white_space,
  [28] = 2,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      sym_white_space,
  [35] = 2,
    ACTIONS(110), 1,
      sym_white_space,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [42] = 2,
    ACTIONS(108), 1,
      anon_sym_BQUOTE,
    ACTIONS(110), 1,
      sym_white_space,
  [49] = 2,
    ACTIONS(110), 1,
      sym_white_space,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
  [56] = 2,
    ACTIONS(110), 1,
      sym_white_space,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
  [63] = 2,
    ACTIONS(110), 1,
      sym_white_space,
    ACTIONS(114), 1,
      anon_sym_BQUOTE,
  [70] = 2,
    ACTIONS(3), 1,
      sym_white_space,
    ACTIONS(116), 1,
      aux_sym_string_token1,
  [77] = 2,
    ACTIONS(3), 1,
      sym_white_space,
    ACTIONS(118), 1,
      aux_sym_string_token1,
  [84] = 2,
    ACTIONS(3), 1,
      sym_white_space,
    ACTIONS(120), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 7,
  [SMALL_STATE(20)] = 14,
  [SMALL_STATE(21)] = 21,
  [SMALL_STATE(22)] = 28,
  [SMALL_STATE(23)] = 35,
  [SMALL_STATE(24)] = 42,
  [SMALL_STATE(25)] = 49,
  [SMALL_STATE(26)] = 56,
  [SMALL_STATE(27)] = 63,
  [SMALL_STATE(28)] = 70,
  [SMALL_STATE(29)] = 77,
  [SMALL_STATE(30)] = 84,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encapsulation, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_encapsulation, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encapsulation, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_encapsulation, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_generic(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
