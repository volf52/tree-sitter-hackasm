#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_AT = 3,
  anon_sym_EQ = 4,
  anon_sym_SEMI = 5,
  anon_sym_JMP = 6,
  anon_sym_JEQ = 7,
  anon_sym_JLE = 8,
  anon_sym_JGT = 9,
  anon_sym_JGE = 10,
  anon_sym_JNE = 11,
  anon_sym_A = 12,
  anon_sym_D = 13,
  anon_sym_M = 14,
  anon_sym_MD = 15,
  anon_sym_DM = 16,
  anon_sym_AM = 17,
  anon_sym_MA = 18,
  anon_sym_AD = 19,
  anon_sym_DA = 20,
  anon_sym_DMA = 21,
  anon_sym_DAM = 22,
  anon_sym_ADM = 23,
  anon_sym_MAD = 24,
  anon_sym_MDA = 25,
  anon_sym_AMD = 26,
  anon_sym_0 = 27,
  anon_sym_1 = 28,
  anon_sym_DASH1 = 29,
  anon_sym_BANGD = 30,
  anon_sym_BANGA = 31,
  anon_sym_BANGM = 32,
  anon_sym_DASHD = 33,
  anon_sym_DASHA = 34,
  anon_sym_DASHM = 35,
  anon_sym_D_PLUS1 = 36,
  anon_sym_D_DASH1 = 37,
  anon_sym_A_PLUS1 = 38,
  anon_sym_A_DASH1 = 39,
  anon_sym_M_PLUS1 = 40,
  anon_sym_M_DASH1 = 41,
  anon_sym_D_PLUSA = 42,
  anon_sym_A_PLUSD = 43,
  anon_sym_D_PLUSM = 44,
  anon_sym_M_PLUSD = 45,
  anon_sym_D_DASHA = 46,
  anon_sym_A_DASHD = 47,
  anon_sym_D_DASHM = 48,
  anon_sym_M_DASHD = 49,
  anon_sym_D_AMPA = 50,
  anon_sym_A_AMPD = 51,
  anon_sym_D_AMPM = 52,
  anon_sym_M_AMPD = 53,
  anon_sym_D_PIPEA = 54,
  anon_sym_A_PIPED = 55,
  anon_sym_D_PIPEM = 56,
  anon_sym_M_PIPED = 57,
  sym__alpha = 58,
  sym__numeric = 59,
  sym_comment = 60,
  sym_source_file = 61,
  sym__line = 62,
  sym_label_def = 63,
  sym__instruction = 64,
  sym_a_inst = 65,
  sym_c_inst = 66,
  sym_label_ident = 67,
  sym__dest_def = 68,
  sym__jump_def = 69,
  sym_jump = 70,
  sym_dest = 71,
  sym_comp = 72,
  aux_sym_source_file_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_JMP] = "JMP",
  [anon_sym_JEQ] = "JEQ",
  [anon_sym_JLE] = "JLE",
  [anon_sym_JGT] = "JGT",
  [anon_sym_JGE] = "JGE",
  [anon_sym_JNE] = "JNE",
  [anon_sym_A] = "A",
  [anon_sym_D] = "D",
  [anon_sym_M] = "M",
  [anon_sym_MD] = "MD",
  [anon_sym_DM] = "DM",
  [anon_sym_AM] = "AM",
  [anon_sym_MA] = "MA",
  [anon_sym_AD] = "AD",
  [anon_sym_DA] = "DA",
  [anon_sym_DMA] = "DMA",
  [anon_sym_DAM] = "DAM",
  [anon_sym_ADM] = "ADM",
  [anon_sym_MAD] = "MAD",
  [anon_sym_MDA] = "MDA",
  [anon_sym_AMD] = "AMD",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_DASH1] = "-1",
  [anon_sym_BANGD] = "!D",
  [anon_sym_BANGA] = "!A",
  [anon_sym_BANGM] = "!M",
  [anon_sym_DASHD] = "-D",
  [anon_sym_DASHA] = "-A",
  [anon_sym_DASHM] = "-M",
  [anon_sym_D_PLUS1] = "D+1",
  [anon_sym_D_DASH1] = "D-1",
  [anon_sym_A_PLUS1] = "A+1",
  [anon_sym_A_DASH1] = "A-1",
  [anon_sym_M_PLUS1] = "M+1",
  [anon_sym_M_DASH1] = "M-1",
  [anon_sym_D_PLUSA] = "D+A",
  [anon_sym_A_PLUSD] = "A+D",
  [anon_sym_D_PLUSM] = "D+M",
  [anon_sym_M_PLUSD] = "M+D",
  [anon_sym_D_DASHA] = "D-A",
  [anon_sym_A_DASHD] = "A-D",
  [anon_sym_D_DASHM] = "D-M",
  [anon_sym_M_DASHD] = "M-D",
  [anon_sym_D_AMPA] = "D&A",
  [anon_sym_A_AMPD] = "A&D",
  [anon_sym_D_AMPM] = "D&M",
  [anon_sym_M_AMPD] = "M&D",
  [anon_sym_D_PIPEA] = "D|A",
  [anon_sym_A_PIPED] = "A|D",
  [anon_sym_D_PIPEM] = "D|M",
  [anon_sym_M_PIPED] = "M|D",
  [sym__alpha] = "_alpha",
  [sym__numeric] = "_numeric",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_label_def] = "label_def",
  [sym__instruction] = "_instruction",
  [sym_a_inst] = "a_inst",
  [sym_c_inst] = "c_inst",
  [sym_label_ident] = "label_ident",
  [sym__dest_def] = "_dest_def",
  [sym__jump_def] = "_jump_def",
  [sym_jump] = "jump",
  [sym_dest] = "dest",
  [sym_comp] = "comp",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_JEQ] = anon_sym_JEQ,
  [anon_sym_JLE] = anon_sym_JLE,
  [anon_sym_JGT] = anon_sym_JGT,
  [anon_sym_JGE] = anon_sym_JGE,
  [anon_sym_JNE] = anon_sym_JNE,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_MD] = anon_sym_MD,
  [anon_sym_DM] = anon_sym_DM,
  [anon_sym_AM] = anon_sym_AM,
  [anon_sym_MA] = anon_sym_MA,
  [anon_sym_AD] = anon_sym_AD,
  [anon_sym_DA] = anon_sym_DA,
  [anon_sym_DMA] = anon_sym_DMA,
  [anon_sym_DAM] = anon_sym_DAM,
  [anon_sym_ADM] = anon_sym_ADM,
  [anon_sym_MAD] = anon_sym_MAD,
  [anon_sym_MDA] = anon_sym_MDA,
  [anon_sym_AMD] = anon_sym_AMD,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DASH1] = anon_sym_DASH1,
  [anon_sym_BANGD] = anon_sym_BANGD,
  [anon_sym_BANGA] = anon_sym_BANGA,
  [anon_sym_BANGM] = anon_sym_BANGM,
  [anon_sym_DASHD] = anon_sym_DASHD,
  [anon_sym_DASHA] = anon_sym_DASHA,
  [anon_sym_DASHM] = anon_sym_DASHM,
  [anon_sym_D_PLUS1] = anon_sym_D_PLUS1,
  [anon_sym_D_DASH1] = anon_sym_D_DASH1,
  [anon_sym_A_PLUS1] = anon_sym_A_PLUS1,
  [anon_sym_A_DASH1] = anon_sym_A_DASH1,
  [anon_sym_M_PLUS1] = anon_sym_M_PLUS1,
  [anon_sym_M_DASH1] = anon_sym_M_DASH1,
  [anon_sym_D_PLUSA] = anon_sym_D_PLUSA,
  [anon_sym_A_PLUSD] = anon_sym_A_PLUSD,
  [anon_sym_D_PLUSM] = anon_sym_D_PLUSM,
  [anon_sym_M_PLUSD] = anon_sym_M_PLUSD,
  [anon_sym_D_DASHA] = anon_sym_D_DASHA,
  [anon_sym_A_DASHD] = anon_sym_A_DASHD,
  [anon_sym_D_DASHM] = anon_sym_D_DASHM,
  [anon_sym_M_DASHD] = anon_sym_M_DASHD,
  [anon_sym_D_AMPA] = anon_sym_D_AMPA,
  [anon_sym_A_AMPD] = anon_sym_A_AMPD,
  [anon_sym_D_AMPM] = anon_sym_D_AMPM,
  [anon_sym_M_AMPD] = anon_sym_M_AMPD,
  [anon_sym_D_PIPEA] = anon_sym_D_PIPEA,
  [anon_sym_A_PIPED] = anon_sym_A_PIPED,
  [anon_sym_D_PIPEM] = anon_sym_D_PIPEM,
  [anon_sym_M_PIPED] = anon_sym_M_PIPED,
  [sym__alpha] = sym__alpha,
  [sym__numeric] = sym__numeric,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_label_def] = sym_label_def,
  [sym__instruction] = sym__instruction,
  [sym_a_inst] = sym_a_inst,
  [sym_c_inst] = sym_c_inst,
  [sym_label_ident] = sym_label_ident,
  [sym__dest_def] = sym__dest_def,
  [sym__jump_def] = sym__jump_def,
  [sym_jump] = sym_jump,
  [sym_dest] = sym_dest,
  [sym_comp] = sym_comp,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JEQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JGT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JNE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MDA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PLUS1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_PLUS1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_PLUS1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PLUSA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_PLUSD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PLUSM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_PLUSD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_DASHA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_DASHD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_DASHM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_DASHD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_AMPA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_AMPD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_AMPM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_AMPD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PIPEA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_PIPED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PIPEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_PIPED] = {
    .visible = true,
    .named = false,
  },
  [sym__alpha] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_label_def] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_a_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_c_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_label_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__dest_def] = {
    .visible = false,
    .named = true,
  },
  [sym__jump_def] = {
    .visible = false,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_dest] = {
    .visible = true,
    .named = true,
  },
  [sym_comp] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '1') ADVANCE(56);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'J') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '1') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'M') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(73);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == 'D') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'M') ADVANCE(80);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'G') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'Q') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_JEQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_JLE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_JGT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_JGE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_JNE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'D') ADVANCE(47);
      if (lookahead == 'M') ADVANCE(45);
      if (lookahead == '|') ADVANCE(15);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '|') ADVANCE(15);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == '|') ADVANCE(13);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '|') ADVANCE(13);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(43);
      if (lookahead == '|') ADVANCE(17);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '|') ADVANCE(17);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_MD);
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DM);
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AM);
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_MA);
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AD);
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DA);
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DAM);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ADM);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_MAD);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_MDA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AMD);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BANGD);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BANGA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BANGM);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASHD);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASHA);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASHM);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_D_PLUS1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_D_DASH1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_A_PLUS1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_A_DASH1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_M_PLUS1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_M_DASH1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_D_PLUSA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_A_PLUSD);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_D_PLUSM);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_M_PLUSD);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_D_DASHA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_A_DASHD);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_D_DASHM);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_M_DASHD);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_D_AMPA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_A_AMPD);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_D_AMPM);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_M_AMPD);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_D_PIPEA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_A_PIPED);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_D_PIPEM);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_M_PIPED);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__numeric);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
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
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_JEQ] = ACTIONS(1),
    [anon_sym_JLE] = ACTIONS(1),
    [anon_sym_JGT] = ACTIONS(1),
    [anon_sym_JGE] = ACTIONS(1),
    [anon_sym_JNE] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_MD] = ACTIONS(1),
    [anon_sym_DM] = ACTIONS(1),
    [anon_sym_AM] = ACTIONS(1),
    [anon_sym_MA] = ACTIONS(1),
    [anon_sym_AD] = ACTIONS(1),
    [anon_sym_DA] = ACTIONS(1),
    [anon_sym_DMA] = ACTIONS(1),
    [anon_sym_DAM] = ACTIONS(1),
    [anon_sym_ADM] = ACTIONS(1),
    [anon_sym_MAD] = ACTIONS(1),
    [anon_sym_MDA] = ACTIONS(1),
    [anon_sym_AMD] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DASH1] = ACTIONS(1),
    [anon_sym_BANGD] = ACTIONS(1),
    [anon_sym_BANGA] = ACTIONS(1),
    [anon_sym_BANGM] = ACTIONS(1),
    [anon_sym_DASHD] = ACTIONS(1),
    [anon_sym_DASHA] = ACTIONS(1),
    [anon_sym_DASHM] = ACTIONS(1),
    [anon_sym_D_PLUS1] = ACTIONS(1),
    [anon_sym_D_DASH1] = ACTIONS(1),
    [anon_sym_A_PLUS1] = ACTIONS(1),
    [anon_sym_A_DASH1] = ACTIONS(1),
    [anon_sym_M_PLUS1] = ACTIONS(1),
    [anon_sym_M_DASH1] = ACTIONS(1),
    [anon_sym_D_PLUSA] = ACTIONS(1),
    [anon_sym_A_PLUSD] = ACTIONS(1),
    [anon_sym_D_PLUSM] = ACTIONS(1),
    [anon_sym_M_PLUSD] = ACTIONS(1),
    [anon_sym_D_DASHA] = ACTIONS(1),
    [anon_sym_A_DASHD] = ACTIONS(1),
    [anon_sym_D_DASHM] = ACTIONS(1),
    [anon_sym_M_DASHD] = ACTIONS(1),
    [anon_sym_D_AMPA] = ACTIONS(1),
    [anon_sym_A_AMPD] = ACTIONS(1),
    [anon_sym_D_AMPM] = ACTIONS(1),
    [anon_sym_M_AMPD] = ACTIONS(1),
    [anon_sym_D_PIPEA] = ACTIONS(1),
    [anon_sym_A_PIPED] = ACTIONS(1),
    [anon_sym_D_PIPEM] = ACTIONS(1),
    [anon_sym_M_PIPED] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__line] = STATE(3),
    [sym_label_def] = STATE(3),
    [sym__instruction] = STATE(3),
    [sym_a_inst] = STATE(3),
    [sym_c_inst] = STATE(3),
    [sym__dest_def] = STATE(15),
    [sym_dest] = STATE(21),
    [sym_comp] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_A] = ACTIONS(9),
    [anon_sym_D] = ACTIONS(9),
    [anon_sym_M] = ACTIONS(9),
    [anon_sym_MD] = ACTIONS(11),
    [anon_sym_DM] = ACTIONS(11),
    [anon_sym_AM] = ACTIONS(11),
    [anon_sym_MA] = ACTIONS(11),
    [anon_sym_AD] = ACTIONS(11),
    [anon_sym_DA] = ACTIONS(11),
    [anon_sym_DMA] = ACTIONS(13),
    [anon_sym_DAM] = ACTIONS(13),
    [anon_sym_ADM] = ACTIONS(13),
    [anon_sym_MAD] = ACTIONS(13),
    [anon_sym_MDA] = ACTIONS(13),
    [anon_sym_AMD] = ACTIONS(13),
    [anon_sym_0] = ACTIONS(15),
    [anon_sym_1] = ACTIONS(15),
    [anon_sym_DASH1] = ACTIONS(15),
    [anon_sym_BANGD] = ACTIONS(15),
    [anon_sym_BANGA] = ACTIONS(15),
    [anon_sym_BANGM] = ACTIONS(15),
    [anon_sym_DASHD] = ACTIONS(15),
    [anon_sym_DASHA] = ACTIONS(15),
    [anon_sym_DASHM] = ACTIONS(15),
    [anon_sym_D_PLUS1] = ACTIONS(15),
    [anon_sym_D_DASH1] = ACTIONS(15),
    [anon_sym_A_PLUS1] = ACTIONS(15),
    [anon_sym_A_DASH1] = ACTIONS(15),
    [anon_sym_M_PLUS1] = ACTIONS(15),
    [anon_sym_M_DASH1] = ACTIONS(15),
    [anon_sym_D_PLUSA] = ACTIONS(15),
    [anon_sym_A_PLUSD] = ACTIONS(15),
    [anon_sym_D_PLUSM] = ACTIONS(15),
    [anon_sym_M_PLUSD] = ACTIONS(15),
    [anon_sym_D_DASHA] = ACTIONS(15),
    [anon_sym_A_DASHD] = ACTIONS(15),
    [anon_sym_D_DASHM] = ACTIONS(15),
    [anon_sym_M_DASHD] = ACTIONS(15),
    [anon_sym_D_AMPA] = ACTIONS(15),
    [anon_sym_A_AMPD] = ACTIONS(15),
    [anon_sym_D_AMPM] = ACTIONS(15),
    [anon_sym_M_AMPD] = ACTIONS(15),
    [anon_sym_D_PIPEA] = ACTIONS(15),
    [anon_sym_A_PIPED] = ACTIONS(15),
    [anon_sym_D_PIPEM] = ACTIONS(15),
    [anon_sym_M_PIPED] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
  [2] = {
    [sym__line] = STATE(2),
    [sym_label_def] = STATE(2),
    [sym__instruction] = STATE(2),
    [sym_a_inst] = STATE(2),
    [sym_c_inst] = STATE(2),
    [sym__dest_def] = STATE(15),
    [sym_dest] = STATE(21),
    [sym_comp] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(24),
    [anon_sym_A] = ACTIONS(27),
    [anon_sym_D] = ACTIONS(27),
    [anon_sym_M] = ACTIONS(27),
    [anon_sym_MD] = ACTIONS(30),
    [anon_sym_DM] = ACTIONS(30),
    [anon_sym_AM] = ACTIONS(30),
    [anon_sym_MA] = ACTIONS(30),
    [anon_sym_AD] = ACTIONS(30),
    [anon_sym_DA] = ACTIONS(30),
    [anon_sym_DMA] = ACTIONS(33),
    [anon_sym_DAM] = ACTIONS(33),
    [anon_sym_ADM] = ACTIONS(33),
    [anon_sym_MAD] = ACTIONS(33),
    [anon_sym_MDA] = ACTIONS(33),
    [anon_sym_AMD] = ACTIONS(33),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_DASH1] = ACTIONS(36),
    [anon_sym_BANGD] = ACTIONS(36),
    [anon_sym_BANGA] = ACTIONS(36),
    [anon_sym_BANGM] = ACTIONS(36),
    [anon_sym_DASHD] = ACTIONS(36),
    [anon_sym_DASHA] = ACTIONS(36),
    [anon_sym_DASHM] = ACTIONS(36),
    [anon_sym_D_PLUS1] = ACTIONS(36),
    [anon_sym_D_DASH1] = ACTIONS(36),
    [anon_sym_A_PLUS1] = ACTIONS(36),
    [anon_sym_A_DASH1] = ACTIONS(36),
    [anon_sym_M_PLUS1] = ACTIONS(36),
    [anon_sym_M_DASH1] = ACTIONS(36),
    [anon_sym_D_PLUSA] = ACTIONS(36),
    [anon_sym_A_PLUSD] = ACTIONS(36),
    [anon_sym_D_PLUSM] = ACTIONS(36),
    [anon_sym_M_PLUSD] = ACTIONS(36),
    [anon_sym_D_DASHA] = ACTIONS(36),
    [anon_sym_A_DASHD] = ACTIONS(36),
    [anon_sym_D_DASHM] = ACTIONS(36),
    [anon_sym_M_DASHD] = ACTIONS(36),
    [anon_sym_D_AMPA] = ACTIONS(36),
    [anon_sym_A_AMPD] = ACTIONS(36),
    [anon_sym_D_AMPM] = ACTIONS(36),
    [anon_sym_M_AMPD] = ACTIONS(36),
    [anon_sym_D_PIPEA] = ACTIONS(36),
    [anon_sym_A_PIPED] = ACTIONS(36),
    [anon_sym_D_PIPEM] = ACTIONS(36),
    [anon_sym_M_PIPED] = ACTIONS(36),
    [sym_comment] = ACTIONS(39),
  },
  [3] = {
    [sym__line] = STATE(2),
    [sym_label_def] = STATE(2),
    [sym__instruction] = STATE(2),
    [sym_a_inst] = STATE(2),
    [sym_c_inst] = STATE(2),
    [sym__dest_def] = STATE(15),
    [sym_dest] = STATE(21),
    [sym_comp] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_A] = ACTIONS(9),
    [anon_sym_D] = ACTIONS(9),
    [anon_sym_M] = ACTIONS(9),
    [anon_sym_MD] = ACTIONS(11),
    [anon_sym_DM] = ACTIONS(11),
    [anon_sym_AM] = ACTIONS(11),
    [anon_sym_MA] = ACTIONS(11),
    [anon_sym_AD] = ACTIONS(11),
    [anon_sym_DA] = ACTIONS(11),
    [anon_sym_DMA] = ACTIONS(13),
    [anon_sym_DAM] = ACTIONS(13),
    [anon_sym_ADM] = ACTIONS(13),
    [anon_sym_MAD] = ACTIONS(13),
    [anon_sym_MDA] = ACTIONS(13),
    [anon_sym_AMD] = ACTIONS(13),
    [anon_sym_0] = ACTIONS(15),
    [anon_sym_1] = ACTIONS(15),
    [anon_sym_DASH1] = ACTIONS(15),
    [anon_sym_BANGD] = ACTIONS(15),
    [anon_sym_BANGA] = ACTIONS(15),
    [anon_sym_BANGM] = ACTIONS(15),
    [anon_sym_DASHD] = ACTIONS(15),
    [anon_sym_DASHA] = ACTIONS(15),
    [anon_sym_DASHM] = ACTIONS(15),
    [anon_sym_D_PLUS1] = ACTIONS(15),
    [anon_sym_D_DASH1] = ACTIONS(15),
    [anon_sym_A_PLUS1] = ACTIONS(15),
    [anon_sym_A_DASH1] = ACTIONS(15),
    [anon_sym_M_PLUS1] = ACTIONS(15),
    [anon_sym_M_DASH1] = ACTIONS(15),
    [anon_sym_D_PLUSA] = ACTIONS(15),
    [anon_sym_A_PLUSD] = ACTIONS(15),
    [anon_sym_D_PLUSM] = ACTIONS(15),
    [anon_sym_M_PLUSD] = ACTIONS(15),
    [anon_sym_D_DASHA] = ACTIONS(15),
    [anon_sym_A_DASHD] = ACTIONS(15),
    [anon_sym_D_DASHM] = ACTIONS(15),
    [anon_sym_M_DASHD] = ACTIONS(15),
    [anon_sym_D_AMPA] = ACTIONS(15),
    [anon_sym_A_AMPD] = ACTIONS(15),
    [anon_sym_D_AMPM] = ACTIONS(15),
    [anon_sym_M_AMPD] = ACTIONS(15),
    [anon_sym_D_PIPEA] = ACTIONS(15),
    [anon_sym_A_PIPED] = ACTIONS(15),
    [anon_sym_D_PIPEM] = ACTIONS(15),
    [anon_sym_M_PIPED] = ACTIONS(15),
    [sym_comment] = ACTIONS(44),
  },
  [4] = {
    [sym__jump_def] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_A] = ACTIONS(50),
    [anon_sym_D] = ACTIONS(50),
    [anon_sym_M] = ACTIONS(50),
    [anon_sym_MD] = ACTIONS(50),
    [anon_sym_DM] = ACTIONS(50),
    [anon_sym_AM] = ACTIONS(50),
    [anon_sym_MA] = ACTIONS(50),
    [anon_sym_AD] = ACTIONS(50),
    [anon_sym_DA] = ACTIONS(50),
    [anon_sym_DMA] = ACTIONS(46),
    [anon_sym_DAM] = ACTIONS(46),
    [anon_sym_ADM] = ACTIONS(46),
    [anon_sym_MAD] = ACTIONS(46),
    [anon_sym_MDA] = ACTIONS(46),
    [anon_sym_AMD] = ACTIONS(46),
    [anon_sym_0] = ACTIONS(46),
    [anon_sym_1] = ACTIONS(46),
    [anon_sym_DASH1] = ACTIONS(46),
    [anon_sym_BANGD] = ACTIONS(46),
    [anon_sym_BANGA] = ACTIONS(46),
    [anon_sym_BANGM] = ACTIONS(46),
    [anon_sym_DASHD] = ACTIONS(46),
    [anon_sym_DASHA] = ACTIONS(46),
    [anon_sym_DASHM] = ACTIONS(46),
    [anon_sym_D_PLUS1] = ACTIONS(46),
    [anon_sym_D_DASH1] = ACTIONS(46),
    [anon_sym_A_PLUS1] = ACTIONS(46),
    [anon_sym_A_DASH1] = ACTIONS(46),
    [anon_sym_M_PLUS1] = ACTIONS(46),
    [anon_sym_M_DASH1] = ACTIONS(46),
    [anon_sym_D_PLUSA] = ACTIONS(46),
    [anon_sym_A_PLUSD] = ACTIONS(46),
    [anon_sym_D_PLUSM] = ACTIONS(46),
    [anon_sym_M_PLUSD] = ACTIONS(46),
    [anon_sym_D_DASHA] = ACTIONS(46),
    [anon_sym_A_DASHD] = ACTIONS(46),
    [anon_sym_D_DASHM] = ACTIONS(46),
    [anon_sym_M_DASHD] = ACTIONS(46),
    [anon_sym_D_AMPA] = ACTIONS(46),
    [anon_sym_A_AMPD] = ACTIONS(46),
    [anon_sym_D_AMPM] = ACTIONS(46),
    [anon_sym_M_AMPD] = ACTIONS(46),
    [anon_sym_D_PIPEA] = ACTIONS(46),
    [anon_sym_A_PIPED] = ACTIONS(46),
    [anon_sym_D_PIPEM] = ACTIONS(46),
    [anon_sym_M_PIPED] = ACTIONS(46),
    [sym_comment] = ACTIONS(46),
  },
  [5] = {
    [sym__jump_def] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_AT] = ACTIONS(52),
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_A] = ACTIONS(54),
    [anon_sym_D] = ACTIONS(54),
    [anon_sym_M] = ACTIONS(54),
    [anon_sym_MD] = ACTIONS(54),
    [anon_sym_DM] = ACTIONS(54),
    [anon_sym_AM] = ACTIONS(54),
    [anon_sym_MA] = ACTIONS(54),
    [anon_sym_AD] = ACTIONS(54),
    [anon_sym_DA] = ACTIONS(54),
    [anon_sym_DMA] = ACTIONS(52),
    [anon_sym_DAM] = ACTIONS(52),
    [anon_sym_ADM] = ACTIONS(52),
    [anon_sym_MAD] = ACTIONS(52),
    [anon_sym_MDA] = ACTIONS(52),
    [anon_sym_AMD] = ACTIONS(52),
    [anon_sym_0] = ACTIONS(52),
    [anon_sym_1] = ACTIONS(52),
    [anon_sym_DASH1] = ACTIONS(52),
    [anon_sym_BANGD] = ACTIONS(52),
    [anon_sym_BANGA] = ACTIONS(52),
    [anon_sym_BANGM] = ACTIONS(52),
    [anon_sym_DASHD] = ACTIONS(52),
    [anon_sym_DASHA] = ACTIONS(52),
    [anon_sym_DASHM] = ACTIONS(52),
    [anon_sym_D_PLUS1] = ACTIONS(52),
    [anon_sym_D_DASH1] = ACTIONS(52),
    [anon_sym_A_PLUS1] = ACTIONS(52),
    [anon_sym_A_DASH1] = ACTIONS(52),
    [anon_sym_M_PLUS1] = ACTIONS(52),
    [anon_sym_M_DASH1] = ACTIONS(52),
    [anon_sym_D_PLUSA] = ACTIONS(52),
    [anon_sym_A_PLUSD] = ACTIONS(52),
    [anon_sym_D_PLUSM] = ACTIONS(52),
    [anon_sym_M_PLUSD] = ACTIONS(52),
    [anon_sym_D_DASHA] = ACTIONS(52),
    [anon_sym_A_DASHD] = ACTIONS(52),
    [anon_sym_D_DASHM] = ACTIONS(52),
    [anon_sym_M_DASHD] = ACTIONS(52),
    [anon_sym_D_AMPA] = ACTIONS(52),
    [anon_sym_A_AMPD] = ACTIONS(52),
    [anon_sym_D_AMPM] = ACTIONS(52),
    [anon_sym_M_AMPD] = ACTIONS(52),
    [anon_sym_D_PIPEA] = ACTIONS(52),
    [anon_sym_A_PIPED] = ACTIONS(52),
    [anon_sym_D_PIPEM] = ACTIONS(52),
    [anon_sym_M_PIPED] = ACTIONS(52),
    [sym_comment] = ACTIONS(52),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(56),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_SEMI] = ACTIONS(56),
    [anon_sym_A] = ACTIONS(60),
    [anon_sym_D] = ACTIONS(60),
    [anon_sym_M] = ACTIONS(60),
    [anon_sym_MD] = ACTIONS(60),
    [anon_sym_DM] = ACTIONS(60),
    [anon_sym_AM] = ACTIONS(60),
    [anon_sym_MA] = ACTIONS(60),
    [anon_sym_AD] = ACTIONS(60),
    [anon_sym_DA] = ACTIONS(60),
    [anon_sym_DMA] = ACTIONS(56),
    [anon_sym_DAM] = ACTIONS(56),
    [anon_sym_ADM] = ACTIONS(56),
    [anon_sym_MAD] = ACTIONS(56),
    [anon_sym_MDA] = ACTIONS(56),
    [anon_sym_AMD] = ACTIONS(56),
    [anon_sym_0] = ACTIONS(56),
    [anon_sym_1] = ACTIONS(56),
    [anon_sym_DASH1] = ACTIONS(56),
    [anon_sym_BANGD] = ACTIONS(56),
    [anon_sym_BANGA] = ACTIONS(56),
    [anon_sym_BANGM] = ACTIONS(56),
    [anon_sym_DASHD] = ACTIONS(56),
    [anon_sym_DASHA] = ACTIONS(56),
    [anon_sym_DASHM] = ACTIONS(56),
    [anon_sym_D_PLUS1] = ACTIONS(56),
    [anon_sym_D_DASH1] = ACTIONS(56),
    [anon_sym_A_PLUS1] = ACTIONS(56),
    [anon_sym_A_DASH1] = ACTIONS(56),
    [anon_sym_M_PLUS1] = ACTIONS(56),
    [anon_sym_M_DASH1] = ACTIONS(56),
    [anon_sym_D_PLUSA] = ACTIONS(56),
    [anon_sym_A_PLUSD] = ACTIONS(56),
    [anon_sym_D_PLUSM] = ACTIONS(56),
    [anon_sym_M_PLUSD] = ACTIONS(56),
    [anon_sym_D_DASHA] = ACTIONS(56),
    [anon_sym_A_DASHD] = ACTIONS(56),
    [anon_sym_D_DASHM] = ACTIONS(56),
    [anon_sym_M_DASHD] = ACTIONS(56),
    [anon_sym_D_AMPA] = ACTIONS(56),
    [anon_sym_A_AMPD] = ACTIONS(56),
    [anon_sym_D_AMPM] = ACTIONS(56),
    [anon_sym_M_AMPD] = ACTIONS(56),
    [anon_sym_D_PIPEA] = ACTIONS(56),
    [anon_sym_A_PIPED] = ACTIONS(56),
    [anon_sym_D_PIPEM] = ACTIONS(56),
    [anon_sym_M_PIPED] = ACTIONS(56),
    [sym_comment] = ACTIONS(56),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(62),
    [anon_sym_A] = ACTIONS(64),
    [anon_sym_D] = ACTIONS(64),
    [anon_sym_M] = ACTIONS(64),
    [anon_sym_MD] = ACTIONS(64),
    [anon_sym_DM] = ACTIONS(64),
    [anon_sym_AM] = ACTIONS(64),
    [anon_sym_MA] = ACTIONS(64),
    [anon_sym_AD] = ACTIONS(64),
    [anon_sym_DA] = ACTIONS(64),
    [anon_sym_DMA] = ACTIONS(62),
    [anon_sym_DAM] = ACTIONS(62),
    [anon_sym_ADM] = ACTIONS(62),
    [anon_sym_MAD] = ACTIONS(62),
    [anon_sym_MDA] = ACTIONS(62),
    [anon_sym_AMD] = ACTIONS(62),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_1] = ACTIONS(62),
    [anon_sym_DASH1] = ACTIONS(62),
    [anon_sym_BANGD] = ACTIONS(62),
    [anon_sym_BANGA] = ACTIONS(62),
    [anon_sym_BANGM] = ACTIONS(62),
    [anon_sym_DASHD] = ACTIONS(62),
    [anon_sym_DASHA] = ACTIONS(62),
    [anon_sym_DASHM] = ACTIONS(62),
    [anon_sym_D_PLUS1] = ACTIONS(62),
    [anon_sym_D_DASH1] = ACTIONS(62),
    [anon_sym_A_PLUS1] = ACTIONS(62),
    [anon_sym_A_DASH1] = ACTIONS(62),
    [anon_sym_M_PLUS1] = ACTIONS(62),
    [anon_sym_M_DASH1] = ACTIONS(62),
    [anon_sym_D_PLUSA] = ACTIONS(62),
    [anon_sym_A_PLUSD] = ACTIONS(62),
    [anon_sym_D_PLUSM] = ACTIONS(62),
    [anon_sym_M_PLUSD] = ACTIONS(62),
    [anon_sym_D_DASHA] = ACTIONS(62),
    [anon_sym_A_DASHD] = ACTIONS(62),
    [anon_sym_D_DASHM] = ACTIONS(62),
    [anon_sym_M_DASHD] = ACTIONS(62),
    [anon_sym_D_AMPA] = ACTIONS(62),
    [anon_sym_A_AMPD] = ACTIONS(62),
    [anon_sym_D_AMPM] = ACTIONS(62),
    [anon_sym_M_AMPD] = ACTIONS(62),
    [anon_sym_D_PIPEA] = ACTIONS(62),
    [anon_sym_A_PIPED] = ACTIONS(62),
    [anon_sym_D_PIPEM] = ACTIONS(62),
    [anon_sym_M_PIPED] = ACTIONS(62),
    [sym_comment] = ACTIONS(62),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(56),
    [anon_sym_SEMI] = ACTIONS(56),
    [anon_sym_A] = ACTIONS(60),
    [anon_sym_D] = ACTIONS(60),
    [anon_sym_M] = ACTIONS(60),
    [anon_sym_MD] = ACTIONS(60),
    [anon_sym_DM] = ACTIONS(60),
    [anon_sym_AM] = ACTIONS(60),
    [anon_sym_MA] = ACTIONS(60),
    [anon_sym_AD] = ACTIONS(60),
    [anon_sym_DA] = ACTIONS(60),
    [anon_sym_DMA] = ACTIONS(56),
    [anon_sym_DAM] = ACTIONS(56),
    [anon_sym_ADM] = ACTIONS(56),
    [anon_sym_MAD] = ACTIONS(56),
    [anon_sym_MDA] = ACTIONS(56),
    [anon_sym_AMD] = ACTIONS(56),
    [anon_sym_0] = ACTIONS(56),
    [anon_sym_1] = ACTIONS(56),
    [anon_sym_DASH1] = ACTIONS(56),
    [anon_sym_BANGD] = ACTIONS(56),
    [anon_sym_BANGA] = ACTIONS(56),
    [anon_sym_BANGM] = ACTIONS(56),
    [anon_sym_DASHD] = ACTIONS(56),
    [anon_sym_DASHA] = ACTIONS(56),
    [anon_sym_DASHM] = ACTIONS(56),
    [anon_sym_D_PLUS1] = ACTIONS(56),
    [anon_sym_D_DASH1] = ACTIONS(56),
    [anon_sym_A_PLUS1] = ACTIONS(56),
    [anon_sym_A_DASH1] = ACTIONS(56),
    [anon_sym_M_PLUS1] = ACTIONS(56),
    [anon_sym_M_DASH1] = ACTIONS(56),
    [anon_sym_D_PLUSA] = ACTIONS(56),
    [anon_sym_A_PLUSD] = ACTIONS(56),
    [anon_sym_D_PLUSM] = ACTIONS(56),
    [anon_sym_M_PLUSD] = ACTIONS(56),
    [anon_sym_D_DASHA] = ACTIONS(56),
    [anon_sym_A_DASHD] = ACTIONS(56),
    [anon_sym_D_DASHM] = ACTIONS(56),
    [anon_sym_M_DASHD] = ACTIONS(56),
    [anon_sym_D_AMPA] = ACTIONS(56),
    [anon_sym_A_AMPD] = ACTIONS(56),
    [anon_sym_D_AMPM] = ACTIONS(56),
    [anon_sym_M_AMPD] = ACTIONS(56),
    [anon_sym_D_PIPEA] = ACTIONS(56),
    [anon_sym_A_PIPED] = ACTIONS(56),
    [anon_sym_D_PIPEM] = ACTIONS(56),
    [anon_sym_M_PIPED] = ACTIONS(56),
    [sym_comment] = ACTIONS(56),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_AT] = ACTIONS(66),
    [anon_sym_A] = ACTIONS(68),
    [anon_sym_D] = ACTIONS(68),
    [anon_sym_M] = ACTIONS(68),
    [anon_sym_MD] = ACTIONS(68),
    [anon_sym_DM] = ACTIONS(68),
    [anon_sym_AM] = ACTIONS(68),
    [anon_sym_MA] = ACTIONS(68),
    [anon_sym_AD] = ACTIONS(68),
    [anon_sym_DA] = ACTIONS(68),
    [anon_sym_DMA] = ACTIONS(66),
    [anon_sym_DAM] = ACTIONS(66),
    [anon_sym_ADM] = ACTIONS(66),
    [anon_sym_MAD] = ACTIONS(66),
    [anon_sym_MDA] = ACTIONS(66),
    [anon_sym_AMD] = ACTIONS(66),
    [anon_sym_0] = ACTIONS(66),
    [anon_sym_1] = ACTIONS(66),
    [anon_sym_DASH1] = ACTIONS(66),
    [anon_sym_BANGD] = ACTIONS(66),
    [anon_sym_BANGA] = ACTIONS(66),
    [anon_sym_BANGM] = ACTIONS(66),
    [anon_sym_DASHD] = ACTIONS(66),
    [anon_sym_DASHA] = ACTIONS(66),
    [anon_sym_DASHM] = ACTIONS(66),
    [anon_sym_D_PLUS1] = ACTIONS(66),
    [anon_sym_D_DASH1] = ACTIONS(66),
    [anon_sym_A_PLUS1] = ACTIONS(66),
    [anon_sym_A_DASH1] = ACTIONS(66),
    [anon_sym_M_PLUS1] = ACTIONS(66),
    [anon_sym_M_DASH1] = ACTIONS(66),
    [anon_sym_D_PLUSA] = ACTIONS(66),
    [anon_sym_A_PLUSD] = ACTIONS(66),
    [anon_sym_D_PLUSM] = ACTIONS(66),
    [anon_sym_M_PLUSD] = ACTIONS(66),
    [anon_sym_D_DASHA] = ACTIONS(66),
    [anon_sym_A_DASHD] = ACTIONS(66),
    [anon_sym_D_DASHM] = ACTIONS(66),
    [anon_sym_M_DASHD] = ACTIONS(66),
    [anon_sym_D_AMPA] = ACTIONS(66),
    [anon_sym_A_AMPD] = ACTIONS(66),
    [anon_sym_D_AMPM] = ACTIONS(66),
    [anon_sym_M_AMPD] = ACTIONS(66),
    [anon_sym_D_PIPEA] = ACTIONS(66),
    [anon_sym_A_PIPED] = ACTIONS(66),
    [anon_sym_D_PIPEM] = ACTIONS(66),
    [anon_sym_M_PIPED] = ACTIONS(66),
    [sym_comment] = ACTIONS(66),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_AT] = ACTIONS(52),
    [anon_sym_A] = ACTIONS(54),
    [anon_sym_D] = ACTIONS(54),
    [anon_sym_M] = ACTIONS(54),
    [anon_sym_MD] = ACTIONS(54),
    [anon_sym_DM] = ACTIONS(54),
    [anon_sym_AM] = ACTIONS(54),
    [anon_sym_MA] = ACTIONS(54),
    [anon_sym_AD] = ACTIONS(54),
    [anon_sym_DA] = ACTIONS(54),
    [anon_sym_DMA] = ACTIONS(52),
    [anon_sym_DAM] = ACTIONS(52),
    [anon_sym_ADM] = ACTIONS(52),
    [anon_sym_MAD] = ACTIONS(52),
    [anon_sym_MDA] = ACTIONS(52),
    [anon_sym_AMD] = ACTIONS(52),
    [anon_sym_0] = ACTIONS(52),
    [anon_sym_1] = ACTIONS(52),
    [anon_sym_DASH1] = ACTIONS(52),
    [anon_sym_BANGD] = ACTIONS(52),
    [anon_sym_BANGA] = ACTIONS(52),
    [anon_sym_BANGM] = ACTIONS(52),
    [anon_sym_DASHD] = ACTIONS(52),
    [anon_sym_DASHA] = ACTIONS(52),
    [anon_sym_DASHM] = ACTIONS(52),
    [anon_sym_D_PLUS1] = ACTIONS(52),
    [anon_sym_D_DASH1] = ACTIONS(52),
    [anon_sym_A_PLUS1] = ACTIONS(52),
    [anon_sym_A_DASH1] = ACTIONS(52),
    [anon_sym_M_PLUS1] = ACTIONS(52),
    [anon_sym_M_DASH1] = ACTIONS(52),
    [anon_sym_D_PLUSA] = ACTIONS(52),
    [anon_sym_A_PLUSD] = ACTIONS(52),
    [anon_sym_D_PLUSM] = ACTIONS(52),
    [anon_sym_M_PLUSD] = ACTIONS(52),
    [anon_sym_D_DASHA] = ACTIONS(52),
    [anon_sym_A_DASHD] = ACTIONS(52),
    [anon_sym_D_DASHM] = ACTIONS(52),
    [anon_sym_M_DASHD] = ACTIONS(52),
    [anon_sym_D_AMPA] = ACTIONS(52),
    [anon_sym_A_AMPD] = ACTIONS(52),
    [anon_sym_D_AMPM] = ACTIONS(52),
    [anon_sym_M_AMPD] = ACTIONS(52),
    [anon_sym_D_PIPEA] = ACTIONS(52),
    [anon_sym_A_PIPED] = ACTIONS(52),
    [anon_sym_D_PIPEM] = ACTIONS(52),
    [anon_sym_M_PIPED] = ACTIONS(52),
    [sym_comment] = ACTIONS(52),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_D] = ACTIONS(72),
    [anon_sym_M] = ACTIONS(72),
    [anon_sym_MD] = ACTIONS(72),
    [anon_sym_DM] = ACTIONS(72),
    [anon_sym_AM] = ACTIONS(72),
    [anon_sym_MA] = ACTIONS(72),
    [anon_sym_AD] = ACTIONS(72),
    [anon_sym_DA] = ACTIONS(72),
    [anon_sym_DMA] = ACTIONS(70),
    [anon_sym_DAM] = ACTIONS(70),
    [anon_sym_ADM] = ACTIONS(70),
    [anon_sym_MAD] = ACTIONS(70),
    [anon_sym_MDA] = ACTIONS(70),
    [anon_sym_AMD] = ACTIONS(70),
    [anon_sym_0] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_DASH1] = ACTIONS(70),
    [anon_sym_BANGD] = ACTIONS(70),
    [anon_sym_BANGA] = ACTIONS(70),
    [anon_sym_BANGM] = ACTIONS(70),
    [anon_sym_DASHD] = ACTIONS(70),
    [anon_sym_DASHA] = ACTIONS(70),
    [anon_sym_DASHM] = ACTIONS(70),
    [anon_sym_D_PLUS1] = ACTIONS(70),
    [anon_sym_D_DASH1] = ACTIONS(70),
    [anon_sym_A_PLUS1] = ACTIONS(70),
    [anon_sym_A_DASH1] = ACTIONS(70),
    [anon_sym_M_PLUS1] = ACTIONS(70),
    [anon_sym_M_DASH1] = ACTIONS(70),
    [anon_sym_D_PLUSA] = ACTIONS(70),
    [anon_sym_A_PLUSD] = ACTIONS(70),
    [anon_sym_D_PLUSM] = ACTIONS(70),
    [anon_sym_M_PLUSD] = ACTIONS(70),
    [anon_sym_D_DASHA] = ACTIONS(70),
    [anon_sym_A_DASHD] = ACTIONS(70),
    [anon_sym_D_DASHM] = ACTIONS(70),
    [anon_sym_M_DASHD] = ACTIONS(70),
    [anon_sym_D_AMPA] = ACTIONS(70),
    [anon_sym_A_AMPD] = ACTIONS(70),
    [anon_sym_D_AMPM] = ACTIONS(70),
    [anon_sym_M_AMPD] = ACTIONS(70),
    [anon_sym_D_PIPEA] = ACTIONS(70),
    [anon_sym_A_PIPED] = ACTIONS(70),
    [anon_sym_D_PIPEM] = ACTIONS(70),
    [anon_sym_M_PIPED] = ACTIONS(70),
    [sym_comment] = ACTIONS(70),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(74),
    [anon_sym_A] = ACTIONS(76),
    [anon_sym_D] = ACTIONS(76),
    [anon_sym_M] = ACTIONS(76),
    [anon_sym_MD] = ACTIONS(76),
    [anon_sym_DM] = ACTIONS(76),
    [anon_sym_AM] = ACTIONS(76),
    [anon_sym_MA] = ACTIONS(76),
    [anon_sym_AD] = ACTIONS(76),
    [anon_sym_DA] = ACTIONS(76),
    [anon_sym_DMA] = ACTIONS(74),
    [anon_sym_DAM] = ACTIONS(74),
    [anon_sym_ADM] = ACTIONS(74),
    [anon_sym_MAD] = ACTIONS(74),
    [anon_sym_MDA] = ACTIONS(74),
    [anon_sym_AMD] = ACTIONS(74),
    [anon_sym_0] = ACTIONS(74),
    [anon_sym_1] = ACTIONS(74),
    [anon_sym_DASH1] = ACTIONS(74),
    [anon_sym_BANGD] = ACTIONS(74),
    [anon_sym_BANGA] = ACTIONS(74),
    [anon_sym_BANGM] = ACTIONS(74),
    [anon_sym_DASHD] = ACTIONS(74),
    [anon_sym_DASHA] = ACTIONS(74),
    [anon_sym_DASHM] = ACTIONS(74),
    [anon_sym_D_PLUS1] = ACTIONS(74),
    [anon_sym_D_DASH1] = ACTIONS(74),
    [anon_sym_A_PLUS1] = ACTIONS(74),
    [anon_sym_A_DASH1] = ACTIONS(74),
    [anon_sym_M_PLUS1] = ACTIONS(74),
    [anon_sym_M_DASH1] = ACTIONS(74),
    [anon_sym_D_PLUSA] = ACTIONS(74),
    [anon_sym_A_PLUSD] = ACTIONS(74),
    [anon_sym_D_PLUSM] = ACTIONS(74),
    [anon_sym_M_PLUSD] = ACTIONS(74),
    [anon_sym_D_DASHA] = ACTIONS(74),
    [anon_sym_A_DASHD] = ACTIONS(74),
    [anon_sym_D_DASHM] = ACTIONS(74),
    [anon_sym_M_DASHD] = ACTIONS(74),
    [anon_sym_D_AMPA] = ACTIONS(74),
    [anon_sym_A_AMPD] = ACTIONS(74),
    [anon_sym_D_AMPM] = ACTIONS(74),
    [anon_sym_M_AMPD] = ACTIONS(74),
    [anon_sym_D_PIPEA] = ACTIONS(74),
    [anon_sym_A_PIPED] = ACTIONS(74),
    [anon_sym_D_PIPEM] = ACTIONS(74),
    [anon_sym_M_PIPED] = ACTIONS(74),
    [sym_comment] = ACTIONS(74),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_A] = ACTIONS(80),
    [anon_sym_D] = ACTIONS(80),
    [anon_sym_M] = ACTIONS(80),
    [anon_sym_MD] = ACTIONS(80),
    [anon_sym_DM] = ACTIONS(80),
    [anon_sym_AM] = ACTIONS(80),
    [anon_sym_MA] = ACTIONS(80),
    [anon_sym_AD] = ACTIONS(80),
    [anon_sym_DA] = ACTIONS(80),
    [anon_sym_DMA] = ACTIONS(78),
    [anon_sym_DAM] = ACTIONS(78),
    [anon_sym_ADM] = ACTIONS(78),
    [anon_sym_MAD] = ACTIONS(78),
    [anon_sym_MDA] = ACTIONS(78),
    [anon_sym_AMD] = ACTIONS(78),
    [anon_sym_0] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_DASH1] = ACTIONS(78),
    [anon_sym_BANGD] = ACTIONS(78),
    [anon_sym_BANGA] = ACTIONS(78),
    [anon_sym_BANGM] = ACTIONS(78),
    [anon_sym_DASHD] = ACTIONS(78),
    [anon_sym_DASHA] = ACTIONS(78),
    [anon_sym_DASHM] = ACTIONS(78),
    [anon_sym_D_PLUS1] = ACTIONS(78),
    [anon_sym_D_DASH1] = ACTIONS(78),
    [anon_sym_A_PLUS1] = ACTIONS(78),
    [anon_sym_A_DASH1] = ACTIONS(78),
    [anon_sym_M_PLUS1] = ACTIONS(78),
    [anon_sym_M_DASH1] = ACTIONS(78),
    [anon_sym_D_PLUSA] = ACTIONS(78),
    [anon_sym_A_PLUSD] = ACTIONS(78),
    [anon_sym_D_PLUSM] = ACTIONS(78),
    [anon_sym_M_PLUSD] = ACTIONS(78),
    [anon_sym_D_DASHA] = ACTIONS(78),
    [anon_sym_A_DASHD] = ACTIONS(78),
    [anon_sym_D_DASHM] = ACTIONS(78),
    [anon_sym_M_DASHD] = ACTIONS(78),
    [anon_sym_D_AMPA] = ACTIONS(78),
    [anon_sym_A_AMPD] = ACTIONS(78),
    [anon_sym_D_AMPM] = ACTIONS(78),
    [anon_sym_M_AMPD] = ACTIONS(78),
    [anon_sym_D_PIPEA] = ACTIONS(78),
    [anon_sym_A_PIPED] = ACTIONS(78),
    [anon_sym_D_PIPEM] = ACTIONS(78),
    [anon_sym_M_PIPED] = ACTIONS(78),
    [sym_comment] = ACTIONS(78),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_AT] = ACTIONS(82),
    [anon_sym_A] = ACTIONS(84),
    [anon_sym_D] = ACTIONS(84),
    [anon_sym_M] = ACTIONS(84),
    [anon_sym_MD] = ACTIONS(84),
    [anon_sym_DM] = ACTIONS(84),
    [anon_sym_AM] = ACTIONS(84),
    [anon_sym_MA] = ACTIONS(84),
    [anon_sym_AD] = ACTIONS(84),
    [anon_sym_DA] = ACTIONS(84),
    [anon_sym_DMA] = ACTIONS(82),
    [anon_sym_DAM] = ACTIONS(82),
    [anon_sym_ADM] = ACTIONS(82),
    [anon_sym_MAD] = ACTIONS(82),
    [anon_sym_MDA] = ACTIONS(82),
    [anon_sym_AMD] = ACTIONS(82),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_1] = ACTIONS(82),
    [anon_sym_DASH1] = ACTIONS(82),
    [anon_sym_BANGD] = ACTIONS(82),
    [anon_sym_BANGA] = ACTIONS(82),
    [anon_sym_BANGM] = ACTIONS(82),
    [anon_sym_DASHD] = ACTIONS(82),
    [anon_sym_DASHA] = ACTIONS(82),
    [anon_sym_DASHM] = ACTIONS(82),
    [anon_sym_D_PLUS1] = ACTIONS(82),
    [anon_sym_D_DASH1] = ACTIONS(82),
    [anon_sym_A_PLUS1] = ACTIONS(82),
    [anon_sym_A_DASH1] = ACTIONS(82),
    [anon_sym_M_PLUS1] = ACTIONS(82),
    [anon_sym_M_DASH1] = ACTIONS(82),
    [anon_sym_D_PLUSA] = ACTIONS(82),
    [anon_sym_A_PLUSD] = ACTIONS(82),
    [anon_sym_D_PLUSM] = ACTIONS(82),
    [anon_sym_M_PLUSD] = ACTIONS(82),
    [anon_sym_D_DASHA] = ACTIONS(82),
    [anon_sym_A_DASHD] = ACTIONS(82),
    [anon_sym_D_DASHM] = ACTIONS(82),
    [anon_sym_M_DASHD] = ACTIONS(82),
    [anon_sym_D_AMPA] = ACTIONS(82),
    [anon_sym_A_AMPD] = ACTIONS(82),
    [anon_sym_D_AMPM] = ACTIONS(82),
    [anon_sym_M_AMPD] = ACTIONS(82),
    [anon_sym_D_PIPEA] = ACTIONS(82),
    [anon_sym_A_PIPED] = ACTIONS(82),
    [anon_sym_D_PIPEM] = ACTIONS(82),
    [anon_sym_M_PIPED] = ACTIONS(82),
    [sym_comment] = ACTIONS(82),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(5), 1,
      sym_comp,
    ACTIONS(86), 3,
      anon_sym_A,
      anon_sym_D,
      anon_sym_M,
    ACTIONS(15), 31,
      anon_sym_0,
      anon_sym_1,
      anon_sym_DASH1,
      anon_sym_BANGD,
      anon_sym_BANGA,
      anon_sym_BANGM,
      anon_sym_DASHD,
      anon_sym_DASHA,
      anon_sym_DASHM,
      anon_sym_D_PLUS1,
      anon_sym_D_DASH1,
      anon_sym_A_PLUS1,
      anon_sym_A_DASH1,
      anon_sym_M_PLUS1,
      anon_sym_M_DASH1,
      anon_sym_D_PLUSA,
      anon_sym_A_PLUSD,
      anon_sym_D_PLUSM,
      anon_sym_M_PLUSD,
      anon_sym_D_DASHA,
      anon_sym_A_DASHD,
      anon_sym_D_DASHM,
      anon_sym_M_DASHD,
      anon_sym_D_AMPA,
      anon_sym_A_AMPD,
      anon_sym_D_AMPM,
      anon_sym_M_AMPD,
      anon_sym_D_PIPEA,
      anon_sym_A_PIPED,
      anon_sym_D_PIPEM,
      anon_sym_M_PIPED,
  [42] = 2,
    ACTIONS(88), 3,
      anon_sym_A,
      anon_sym_D,
      anon_sym_M,
    ACTIONS(90), 31,
      anon_sym_0,
      anon_sym_1,
      anon_sym_DASH1,
      anon_sym_BANGD,
      anon_sym_BANGA,
      anon_sym_BANGM,
      anon_sym_DASHD,
      anon_sym_DASHA,
      anon_sym_DASHM,
      anon_sym_D_PLUS1,
      anon_sym_D_DASH1,
      anon_sym_A_PLUS1,
      anon_sym_A_DASH1,
      anon_sym_M_PLUS1,
      anon_sym_M_DASH1,
      anon_sym_D_PLUSA,
      anon_sym_A_PLUSD,
      anon_sym_D_PLUSM,
      anon_sym_M_PLUSD,
      anon_sym_D_DASHA,
      anon_sym_A_DASHD,
      anon_sym_D_DASHM,
      anon_sym_M_DASHD,
      anon_sym_D_AMPA,
      anon_sym_A_AMPD,
      anon_sym_D_AMPM,
      anon_sym_M_AMPD,
      anon_sym_D_PIPEA,
      anon_sym_A_PIPED,
      anon_sym_D_PIPEM,
      anon_sym_M_PIPED,
  [81] = 2,
    STATE(14), 1,
      sym_jump,
    ACTIONS(92), 6,
      anon_sym_JMP,
      anon_sym_JEQ,
      anon_sym_JLE,
      anon_sym_JGT,
      anon_sym_JGE,
      anon_sym_JNE,
  [93] = 2,
    STATE(22), 1,
      sym_label_ident,
    ACTIONS(94), 2,
      sym__alpha,
      sym__numeric,
  [101] = 2,
    STATE(9), 1,
      sym_label_ident,
    ACTIONS(94), 2,
      sym__alpha,
      sym__numeric,
  [109] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [113] = 1,
    ACTIONS(98), 1,
      anon_sym_EQ,
  [117] = 1,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
  [121] = 1,
    ACTIONS(58), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 42,
  [SMALL_STATE(17)] = 81,
  [SMALL_STATE(18)] = 93,
  [SMALL_STATE(19)] = 101,
  [SMALL_STATE(20)] = 109,
  [SMALL_STATE(21)] = 113,
  [SMALL_STATE(22)] = 117,
  [SMALL_STATE(23)] = 121,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_inst, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_inst, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_inst, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_inst, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dest, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_ident, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_ident, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a_inst, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_a_inst, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_def, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_def, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_inst, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_inst, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jump_def, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jump_def, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dest_def, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dest_def, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
