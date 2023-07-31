#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_AT = 3,
  sym_c_inst = 4,
  sym_label_ident = 5,
  sym_source_file = 6,
  sym__instruction_or_label = 7,
  sym_label_def = 8,
  sym_instruction = 9,
  sym_a_inst = 10,
  aux_sym_source_file_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [sym_c_inst] = "c_inst",
  [sym_label_ident] = "label_ident",
  [sym_source_file] = "source_file",
  [sym__instruction_or_label] = "_instruction_or_label",
  [sym_label_def] = "label_def",
  [sym_instruction] = "instruction",
  [sym_a_inst] = "a_inst",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [sym_c_inst] = sym_c_inst,
  [sym_label_ident] = sym_label_ident,
  [sym_source_file] = sym_source_file,
  [sym__instruction_or_label] = sym__instruction_or_label,
  [sym_label_def] = sym_label_def,
  [sym_instruction] = sym_instruction,
  [sym_a_inst] = sym_a_inst,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_c_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_label_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction_or_label] = {
    .visible = false,
    .named = true,
  },
  [sym_label_def] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_a_inst] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(4);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_c_inst);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_label_ident);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
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
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_c_inst] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym__instruction_or_label] = STATE(2),
    [sym_label_def] = STATE(2),
    [sym_instruction] = STATE(2),
    [sym_a_inst] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym_c_inst] = ACTIONS(9),
  },
  [2] = {
    [sym__instruction_or_label] = STATE(3),
    [sym_label_def] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_a_inst] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym_c_inst] = ACTIONS(9),
  },
  [3] = {
    [sym__instruction_or_label] = STATE(3),
    [sym_label_def] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_a_inst] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(18),
    [sym_c_inst] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_c_inst,
  [7] = 1,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_c_inst,
  [14] = 1,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_c_inst,
  [21] = 1,
    ACTIONS(30), 1,
      sym_label_ident,
  [25] = 1,
    ACTIONS(32), 1,
      sym_label_ident,
  [29] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
  [33] = 1,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 7,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 21,
  [SMALL_STATE(8)] = 25,
  [SMALL_STATE(9)] = 29,
  [SMALL_STATE(10)] = 33,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a_inst, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_def, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hackasm(void) {
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
