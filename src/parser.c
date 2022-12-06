#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 1
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_code_token1 = 1,
  aux_sym_content_token1 = 2,
  anon_sym_LBRACE_LBRACE_EQ = 3,
  anon_sym_RBRACE_RBRACE = 4,
  anon_sym_LBRACE_LBRACEhtml = 5,
  anon_sym_LBRACE_LBRACE_BANG = 6,
  anon_sym_LBRACE_LBRACEif = 7,
  anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE = 8,
  anon_sym_LBRACE_LBRACEelse = 9,
  anon_sym_LBRACE_LBRACEeach = 10,
  anon_sym_LPAREN = 11,
  aux_sym_each_directive_token1 = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE = 15,
  anon_sym_LBRACE_LBRACEpartial_LPAREN = 16,
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
  [anon_sym_LBRACE_LBRACE_EQ] = "{{=",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_LBRACEhtml] = "{{html",
  [anon_sym_LBRACE_LBRACE_BANG] = "{{!",
  [anon_sym_LBRACE_LBRACEif] = "{{if",
  [anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE] = "{{/if}}",
  [anon_sym_LBRACE_LBRACEelse] = "{{else",
  [anon_sym_LBRACE_LBRACEeach] = "{{each",
  [anon_sym_LPAREN] = "(",
  [aux_sym_each_directive_token1] = "each_directive_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE] = "{{/each}}",
  [anon_sym_LBRACE_LBRACEpartial_LPAREN] = "{{partial(",
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
  [anon_sym_LBRACE_LBRACE_EQ] = anon_sym_LBRACE_LBRACE_EQ,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACEhtml] = anon_sym_LBRACE_LBRACEhtml,
  [anon_sym_LBRACE_LBRACE_BANG] = anon_sym_LBRACE_LBRACE_BANG,
  [anon_sym_LBRACE_LBRACEif] = anon_sym_LBRACE_LBRACEif,
  [anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE] = anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACEelse] = anon_sym_LBRACE_LBRACEelse,
  [anon_sym_LBRACE_LBRACEeach] = anon_sym_LBRACE_LBRACEeach,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_each_directive_token1] = aux_sym_each_directive_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE] = anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACEpartial_LPAREN] = anon_sym_LBRACE_LBRACEpartial_LPAREN,
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
  [anon_sym_LBRACE_LBRACE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACEhtml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACEif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACEelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACEeach] = {
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
  [anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACEpartial_LPAREN] = {
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
  field_condition = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
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
  [28] = 4,
  [29] = 5,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 4,
  [46] = 5,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == '{') ADVANCE(1);
      END_STATE();
    case 33:
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == '}') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == '}') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '}') ADVANCE(58);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(7);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(6);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACEhtml);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACEif);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACEelse);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACEeach);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_each_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACEpartial_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_partial_directive_token1);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_partial_directive_token1);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 42},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 42},
  [18] = {.lex_state = 42},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 41},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 72},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_EQ] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACEhtml] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACEif] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACEelse] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACEeach] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_each_directive_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACEpartial_LPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(58),
    [sym_content] = STATE(2),
    [sym_output_directive] = STATE(2),
    [sym_html_directive] = STATE(2),
    [sym_comment_directive] = STATE(2),
    [sym_if_directive] = STATE(2),
    [sym_each_directive] = STATE(2),
    [sym_partial_directive] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE_EQ] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACEhtml] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACEif] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACEeach] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACEpartial_LPAREN] = ACTIONS(17),
  },
  [2] = {
    [sym_content] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_html_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_each_directive] = STATE(3),
    [sym_partial_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE_EQ] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACEhtml] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACEif] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACEeach] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACEpartial_LPAREN] = ACTIONS(17),
  },
  [3] = {
    [sym_content] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_html_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_each_directive] = STATE(3),
    [sym_partial_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_content_token1] = ACTIONS(23),
    [anon_sym_LBRACE_LBRACE_EQ] = ACTIONS(26),
    [anon_sym_LBRACE_LBRACEhtml] = ACTIONS(29),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(32),
    [anon_sym_LBRACE_LBRACEif] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACEeach] = ACTIONS(38),
    [anon_sym_LBRACE_LBRACEpartial_LPAREN] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      aux_sym_content_token1,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(49), 6,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [18] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_content_token1,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(55), 6,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [36] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [49] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [62] = 2,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [75] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [88] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [101] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [114] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [127] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [140] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [153] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [166] = 2,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [179] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [192] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [205] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [218] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [231] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [244] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 7,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE_EQ,
      anon_sym_LBRACE_LBRACEhtml,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACE_LBRACEif,
      anon_sym_LBRACE_LBRACEeach,
      anon_sym_LBRACE_LBRACEpartial_LPAREN,
  [257] = 6,
    ACTIONS(125), 1,
      aux_sym_content_token1,
    ACTIONS(127), 1,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
    ACTIONS(129), 1,
      anon_sym_LBRACE_LBRACEelse,
    STATE(29), 1,
      aux_sym_content_repeat1,
    STATE(34), 1,
      sym_content,
    STATE(35), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [277] = 6,
    ACTIONS(125), 1,
      aux_sym_content_token1,
    ACTIONS(129), 1,
      anon_sym_LBRACE_LBRACEelse,
    ACTIONS(131), 1,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
    STATE(29), 1,
      aux_sym_content_repeat1,
    STATE(43), 1,
      sym_content,
    STATE(27), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [297] = 4,
    ACTIONS(125), 1,
      aux_sym_content_token1,
    STATE(29), 1,
      aux_sym_content_repeat1,
    STATE(51), 1,
      sym_content,
    ACTIONS(133), 2,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
      anon_sym_LBRACE_LBRACEelse,
  [311] = 4,
    ACTIONS(125), 1,
      aux_sym_content_token1,
    STATE(29), 1,
      aux_sym_content_repeat1,
    STATE(50), 1,
      sym_content,
    ACTIONS(135), 2,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
      anon_sym_LBRACE_LBRACEelse,
  [325] = 3,
    ACTIONS(137), 1,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
    ACTIONS(139), 1,
      anon_sym_LBRACE_LBRACEelse,
    STATE(42), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [336] = 3,
    ACTIONS(141), 1,
      aux_sym_content_token1,
    STATE(28), 1,
      aux_sym_content_repeat1,
    ACTIONS(49), 2,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
      anon_sym_LBRACE_LBRACEelse,
  [347] = 3,
    ACTIONS(144), 1,
      aux_sym_content_token1,
    STATE(28), 1,
      aux_sym_content_repeat1,
    ACTIONS(55), 2,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
      anon_sym_LBRACE_LBRACEelse,
  [358] = 4,
    ACTIONS(146), 1,
      aux_sym_code_token1,
    ACTIONS(148), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(44), 1,
      aux_sym_code_repeat1,
    STATE(53), 1,
      sym_code,
  [371] = 4,
    ACTIONS(146), 1,
      aux_sym_code_token1,
    ACTIONS(150), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(44), 1,
      aux_sym_code_repeat1,
    STATE(57), 1,
      sym_code,
  [384] = 4,
    ACTIONS(152), 1,
      aux_sym_content_token1,
    ACTIONS(154), 1,
      anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE,
    STATE(46), 1,
      aux_sym_content_repeat1,
    STATE(63), 1,
      sym_content,
  [397] = 4,
    ACTIONS(146), 1,
      aux_sym_code_token1,
    ACTIONS(156), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(44), 1,
      aux_sym_code_repeat1,
    STATE(56), 1,
      sym_code,
  [410] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE_LBRACEelse,
    ACTIONS(158), 1,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
    STATE(41), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [421] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE_LBRACEelse,
    ACTIONS(158), 1,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
    STATE(42), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [432] = 4,
    ACTIONS(146), 1,
      aux_sym_code_token1,
    ACTIONS(160), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(44), 1,
      aux_sym_code_repeat1,
    STATE(62), 1,
      sym_code,
  [445] = 4,
    ACTIONS(152), 1,
      aux_sym_content_token1,
    ACTIONS(162), 1,
      anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE,
    STATE(46), 1,
      aux_sym_content_repeat1,
    STATE(68), 1,
      sym_content,
  [458] = 4,
    ACTIONS(146), 1,
      aux_sym_code_token1,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      aux_sym_code_repeat1,
    STATE(65), 1,
      sym_code,
  [471] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE_LBRACEelse,
    ACTIONS(166), 1,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
    STATE(42), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [482] = 4,
    ACTIONS(146), 1,
      aux_sym_code_token1,
    ACTIONS(168), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(44), 1,
      aux_sym_code_repeat1,
    STATE(52), 1,
      sym_code,
  [495] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE_LBRACEelse,
    ACTIONS(170), 1,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
    STATE(42), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [506] = 3,
    ACTIONS(172), 1,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
    ACTIONS(174), 1,
      anon_sym_LBRACE_LBRACEelse,
    STATE(42), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [517] = 3,
    ACTIONS(137), 1,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
    ACTIONS(139), 1,
      anon_sym_LBRACE_LBRACEelse,
    STATE(39), 2,
      sym_else_directive,
      aux_sym_if_directive_repeat1,
  [528] = 3,
    ACTIONS(177), 1,
      aux_sym_code_token1,
    ACTIONS(179), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(47), 1,
      aux_sym_code_repeat1,
  [538] = 3,
    ACTIONS(49), 1,
      anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE,
    ACTIONS(181), 1,
      aux_sym_content_token1,
    STATE(45), 1,
      aux_sym_content_repeat1,
  [548] = 3,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE,
    ACTIONS(184), 1,
      aux_sym_content_token1,
    STATE(45), 1,
      aux_sym_content_repeat1,
  [558] = 3,
    ACTIONS(186), 1,
      aux_sym_code_token1,
    ACTIONS(189), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(47), 1,
      aux_sym_code_repeat1,
  [568] = 3,
    ACTIONS(191), 1,
      aux_sym_code_token1,
    STATE(44), 1,
      aux_sym_code_repeat1,
    STATE(60), 1,
      sym_code,
  [578] = 3,
    ACTIONS(191), 1,
      aux_sym_code_token1,
    STATE(44), 1,
      aux_sym_code_repeat1,
    STATE(67), 1,
      sym_code,
  [588] = 1,
    ACTIONS(193), 2,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
      anon_sym_LBRACE_LBRACEelse,
  [593] = 1,
    ACTIONS(195), 2,
      anon_sym_LBRACE_LBRACE_SLASHif_RBRACE_RBRACE,
      anon_sym_LBRACE_LBRACEelse,
  [598] = 1,
    ACTIONS(197), 1,
      anon_sym_RBRACE_RBRACE,
  [602] = 1,
    ACTIONS(199), 1,
      anon_sym_RBRACE_RBRACE,
  [606] = 1,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
  [610] = 1,
    ACTIONS(203), 1,
      aux_sym_partial_directive_token1,
  [614] = 1,
    ACTIONS(205), 1,
      anon_sym_RBRACE_RBRACE,
  [618] = 1,
    ACTIONS(207), 1,
      anon_sym_RBRACE_RBRACE,
  [622] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [626] = 1,
    ACTIONS(211), 1,
      aux_sym_each_directive_token1,
  [630] = 1,
    ACTIONS(213), 1,
      anon_sym_RBRACE_RBRACE,
  [634] = 1,
    ACTIONS(215), 1,
      anon_sym_COMMA,
  [638] = 1,
    ACTIONS(217), 1,
      anon_sym_RBRACE_RBRACE,
  [642] = 1,
    ACTIONS(219), 1,
      anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE,
  [646] = 1,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
  [650] = 1,
    ACTIONS(223), 1,
      anon_sym_RBRACE_RBRACE,
  [654] = 1,
    ACTIONS(225), 1,
      aux_sym_each_directive_token1,
  [658] = 1,
    ACTIONS(227), 1,
      anon_sym_RBRACE_RBRACE,
  [662] = 1,
    ACTIONS(229), 1,
      anon_sym_LBRACE_LBRACE_SLASHeach_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 49,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 101,
  [SMALL_STATE(12)] = 114,
  [SMALL_STATE(13)] = 127,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 153,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 179,
  [SMALL_STATE(18)] = 192,
  [SMALL_STATE(19)] = 205,
  [SMALL_STATE(20)] = 218,
  [SMALL_STATE(21)] = 231,
  [SMALL_STATE(22)] = 244,
  [SMALL_STATE(23)] = 257,
  [SMALL_STATE(24)] = 277,
  [SMALL_STATE(25)] = 297,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 325,
  [SMALL_STATE(28)] = 336,
  [SMALL_STATE(29)] = 347,
  [SMALL_STATE(30)] = 358,
  [SMALL_STATE(31)] = 371,
  [SMALL_STATE(32)] = 384,
  [SMALL_STATE(33)] = 397,
  [SMALL_STATE(34)] = 410,
  [SMALL_STATE(35)] = 421,
  [SMALL_STATE(36)] = 432,
  [SMALL_STATE(37)] = 445,
  [SMALL_STATE(38)] = 458,
  [SMALL_STATE(39)] = 471,
  [SMALL_STATE(40)] = 482,
  [SMALL_STATE(41)] = 495,
  [SMALL_STATE(42)] = 506,
  [SMALL_STATE(43)] = 517,
  [SMALL_STATE(44)] = 528,
  [SMALL_STATE(45)] = 538,
  [SMALL_STATE(46)] = 548,
  [SMALL_STATE(47)] = 558,
  [SMALL_STATE(48)] = 568,
  [SMALL_STATE(49)] = 578,
  [SMALL_STATE(50)] = 588,
  [SMALL_STATE(51)] = 593,
  [SMALL_STATE(52)] = 598,
  [SMALL_STATE(53)] = 602,
  [SMALL_STATE(54)] = 606,
  [SMALL_STATE(55)] = 610,
  [SMALL_STATE(56)] = 614,
  [SMALL_STATE(57)] = 618,
  [SMALL_STATE(58)] = 622,
  [SMALL_STATE(59)] = 626,
  [SMALL_STATE(60)] = 630,
  [SMALL_STATE(61)] = 634,
  [SMALL_STATE(62)] = 638,
  [SMALL_STATE(63)] = 642,
  [SMALL_STATE(64)] = 646,
  [SMALL_STATE(65)] = 650,
  [SMALL_STATE(66)] = 654,
  [SMALL_STATE(67)] = 658,
  [SMALL_STATE(68)] = 662,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(40),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(30),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(31),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(36),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(38),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(55),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_directive, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_directive, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_directive, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_directive, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 5, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 5, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_directive, 10),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_directive, 10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_directive, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_directive, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 4, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 4, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_directive, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_directive, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 6, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 6, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_directive, 9),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_directive, 9),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_directive, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_directive, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_directive, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_directive, 3, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(28),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_directive_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_directive_repeat1, 2), SHIFT_REPEAT(33),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(45),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(47),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 4, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
