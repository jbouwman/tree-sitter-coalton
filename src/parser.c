#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym__space_token1 = 1,
  sym_comment = 2,
  sym_number = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_token1 = 5,
  sym_symbol = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_program = 9,
  sym__token = 10,
  sym__space = 11,
  sym__value = 12,
  sym_string = 13,
  sym_list = 14,
  aux_sym_program_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__space_token1] = "_space_token1",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_symbol] = "symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__space] = "_space",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym_list] = "list",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__space_token1] = aux_sym__space_token1,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_symbol] = sym_symbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__space] = sym__space,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 2,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 10,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 15,
};

static TSCharacterRange aux_sym__space_token1_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f}, {0x205f, 0x205f},
  {0x3000, 0x3000},
};

static TSCharacterRange sym_symbol_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'*', '+'}, {'-', ':'}, {'<', 'Z'}, {'^', '_'},
  {'a', 'z'}, {'~', 0x9f}, {0xa1, 0x167f}, {0x1681, 0x1fff}, {0x200b, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2060, 0x2fff},
  {0x3001, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < '+' || '.' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(12);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (set_contains(aux_sym__space_token1_character_set_1, 9, lookahead)) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(17);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(17);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_symbol);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__space_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(16),
    [sym__token] = STATE(3),
    [sym__space] = STATE(3),
    [sym__value] = STATE(3),
    [sym_string] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__space_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [2] = {
    [sym__token] = STATE(4),
    [sym__space] = STATE(4),
    [sym__value] = STATE(4),
    [sym_string] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [aux_sym__space_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [3] = {
    [sym__token] = STATE(5),
    [sym__space] = STATE(5),
    [sym__value] = STATE(5),
    [sym_string] = STATE(5),
    [sym_list] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym__space_token1] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
    [sym_number] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_symbol] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [4] = {
    [sym__token] = STATE(6),
    [sym__space] = STATE(6),
    [sym__value] = STATE(6),
    [sym_string] = STATE(6),
    [sym_list] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [aux_sym__space_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [5] = {
    [sym__token] = STATE(5),
    [sym__space] = STATE(5),
    [sym__value] = STATE(5),
    [sym_string] = STATE(5),
    [sym_list] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym__space_token1] = ACTIONS(37),
    [sym_comment] = ACTIONS(40),
    [sym_number] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_symbol] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(46),
  },
  [6] = {
    [sym__token] = STATE(6),
    [sym__space] = STATE(6),
    [sym__value] = STATE(6),
    [sym_string] = STATE(6),
    [sym_list] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [aux_sym__space_token1] = ACTIONS(49),
    [sym_comment] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_symbol] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [7] = {
    [sym__token] = STATE(8),
    [sym__space] = STATE(8),
    [sym__value] = STATE(8),
    [sym_string] = STATE(8),
    [sym_list] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [aux_sym__space_token1] = ACTIONS(63),
    [sym_comment] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(67),
  },
  [8] = {
    [sym__token] = STATE(6),
    [sym__space] = STATE(6),
    [sym__value] = STATE(6),
    [sym_string] = STATE(6),
    [sym_list] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [aux_sym__space_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym__space_token1,
    ACTIONS(73), 5,
      sym_comment,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
      anon_sym_LPAREN,
  [12] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym__space_token1,
    ACTIONS(77), 5,
      sym_comment,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
      anon_sym_LPAREN,
  [24] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym__space_token1,
    ACTIONS(81), 5,
      sym_comment,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
      anon_sym_LPAREN,
  [36] = 2,
    ACTIONS(71), 1,
      aux_sym__space_token1,
    ACTIONS(73), 6,
      sym_comment,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [48] = 2,
    ACTIONS(75), 1,
      aux_sym__space_token1,
    ACTIONS(77), 6,
      sym_comment,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [60] = 2,
    ACTIONS(79), 1,
      aux_sym__space_token1,
    ACTIONS(81), 6,
      sym_comment,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [72] = 1,
    ACTIONS(83), 1,
      aux_sym_string_token1,
  [76] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [80] = 1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
  [84] = 1,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
  [88] = 1,
    ACTIONS(91), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 12,
  [SMALL_STATE(11)] = 24,
  [SMALL_STATE(12)] = 36,
  [SMALL_STATE(13)] = 48,
  [SMALL_STATE(14)] = 60,
  [SMALL_STATE(15)] = 72,
  [SMALL_STATE(16)] = 76,
  [SMALL_STATE(17)] = 80,
  [SMALL_STATE(18)] = 84,
  [SMALL_STATE(19)] = 88,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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

TS_PUBLIC const TSLanguage *tree_sitter_coalton(void) {
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
