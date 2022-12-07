#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 1
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_code_token1 = 1,
  aux_sym_content_token1 = 2,
  anon_sym_LBRACE_LBRACE = 3,
  anon_sym_EQ = 4,
  anon_sym_RBRACE_RBRACE = 5,
  anon_sym_html = 6,
  anon_sym_LBRACE_LBRACE_BANG = 7,
  anon_sym_if = 8,
  anon_sym_SLASH = 9,
  anon_sym_else = 10,
  anon_sym_each = 11,
  anon_sym_LPAREN = 12,
  aux_sym_each_directive_token1 = 13,
  anon_sym_COMMA = 14,
  anon_sym_RPAREN = 15,
  anon_sym_partial = 16,
  aux_sym_partial_directive_token1 = 17,
  sym_template = 18,
  sym_code = 19,
  sym_content = 20,
  sym_output_directive = 21,
  sym_html_directive = 22,
  sym_comment_directive = 23,
  sym_if_directive = 24,
  sym_else_directive = 25,
  sym_each_directive = 26,
  sym_partial_directive = 27,
  aux_sym_template_repeat1 = 28,
  aux_sym_code_repeat1 = 29,
  aux_sym_content_repeat1 = 30,
  aux_sym_if_directive_repeat1 = 31,
  alias_sym_comment = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_code_token1] = "code_token1",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_html] = "html",
  [anon_sym_LBRACE_LBRACE_BANG] = "{{!",
  [anon_sym_if] = "if",
  [anon_sym_SLASH] = "/",
  [anon_sym_else] = "else",
  [anon_sym_each] = "each",
  [anon_sym_LPAREN] = "(",
  [aux_sym_each_directive_token1] = "each_directive_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_partial] = "partial",
  [aux_sym_partial_directive_token1] = "code",
  [sym_template] = "template",
  [sym_code] = "code",
  [sym_content] = "content",
  [sym_output_directive] = "output_directive",
  [sym_html_directive] = "html_directive",
  [sym_comment_directive] = "comment_directive",
  [sym_if_directive] = "if_directive",
  [sym_else_directive] = "else_directive",
  [sym_each_directive] = "each_directive",
  [sym_partial_directive] = "partial_directive",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_if_directive_repeat1] = "if_directive_repeat1",
  [alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_LBRACE_LBRACE_BANG] = anon_sym_LBRACE_LBRACE_BANG,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_each_directive_token1] = aux_sym_each_directive_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_partial] = anon_sym_partial,
  [aux_sym_partial_directive_token1] = sym_code,
  [sym_template] = sym_template,
  [sym_code] = sym_code,
  [sym_content] = sym_content,
  [sym_output_directive] = sym_output_directive,
  [sym_html_directive] = sym_html_directive,
  [sym_comment_directive] = sym_comment_directive,
  [sym_if_directive] = sym_if_directive,
  [sym_else_directive] = sym_else_directive,
  [sym_each_directive] = sym_each_directive,
  [sym_partial_directive] = sym_partial_directive,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_if_directive_repeat1] = aux_sym_if_directive_repeat1,
  [alias_sym_comment] = alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_each_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_partial_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_html_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_if_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_else_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_each_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_comment] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_bindings = 1,
  field_condition = 2,
  field_path = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bindings] = "bindings",
  [field_condition] = "condition",
  [field_path] = "path",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 2},
  [1] =
    {field_bindings, 3},
    {field_path, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_code, 2,
    sym_code,
    alias_sym_comment,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 7,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 8,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '}') ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_each_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_partial_directive_token1);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_partial_directive_token1);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 53},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(64),
    [sym_content] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_html_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_each_directive] = STATE(3),
    [sym_partial_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_content_token1,
    ACTIONS(16), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    STATE(7), 1,
      aux_sym_content_repeat1,
    STATE(2), 8,
      sym_content,
      sym_output_directive,
      sym_html_directive,
      sym_comment_directive,
      sym_if_directive,
      sym_each_directive,
      sym_partial_directive,
      aux_sym_template_repeat1,
  [26] = 6,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_content_repeat1,
    STATE(2), 8,
      sym_content,
      sym_output_directive,
      sym_html_directive,
      sym_comment_directive,
      sym_if_directive,
      sym_each_directive,
      sym_partial_directive,
      aux_sym_template_repeat1,
  [52] = 5,
    ACTIONS(24), 1,
      aux_sym_content_token1,
    ACTIONS(26), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(37), 1,
      aux_sym_content_repeat1,
    STATE(41), 1,
      sym_content,
    STATE(42), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [69] = 5,
    ACTIONS(24), 1,
      aux_sym_content_token1,
    ACTIONS(28), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(37), 1,
      aux_sym_content_repeat1,
    STATE(38), 1,
      sym_content,
    STATE(36), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [86] = 5,
    ACTIONS(30), 1,
      anon_sym_EQ,
    ACTIONS(32), 1,
      anon_sym_html,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(36), 1,
      anon_sym_each,
    ACTIONS(38), 1,
      anon_sym_partial,
  [102] = 4,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      aux_sym_content_token1,
    STATE(8), 1,
      aux_sym_content_repeat1,
    ACTIONS(44), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [116] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      aux_sym_content_token1,
    STATE(8), 1,
      aux_sym_content_repeat1,
    ACTIONS(51), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [130] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [139] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [148] = 4,
    ACTIONS(61), 1,
      aux_sym_code_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(47), 1,
      aux_sym_code_repeat1,
    STATE(95), 1,
      sym_code,
  [161] = 4,
    ACTIONS(61), 1,
      aux_sym_code_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(47), 1,
      aux_sym_code_repeat1,
    STATE(88), 1,
      sym_code,
  [174] = 4,
    ACTIONS(61), 1,
      aux_sym_code_token1,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      aux_sym_code_repeat1,
    STATE(86), 1,
      sym_code,
  [187] = 4,
    ACTIONS(24), 1,
      aux_sym_content_token1,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(37), 1,
      aux_sym_content_repeat1,
    STATE(74), 1,
      sym_content,
  [200] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [209] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [218] = 4,
    ACTIONS(24), 1,
      aux_sym_content_token1,
    ACTIONS(79), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(37), 1,
      aux_sym_content_repeat1,
    STATE(63), 1,
      sym_content,
  [231] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [240] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [249] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [258] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [267] = 2,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [276] = 4,
    ACTIONS(24), 1,
      aux_sym_content_token1,
    ACTIONS(101), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(37), 1,
      aux_sym_content_repeat1,
    STATE(90), 1,
      sym_content,
  [289] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [298] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [307] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [316] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [325] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [334] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [343] = 4,
    ACTIONS(61), 1,
      aux_sym_code_token1,
    ACTIONS(127), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(47), 1,
      aux_sym_code_repeat1,
    STATE(69), 1,
      sym_code,
  [356] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [365] = 4,
    ACTIONS(61), 1,
      aux_sym_code_token1,
    ACTIONS(133), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(47), 1,
      aux_sym_code_repeat1,
    STATE(97), 1,
      sym_code,
  [378] = 4,
    ACTIONS(61), 1,
      aux_sym_code_token1,
    ACTIONS(135), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(47), 1,
      aux_sym_code_repeat1,
    STATE(98), 1,
      sym_code,
  [391] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG,
  [400] = 4,
    ACTIONS(24), 1,
      aux_sym_content_token1,
    ACTIONS(141), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(37), 1,
      aux_sym_content_repeat1,
    STATE(70), 1,
      sym_content,
  [413] = 2,
    ACTIONS(143), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [421] = 3,
    ACTIONS(44), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(145), 1,
      aux_sym_content_token1,
    STATE(45), 1,
      aux_sym_content_repeat1,
  [431] = 2,
    ACTIONS(143), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(39), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [439] = 2,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [447] = 2,
    ACTIONS(149), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [455] = 2,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(48), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [463] = 2,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [471] = 3,
    ACTIONS(154), 1,
      aux_sym_code_token1,
    STATE(47), 1,
      aux_sym_code_repeat1,
    STATE(80), 1,
      sym_code,
  [481] = 3,
    ACTIONS(154), 1,
      aux_sym_code_token1,
    STATE(47), 1,
      aux_sym_code_repeat1,
    STATE(61), 1,
      sym_code,
  [491] = 3,
    ACTIONS(51), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(156), 1,
      aux_sym_content_token1,
    STATE(45), 1,
      aux_sym_content_repeat1,
  [501] = 3,
    ACTIONS(159), 1,
      aux_sym_code_token1,
    ACTIONS(162), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(46), 1,
      aux_sym_code_repeat1,
  [511] = 3,
    ACTIONS(164), 1,
      aux_sym_code_token1,
    ACTIONS(166), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(46), 1,
      aux_sym_code_repeat1,
  [521] = 2,
    ACTIONS(168), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [529] = 2,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_else,
  [536] = 2,
    ACTIONS(172), 1,
      anon_sym_else,
    ACTIONS(174), 1,
      anon_sym_SLASH,
  [543] = 2,
    ACTIONS(172), 1,
      anon_sym_else,
    ACTIONS(176), 1,
      anon_sym_SLASH,
  [550] = 2,
    ACTIONS(172), 1,
      anon_sym_else,
    ACTIONS(178), 1,
      anon_sym_SLASH,
  [557] = 2,
    ACTIONS(172), 1,
      anon_sym_else,
    ACTIONS(180), 1,
      anon_sym_SLASH,
  [564] = 2,
    ACTIONS(172), 1,
      anon_sym_else,
    ACTIONS(182), 1,
      anon_sym_SLASH,
  [571] = 1,
    ACTIONS(184), 1,
      anon_sym_RBRACE_RBRACE,
  [575] = 1,
    ACTIONS(186), 1,
      anon_sym_if,
  [579] = 1,
    ACTIONS(172), 1,
      anon_sym_else,
  [583] = 1,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
  [587] = 1,
    ACTIONS(190), 1,
      anon_sym_each,
  [591] = 1,
    ACTIONS(192), 1,
      anon_sym_SLASH,
  [595] = 1,
    ACTIONS(194), 1,
      anon_sym_RBRACE_RBRACE,
  [599] = 1,
    ACTIONS(196), 1,
      anon_sym_if,
  [603] = 1,
    ACTIONS(198), 1,
      anon_sym_LBRACE_LBRACE,
  [607] = 1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [611] = 1,
    ACTIONS(202), 1,
      anon_sym_RBRACE_RBRACE,
  [615] = 1,
    ACTIONS(204), 1,
      anon_sym_if,
  [619] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACE_RBRACE,
  [623] = 1,
    ACTIONS(208), 1,
      anon_sym_if,
  [627] = 1,
    ACTIONS(210), 1,
      anon_sym_RBRACE_RBRACE,
  [631] = 1,
    ACTIONS(212), 1,
      anon_sym_LBRACE_LBRACE,
  [635] = 1,
    ACTIONS(214), 1,
      anon_sym_RBRACE_RBRACE,
  [639] = 1,
    ACTIONS(216), 1,
      anon_sym_each,
  [643] = 1,
    ACTIONS(218), 1,
      anon_sym_SLASH,
  [647] = 1,
    ACTIONS(220), 1,
      anon_sym_LBRACE_LBRACE,
  [651] = 1,
    ACTIONS(222), 1,
      aux_sym_each_directive_token1,
  [655] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACE_RBRACE,
  [659] = 1,
    ACTIONS(226), 1,
      anon_sym_if,
  [663] = 1,
    ACTIONS(228), 1,
      anon_sym_RBRACE_RBRACE,
  [667] = 1,
    ACTIONS(230), 1,
      anon_sym_if,
  [671] = 1,
    ACTIONS(232), 1,
      anon_sym_RBRACE_RBRACE,
  [675] = 1,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
  [679] = 1,
    ACTIONS(236), 1,
      anon_sym_RBRACE_RBRACE,
  [683] = 1,
    ACTIONS(238), 1,
      anon_sym_COMMA,
  [687] = 1,
    ACTIONS(240), 1,
      aux_sym_partial_directive_token1,
  [691] = 1,
    ACTIONS(242), 1,
      anon_sym_RBRACE_RBRACE,
  [695] = 1,
    ACTIONS(244), 1,
      anon_sym_RBRACE_RBRACE,
  [699] = 1,
    ACTIONS(246), 1,
      aux_sym_each_directive_token1,
  [703] = 1,
    ACTIONS(248), 1,
      anon_sym_RBRACE_RBRACE,
  [707] = 1,
    ACTIONS(250), 1,
      anon_sym_SLASH,
  [711] = 1,
    ACTIONS(252), 1,
      anon_sym_LBRACE_LBRACE,
  [715] = 1,
    ACTIONS(254), 1,
      anon_sym_each,
  [719] = 1,
    ACTIONS(256), 1,
      anon_sym_SLASH,
  [723] = 1,
    ACTIONS(258), 1,
      anon_sym_RBRACE_RBRACE,
  [727] = 1,
    ACTIONS(260), 1,
      anon_sym_each,
  [731] = 1,
    ACTIONS(262), 1,
      anon_sym_RBRACE_RBRACE,
  [735] = 1,
    ACTIONS(264), 1,
      anon_sym_RBRACE_RBRACE,
  [739] = 1,
    ACTIONS(266), 1,
      anon_sym_RBRACE_RBRACE,
  [743] = 1,
    ACTIONS(268), 1,
      anon_sym_RBRACE_RBRACE,
  [747] = 1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 139,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 187,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 240,
  [SMALL_STATE(20)] = 249,
  [SMALL_STATE(21)] = 258,
  [SMALL_STATE(22)] = 267,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 289,
  [SMALL_STATE(25)] = 298,
  [SMALL_STATE(26)] = 307,
  [SMALL_STATE(27)] = 316,
  [SMALL_STATE(28)] = 325,
  [SMALL_STATE(29)] = 334,
  [SMALL_STATE(30)] = 343,
  [SMALL_STATE(31)] = 356,
  [SMALL_STATE(32)] = 365,
  [SMALL_STATE(33)] = 378,
  [SMALL_STATE(34)] = 391,
  [SMALL_STATE(35)] = 400,
  [SMALL_STATE(36)] = 413,
  [SMALL_STATE(37)] = 421,
  [SMALL_STATE(38)] = 431,
  [SMALL_STATE(39)] = 439,
  [SMALL_STATE(40)] = 447,
  [SMALL_STATE(41)] = 455,
  [SMALL_STATE(42)] = 463,
  [SMALL_STATE(43)] = 471,
  [SMALL_STATE(44)] = 481,
  [SMALL_STATE(45)] = 491,
  [SMALL_STATE(46)] = 501,
  [SMALL_STATE(47)] = 511,
  [SMALL_STATE(48)] = 521,
  [SMALL_STATE(49)] = 529,
  [SMALL_STATE(50)] = 536,
  [SMALL_STATE(51)] = 543,
  [SMALL_STATE(52)] = 550,
  [SMALL_STATE(53)] = 557,
  [SMALL_STATE(54)] = 564,
  [SMALL_STATE(55)] = 571,
  [SMALL_STATE(56)] = 575,
  [SMALL_STATE(57)] = 579,
  [SMALL_STATE(58)] = 583,
  [SMALL_STATE(59)] = 587,
  [SMALL_STATE(60)] = 591,
  [SMALL_STATE(61)] = 595,
  [SMALL_STATE(62)] = 599,
  [SMALL_STATE(63)] = 603,
  [SMALL_STATE(64)] = 607,
  [SMALL_STATE(65)] = 611,
  [SMALL_STATE(66)] = 615,
  [SMALL_STATE(67)] = 619,
  [SMALL_STATE(68)] = 623,
  [SMALL_STATE(69)] = 627,
  [SMALL_STATE(70)] = 631,
  [SMALL_STATE(71)] = 635,
  [SMALL_STATE(72)] = 639,
  [SMALL_STATE(73)] = 643,
  [SMALL_STATE(74)] = 647,
  [SMALL_STATE(75)] = 651,
  [SMALL_STATE(76)] = 655,
  [SMALL_STATE(77)] = 659,
  [SMALL_STATE(78)] = 663,
  [SMALL_STATE(79)] = 667,
  [SMALL_STATE(80)] = 671,
  [SMALL_STATE(81)] = 675,
  [SMALL_STATE(82)] = 679,
  [SMALL_STATE(83)] = 683,
  [SMALL_STATE(84)] = 687,
  [SMALL_STATE(85)] = 691,
  [SMALL_STATE(86)] = 695,
  [SMALL_STATE(87)] = 699,
  [SMALL_STATE(88)] = 703,
  [SMALL_STATE(89)] = 707,
  [SMALL_STATE(90)] = 711,
  [SMALL_STATE(91)] = 715,
  [SMALL_STATE(92)] = 719,
  [SMALL_STATE(93)] = 723,
  [SMALL_STATE(94)] = 727,
  [SMALL_STATE(95)] = 731,
  [SMALL_STATE(96)] = 735,
  [SMALL_STATE(97)] = 739,
  [SMALL_STATE(98)] = 743,
  [SMALL_STATE(99)] = 747,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(7),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(6),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(33),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(8),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_directive, 9),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_directive, 9),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_directive, 4, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_directive, 14),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_directive, 14),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_directive, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_directive, 13),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_directive, 13),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_directive, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_directive, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 10, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 10, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 8, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 8, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 9, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 9, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 9),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 7),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_directive, 7, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_directive, 7, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_directive, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_directive, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 8),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 8),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_directive, 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_directive, 8),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_directive_repeat1, 2), SHIFT_REPEAT(57),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(45),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(46),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 4),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 5, .production_id = 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jqtpl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
