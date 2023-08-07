#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym__newline = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_AT = 4,
  anon_sym_EQ = 5,
  anon_sym_SEMI = 6,
  anon_sym_JMP = 7,
  anon_sym_JEQ = 8,
  anon_sym_JLT = 9,
  anon_sym_JGT = 10,
  anon_sym_JGE = 11,
  anon_sym_JLE = 12,
  anon_sym_JNE = 13,
  anon_sym_A = 14,
  anon_sym_M = 15,
  anon_sym_D = 16,
  anon_sym_AM = 17,
  anon_sym_AD = 18,
  anon_sym_MA = 19,
  anon_sym_MD = 20,
  anon_sym_DA = 21,
  anon_sym_DM = 22,
  anon_sym_AMD = 23,
  anon_sym_ADM = 24,
  anon_sym_MAD = 25,
  anon_sym_MDA = 26,
  anon_sym_DAM = 27,
  anon_sym_DMA = 28,
  anon_sym_0 = 29,
  anon_sym_1 = 30,
  anon_sym_DASH1 = 31,
  anon_sym_BANGD = 32,
  anon_sym_BANGA = 33,
  anon_sym_BANGM = 34,
  anon_sym_DASHD = 35,
  anon_sym_DASHA = 36,
  anon_sym_DASHM = 37,
  anon_sym_D_PLUS1 = 38,
  anon_sym_D_DASH1 = 39,
  anon_sym_A_PLUS1 = 40,
  anon_sym_A_DASH1 = 41,
  anon_sym_M_PLUS1 = 42,
  anon_sym_M_DASH1 = 43,
  anon_sym_D_PLUSA = 44,
  anon_sym_A_PLUSD = 45,
  anon_sym_D_PLUSM = 46,
  anon_sym_M_PLUSD = 47,
  anon_sym_D_DASHA = 48,
  anon_sym_A_DASHD = 49,
  anon_sym_D_DASHM = 50,
  anon_sym_M_DASHD = 51,
  anon_sym_D_AMPA = 52,
  anon_sym_A_AMPD = 53,
  anon_sym_D_AMPM = 54,
  anon_sym_M_AMPD = 55,
  anon_sym_D_PIPEA = 56,
  anon_sym_A_PIPED = 57,
  anon_sym_D_PIPEM = 58,
  anon_sym_M_PIPED = 59,
  sym__alpha = 60,
  sym__numeric = 61,
  sym_comment = 62,
  sym_source_file = 63,
  sym__line = 64,
  sym_label_def = 65,
  sym__instruction = 66,
  sym_a_inst = 67,
  sym_c_inst = 68,
  sym_label_ident = 69,
  sym__dest_def = 70,
  sym__jump_def = 71,
  sym_jump = 72,
  sym_dest = 73,
  sym_comp = 74,
  aux_sym_source_file_repeat1 = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_JMP] = "JMP",
  [anon_sym_JEQ] = "JEQ",
  [anon_sym_JLT] = "JLT",
  [anon_sym_JGT] = "JGT",
  [anon_sym_JGE] = "JGE",
  [anon_sym_JLE] = "JLE",
  [anon_sym_JNE] = "JNE",
  [anon_sym_A] = "A",
  [anon_sym_M] = "M",
  [anon_sym_D] = "D",
  [anon_sym_AM] = "AM",
  [anon_sym_AD] = "AD",
  [anon_sym_MA] = "MA",
  [anon_sym_MD] = "MD",
  [anon_sym_DA] = "DA",
  [anon_sym_DM] = "DM",
  [anon_sym_AMD] = "AMD",
  [anon_sym_ADM] = "ADM",
  [anon_sym_MAD] = "MAD",
  [anon_sym_MDA] = "MDA",
  [anon_sym_DAM] = "DAM",
  [anon_sym_DMA] = "DMA",
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
  [sym__newline] = sym__newline,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_JEQ] = anon_sym_JEQ,
  [anon_sym_JLT] = anon_sym_JLT,
  [anon_sym_JGT] = anon_sym_JGT,
  [anon_sym_JGE] = anon_sym_JGE,
  [anon_sym_JLE] = anon_sym_JLE,
  [anon_sym_JNE] = anon_sym_JNE,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_AM] = anon_sym_AM,
  [anon_sym_AD] = anon_sym_AD,
  [anon_sym_MA] = anon_sym_MA,
  [anon_sym_MD] = anon_sym_MD,
  [anon_sym_DA] = anon_sym_DA,
  [anon_sym_DM] = anon_sym_DM,
  [anon_sym_AMD] = anon_sym_AMD,
  [anon_sym_ADM] = anon_sym_ADM,
  [anon_sym_MAD] = anon_sym_MAD,
  [anon_sym_MDA] = anon_sym_MDA,
  [anon_sym_DAM] = anon_sym_DAM,
  [anon_sym_DMA] = anon_sym_DMA,
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
  [sym__newline] = {
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
  [anon_sym_JLT] = {
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
  [anon_sym_JLE] = {
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
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMD] = {
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
  [anon_sym_DAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DMA] = {
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(51);
      if (lookahead == 'J') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(49);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'D') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == 'D') ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(88);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'M') ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(89);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'M') ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(101);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'M') ADVANCE(104);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'M') ADVANCE(108);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(103);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'G') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'P') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'Q') ADVANCE(35);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'J') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_JEQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_JEQ);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_JLT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_JLT);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_JGT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_JGT);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_JGE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_JGE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_JLE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_JLE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_JNE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_JNE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '|') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == '|') ADVANCE(15);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(57);
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead == '|') ADVANCE(17);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == '|') ADVANCE(17);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(63);
      if (lookahead == '|') ADVANCE(13);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(64);
      if (lookahead == '|') ADVANCE(13);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AM);
      if (lookahead == 'D') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AM);
      if (lookahead == 'D') ADVANCE(65);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AD);
      if (lookahead == 'M') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AD);
      if (lookahead == 'M') ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_MA);
      if (lookahead == 'D') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_MA);
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_MD);
      if (lookahead == 'A') ADVANCE(72);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_MD);
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DA);
      if (lookahead == 'M') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DA);
      if (lookahead == 'M') ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DM);
      if (lookahead == 'A') ADVANCE(76);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DM);
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AMD);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMD);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_ADM);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ADM);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_MAD);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_MAD);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_MDA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_MDA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DAM);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DAM);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DMA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BANGD);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BANGA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BANGM);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASHD);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASHA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASHM);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_D_PLUS1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_D_DASH1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_A_PLUS1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_A_DASH1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_M_PLUS1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_M_DASH1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_D_PLUSA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_A_PLUSD);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_D_PLUSM);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_M_PLUSD);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_D_DASHA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_A_DASHD);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_D_DASHM);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_M_DASHD);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_D_AMPA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_A_AMPD);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_D_AMPM);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_M_AMPD);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_D_PIPEA);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_A_PIPED);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_D_PIPEM);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_M_PIPED);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(111);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'N') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'E') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead == 'T') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'E') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'P') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'Q') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__numeric);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
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
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_JEQ] = ACTIONS(1),
    [anon_sym_JLT] = ACTIONS(1),
    [anon_sym_JGT] = ACTIONS(1),
    [anon_sym_JGE] = ACTIONS(1),
    [anon_sym_JLE] = ACTIONS(1),
    [anon_sym_JNE] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_AM] = ACTIONS(1),
    [anon_sym_AD] = ACTIONS(1),
    [anon_sym_MA] = ACTIONS(1),
    [anon_sym_MD] = ACTIONS(1),
    [anon_sym_DA] = ACTIONS(1),
    [anon_sym_DM] = ACTIONS(1),
    [anon_sym_AMD] = ACTIONS(1),
    [anon_sym_ADM] = ACTIONS(1),
    [anon_sym_MAD] = ACTIONS(1),
    [anon_sym_MDA] = ACTIONS(1),
    [anon_sym_DAM] = ACTIONS(1),
    [anon_sym_DMA] = ACTIONS(1),
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
    [sym__alpha] = ACTIONS(1),
    [sym__numeric] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(19),
    [sym__line] = STATE(3),
    [sym_label_def] = STATE(3),
    [sym__instruction] = STATE(3),
    [sym_a_inst] = STATE(3),
    [sym_c_inst] = STATE(3),
    [sym__dest_def] = STATE(9),
    [sym_dest] = STATE(27),
    [sym_comp] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_A] = ACTIONS(9),
    [anon_sym_M] = ACTIONS(9),
    [anon_sym_D] = ACTIONS(9),
    [anon_sym_AM] = ACTIONS(11),
    [anon_sym_AD] = ACTIONS(11),
    [anon_sym_MA] = ACTIONS(11),
    [anon_sym_MD] = ACTIONS(11),
    [anon_sym_DA] = ACTIONS(11),
    [anon_sym_DM] = ACTIONS(11),
    [anon_sym_AMD] = ACTIONS(13),
    [anon_sym_ADM] = ACTIONS(13),
    [anon_sym_MAD] = ACTIONS(13),
    [anon_sym_MDA] = ACTIONS(13),
    [anon_sym_DAM] = ACTIONS(13),
    [anon_sym_DMA] = ACTIONS(13),
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
    [sym__dest_def] = STATE(9),
    [sym_dest] = STATE(27),
    [sym_comp] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(24),
    [anon_sym_A] = ACTIONS(27),
    [anon_sym_M] = ACTIONS(27),
    [anon_sym_D] = ACTIONS(27),
    [anon_sym_AM] = ACTIONS(30),
    [anon_sym_AD] = ACTIONS(30),
    [anon_sym_MA] = ACTIONS(30),
    [anon_sym_MD] = ACTIONS(30),
    [anon_sym_DA] = ACTIONS(30),
    [anon_sym_DM] = ACTIONS(30),
    [anon_sym_AMD] = ACTIONS(33),
    [anon_sym_ADM] = ACTIONS(33),
    [anon_sym_MAD] = ACTIONS(33),
    [anon_sym_MDA] = ACTIONS(33),
    [anon_sym_DAM] = ACTIONS(33),
    [anon_sym_DMA] = ACTIONS(33),
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
    [sym__dest_def] = STATE(9),
    [sym_dest] = STATE(27),
    [sym_comp] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_A] = ACTIONS(9),
    [anon_sym_M] = ACTIONS(9),
    [anon_sym_D] = ACTIONS(9),
    [anon_sym_AM] = ACTIONS(11),
    [anon_sym_AD] = ACTIONS(11),
    [anon_sym_MA] = ACTIONS(11),
    [anon_sym_MD] = ACTIONS(11),
    [anon_sym_DA] = ACTIONS(11),
    [anon_sym_DM] = ACTIONS(11),
    [anon_sym_AMD] = ACTIONS(13),
    [anon_sym_ADM] = ACTIONS(13),
    [anon_sym_MAD] = ACTIONS(13),
    [anon_sym_MDA] = ACTIONS(13),
    [anon_sym_DAM] = ACTIONS(13),
    [anon_sym_DMA] = ACTIONS(13),
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
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [anon_sym_A] = ACTIONS(48),
    [anon_sym_M] = ACTIONS(48),
    [anon_sym_D] = ACTIONS(48),
    [anon_sym_AM] = ACTIONS(48),
    [anon_sym_AD] = ACTIONS(48),
    [anon_sym_MA] = ACTIONS(48),
    [anon_sym_MD] = ACTIONS(48),
    [anon_sym_DA] = ACTIONS(48),
    [anon_sym_DM] = ACTIONS(48),
    [anon_sym_AMD] = ACTIONS(46),
    [anon_sym_ADM] = ACTIONS(46),
    [anon_sym_MAD] = ACTIONS(46),
    [anon_sym_MDA] = ACTIONS(46),
    [anon_sym_DAM] = ACTIONS(46),
    [anon_sym_DMA] = ACTIONS(46),
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
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_AT] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_M] = ACTIONS(52),
    [anon_sym_D] = ACTIONS(52),
    [anon_sym_AM] = ACTIONS(52),
    [anon_sym_AD] = ACTIONS(52),
    [anon_sym_MA] = ACTIONS(52),
    [anon_sym_MD] = ACTIONS(52),
    [anon_sym_DA] = ACTIONS(52),
    [anon_sym_DM] = ACTIONS(52),
    [anon_sym_AMD] = ACTIONS(50),
    [anon_sym_ADM] = ACTIONS(50),
    [anon_sym_MAD] = ACTIONS(50),
    [anon_sym_MDA] = ACTIONS(50),
    [anon_sym_DAM] = ACTIONS(50),
    [anon_sym_DMA] = ACTIONS(50),
    [anon_sym_0] = ACTIONS(50),
    [anon_sym_1] = ACTIONS(50),
    [anon_sym_DASH1] = ACTIONS(50),
    [anon_sym_BANGD] = ACTIONS(50),
    [anon_sym_BANGA] = ACTIONS(50),
    [anon_sym_BANGM] = ACTIONS(50),
    [anon_sym_DASHD] = ACTIONS(50),
    [anon_sym_DASHA] = ACTIONS(50),
    [anon_sym_DASHM] = ACTIONS(50),
    [anon_sym_D_PLUS1] = ACTIONS(50),
    [anon_sym_D_DASH1] = ACTIONS(50),
    [anon_sym_A_PLUS1] = ACTIONS(50),
    [anon_sym_A_DASH1] = ACTIONS(50),
    [anon_sym_M_PLUS1] = ACTIONS(50),
    [anon_sym_M_DASH1] = ACTIONS(50),
    [anon_sym_D_PLUSA] = ACTIONS(50),
    [anon_sym_A_PLUSD] = ACTIONS(50),
    [anon_sym_D_PLUSM] = ACTIONS(50),
    [anon_sym_M_PLUSD] = ACTIONS(50),
    [anon_sym_D_DASHA] = ACTIONS(50),
    [anon_sym_A_DASHD] = ACTIONS(50),
    [anon_sym_D_DASHM] = ACTIONS(50),
    [anon_sym_M_DASHD] = ACTIONS(50),
    [anon_sym_D_AMPA] = ACTIONS(50),
    [anon_sym_A_AMPD] = ACTIONS(50),
    [anon_sym_D_AMPM] = ACTIONS(50),
    [anon_sym_M_AMPD] = ACTIONS(50),
    [anon_sym_D_PIPEA] = ACTIONS(50),
    [anon_sym_A_PIPED] = ACTIONS(50),
    [anon_sym_D_PIPEM] = ACTIONS(50),
    [anon_sym_M_PIPED] = ACTIONS(50),
    [sym_comment] = ACTIONS(50),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_AT] = ACTIONS(54),
    [anon_sym_A] = ACTIONS(56),
    [anon_sym_M] = ACTIONS(56),
    [anon_sym_D] = ACTIONS(56),
    [anon_sym_AM] = ACTIONS(56),
    [anon_sym_AD] = ACTIONS(56),
    [anon_sym_MA] = ACTIONS(56),
    [anon_sym_MD] = ACTIONS(56),
    [anon_sym_DA] = ACTIONS(56),
    [anon_sym_DM] = ACTIONS(56),
    [anon_sym_AMD] = ACTIONS(54),
    [anon_sym_ADM] = ACTIONS(54),
    [anon_sym_MAD] = ACTIONS(54),
    [anon_sym_MDA] = ACTIONS(54),
    [anon_sym_DAM] = ACTIONS(54),
    [anon_sym_DMA] = ACTIONS(54),
    [anon_sym_0] = ACTIONS(54),
    [anon_sym_1] = ACTIONS(54),
    [anon_sym_DASH1] = ACTIONS(54),
    [anon_sym_BANGD] = ACTIONS(54),
    [anon_sym_BANGA] = ACTIONS(54),
    [anon_sym_BANGM] = ACTIONS(54),
    [anon_sym_DASHD] = ACTIONS(54),
    [anon_sym_DASHA] = ACTIONS(54),
    [anon_sym_DASHM] = ACTIONS(54),
    [anon_sym_D_PLUS1] = ACTIONS(54),
    [anon_sym_D_DASH1] = ACTIONS(54),
    [anon_sym_A_PLUS1] = ACTIONS(54),
    [anon_sym_A_DASH1] = ACTIONS(54),
    [anon_sym_M_PLUS1] = ACTIONS(54),
    [anon_sym_M_DASH1] = ACTIONS(54),
    [anon_sym_D_PLUSA] = ACTIONS(54),
    [anon_sym_A_PLUSD] = ACTIONS(54),
    [anon_sym_D_PLUSM] = ACTIONS(54),
    [anon_sym_M_PLUSD] = ACTIONS(54),
    [anon_sym_D_DASHA] = ACTIONS(54),
    [anon_sym_A_DASHD] = ACTIONS(54),
    [anon_sym_D_DASHM] = ACTIONS(54),
    [anon_sym_M_DASHD] = ACTIONS(54),
    [anon_sym_D_AMPA] = ACTIONS(54),
    [anon_sym_A_AMPD] = ACTIONS(54),
    [anon_sym_D_AMPM] = ACTIONS(54),
    [anon_sym_M_AMPD] = ACTIONS(54),
    [anon_sym_D_PIPEA] = ACTIONS(54),
    [anon_sym_A_PIPED] = ACTIONS(54),
    [anon_sym_D_PIPEM] = ACTIONS(54),
    [anon_sym_M_PIPED] = ACTIONS(54),
    [sym_comment] = ACTIONS(54),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_A] = ACTIONS(60),
    [anon_sym_M] = ACTIONS(60),
    [anon_sym_D] = ACTIONS(60),
    [anon_sym_AM] = ACTIONS(60),
    [anon_sym_AD] = ACTIONS(60),
    [anon_sym_MA] = ACTIONS(60),
    [anon_sym_MD] = ACTIONS(60),
    [anon_sym_DA] = ACTIONS(60),
    [anon_sym_DM] = ACTIONS(60),
    [anon_sym_AMD] = ACTIONS(58),
    [anon_sym_ADM] = ACTIONS(58),
    [anon_sym_MAD] = ACTIONS(58),
    [anon_sym_MDA] = ACTIONS(58),
    [anon_sym_DAM] = ACTIONS(58),
    [anon_sym_DMA] = ACTIONS(58),
    [anon_sym_0] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_DASH1] = ACTIONS(58),
    [anon_sym_BANGD] = ACTIONS(58),
    [anon_sym_BANGA] = ACTIONS(58),
    [anon_sym_BANGM] = ACTIONS(58),
    [anon_sym_DASHD] = ACTIONS(58),
    [anon_sym_DASHA] = ACTIONS(58),
    [anon_sym_DASHM] = ACTIONS(58),
    [anon_sym_D_PLUS1] = ACTIONS(58),
    [anon_sym_D_DASH1] = ACTIONS(58),
    [anon_sym_A_PLUS1] = ACTIONS(58),
    [anon_sym_A_DASH1] = ACTIONS(58),
    [anon_sym_M_PLUS1] = ACTIONS(58),
    [anon_sym_M_DASH1] = ACTIONS(58),
    [anon_sym_D_PLUSA] = ACTIONS(58),
    [anon_sym_A_PLUSD] = ACTIONS(58),
    [anon_sym_D_PLUSM] = ACTIONS(58),
    [anon_sym_M_PLUSD] = ACTIONS(58),
    [anon_sym_D_DASHA] = ACTIONS(58),
    [anon_sym_A_DASHD] = ACTIONS(58),
    [anon_sym_D_DASHM] = ACTIONS(58),
    [anon_sym_M_DASHD] = ACTIONS(58),
    [anon_sym_D_AMPA] = ACTIONS(58),
    [anon_sym_A_AMPD] = ACTIONS(58),
    [anon_sym_D_AMPM] = ACTIONS(58),
    [anon_sym_M_AMPD] = ACTIONS(58),
    [anon_sym_D_PIPEA] = ACTIONS(58),
    [anon_sym_A_PIPED] = ACTIONS(58),
    [anon_sym_D_PIPEM] = ACTIONS(58),
    [anon_sym_M_PIPED] = ACTIONS(58),
    [sym_comment] = ACTIONS(58),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(62),
    [anon_sym_A] = ACTIONS(64),
    [anon_sym_M] = ACTIONS(64),
    [anon_sym_D] = ACTIONS(64),
    [anon_sym_AM] = ACTIONS(64),
    [anon_sym_AD] = ACTIONS(64),
    [anon_sym_MA] = ACTIONS(64),
    [anon_sym_MD] = ACTIONS(64),
    [anon_sym_DA] = ACTIONS(64),
    [anon_sym_DM] = ACTIONS(64),
    [anon_sym_AMD] = ACTIONS(62),
    [anon_sym_ADM] = ACTIONS(62),
    [anon_sym_MAD] = ACTIONS(62),
    [anon_sym_MDA] = ACTIONS(62),
    [anon_sym_DAM] = ACTIONS(62),
    [anon_sym_DMA] = ACTIONS(62),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(16), 1,
      sym_comp,
    ACTIONS(66), 3,
      anon_sym_A,
      anon_sym_M,
      anon_sym_D,
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
    ACTIONS(68), 3,
      anon_sym_A,
      anon_sym_M,
      anon_sym_D,
    ACTIONS(70), 31,
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
    STATE(26), 1,
      sym_jump,
    ACTIONS(72), 7,
      anon_sym_JMP,
      anon_sym_JEQ,
      anon_sym_JLT,
      anon_sym_JGT,
      anon_sym_JGE,
      anon_sym_JLE,
      anon_sym_JNE,
  [94] = 2,
    STATE(23), 1,
      sym_label_ident,
    ACTIONS(74), 2,
      sym__alpha,
      sym__numeric,
  [102] = 2,
    STATE(22), 1,
      sym_label_ident,
    ACTIONS(74), 2,
      sym__alpha,
      sym__numeric,
  [110] = 2,
    ACTIONS(78), 1,
      anon_sym_EQ,
    ACTIONS(76), 2,
      sym__newline,
      anon_sym_SEMI,
  [118] = 3,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym__jump_def,
  [128] = 3,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(84), 1,
      sym__newline,
    STATE(24), 1,
      sym__jump_def,
  [138] = 1,
    ACTIONS(76), 2,
      sym__newline,
      anon_sym_SEMI,
  [143] = 1,
    ACTIONS(86), 2,
      sym__newline,
      anon_sym_RPAREN,
  [148] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [152] = 1,
    ACTIONS(84), 1,
      sym__newline,
  [156] = 1,
    ACTIONS(78), 1,
      anon_sym_EQ,
  [160] = 1,
    ACTIONS(90), 1,
      sym__newline,
  [164] = 1,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
  [168] = 1,
    ACTIONS(94), 1,
      sym__newline,
  [172] = 1,
    ACTIONS(96), 1,
      sym__newline,
  [176] = 1,
    ACTIONS(98), 1,
      sym__newline,
  [180] = 1,
    ACTIONS(100), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 81,
  [SMALL_STATE(12)] = 94,
  [SMALL_STATE(13)] = 102,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 118,
  [SMALL_STATE(16)] = 128,
  [SMALL_STATE(17)] = 138,
  [SMALL_STATE(18)] = 143,
  [SMALL_STATE(19)] = 148,
  [SMALL_STATE(20)] = 152,
  [SMALL_STATE(21)] = 156,
  [SMALL_STATE(22)] = 160,
  [SMALL_STATE(23)] = 164,
  [SMALL_STATE(24)] = 168,
  [SMALL_STATE(25)] = 172,
  [SMALL_STATE(26)] = 176,
  [SMALL_STATE(27)] = 180,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_inst, 4),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_inst, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_inst, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_inst, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a_inst, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_a_inst, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_def, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_def, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_inst, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_inst, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dest_def, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dest_def, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dest, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_ident, 1),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jump_def, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
