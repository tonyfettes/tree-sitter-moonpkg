#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_ident = 1,
  anon_sym_package = 2,
  anon_sym_import = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_string = 6,
  sym_file = 7,
  sym_package_file = 8,
  sym_package_clause = 9,
  sym_import_spec = 10,
  sym_import_decl = 11,
  sym_name = 12,
  sym_path = 13,
  aux_sym_package_file_repeat1 = 14,
  aux_sym_import_decl_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_string] = "string",
  [sym_file] = "file",
  [sym_package_file] = "package_file",
  [sym_package_clause] = "package_clause",
  [sym_import_spec] = "import_spec",
  [sym_import_decl] = "import_decl",
  [sym_name] = "name",
  [sym_path] = "path",
  [aux_sym_package_file_repeat1] = "package_file_repeat1",
  [aux_sym_import_decl_repeat1] = "import_decl_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_string] = sym_string,
  [sym_file] = sym_file,
  [sym_package_file] = sym_package_file,
  [sym_package_clause] = sym_package_clause,
  [sym_import_spec] = sym_import_spec,
  [sym_import_decl] = sym_import_decl,
  [sym_name] = sym_name,
  [sym_path] = sym_path,
  [aux_sym_package_file_repeat1] = aux_sym_package_file_repeat1,
  [aux_sym_import_decl_repeat1] = aux_sym_import_decl_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_import_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_import_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_package_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_decl_repeat1] = {
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 9,
  [19] = 19,
  [20] = 11,
  [21] = 21,
  [22] = 15,
  [23] = 23,
  [24] = 24,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
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
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'i') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'k') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'g') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_package);
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(24),
    [sym_package_file] = STATE(23),
    [sym_package_clause] = STATE(7),
    [anon_sym_package] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(8), 1,
      anon_sym_RPAREN,
    ACTIONS(10), 1,
      sym_string,
    STATE(10), 1,
      sym_path,
    STATE(22), 1,
      sym_name,
    STATE(2), 2,
      sym_import_spec,
      aux_sym_import_decl_repeat1,
  [20] = 6,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      sym_string,
    STATE(10), 1,
      sym_path,
    STATE(22), 1,
      sym_name,
    STATE(4), 2,
      sym_import_spec,
      aux_sym_import_decl_repeat1,
  [40] = 6,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_path,
    STATE(22), 1,
      sym_name,
    STATE(2), 2,
      sym_import_spec,
      aux_sym_import_decl_repeat1,
  [60] = 6,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_string,
    STATE(13), 1,
      sym_import_spec,
    STATE(14), 1,
      sym_path,
    STATE(15), 1,
      sym_name,
  [79] = 3,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_import,
    STATE(6), 2,
      sym_import_decl,
      aux_sym_package_file_repeat1,
  [90] = 3,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_import,
    STATE(8), 2,
      sym_import_decl,
      aux_sym_package_file_repeat1,
  [101] = 3,
    ACTIONS(32), 1,
      anon_sym_import,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_import_decl,
      aux_sym_package_file_repeat1,
  [112] = 1,
    ACTIONS(36), 3,
      anon_sym_RPAREN,
      sym_string,
      sym_ident,
  [118] = 1,
    ACTIONS(38), 3,
      anon_sym_RPAREN,
      sym_string,
      sym_ident,
  [124] = 1,
    ACTIONS(40), 3,
      anon_sym_RPAREN,
      sym_string,
      sym_ident,
  [130] = 1,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      sym_string,
  [136] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [141] = 1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [146] = 2,
    ACTIONS(23), 1,
      sym_string,
    STATE(18), 1,
      sym_path,
  [153] = 1,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [158] = 2,
    ACTIONS(13), 1,
      sym_ident,
    STATE(21), 1,
      sym_name,
  [165] = 1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [170] = 1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [175] = 1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [180] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [185] = 2,
    ACTIONS(17), 1,
      sym_string,
    STATE(9), 1,
      sym_path,
  [192] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [196] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 124,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 141,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 153,
  [SMALL_STATE(17)] = 158,
  [SMALL_STATE(18)] = 165,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 175,
  [SMALL_STATE(21)] = 180,
  [SMALL_STATE(22)] = 185,
  [SMALL_STATE(23)] = 192,
  [SMALL_STATE(24)] = 196,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [5] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_decl_repeat1, 2), SHIFT_REPEAT(12),
  [8] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_decl_repeat1, 2),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_decl_repeat1, 2), SHIFT_REPEAT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_file_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_file, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_file, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_spec, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_spec, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_clause, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_moonpkg(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_ident,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
