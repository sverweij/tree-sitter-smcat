#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 54
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_COMMA = 1,
  anon_sym_SEMI = 2,
  anon_sym_COLON = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_color = 6,
  anon_sym_EQ = 7,
  anon_sym_label = 8,
  sym_active = 9,
  anon_sym_DASH_GT = 10,
  anon_sym_EQ_GT_GT = 11,
  anon_sym_EQ_GT = 12,
  anon_sym_GT_GT = 13,
  anon_sym_COLON_GT = 14,
  anon_sym_DASH_DASH = 15,
  anon_sym_EQ_EQ = 16,
  anon_sym_LT_DASH = 17,
  anon_sym_LT_LT_EQ = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_LT_LT = 20,
  anon_sym_LT_COLON = 21,
  sym__identifier = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 24,
  sym_state_machine = 25,
  sym__states = 26,
  sym_state = 27,
  sym_actions = 28,
  sym__extended_state_attributes = 29,
  sym__extended_state_attribute = 30,
  sym_color = 31,
  sym_label = 32,
  sym__transitions = 33,
  sym_transition = 34,
  sym__extended_transition_attributes = 35,
  sym__extended_transition_attribute = 36,
  sym_arrow = 37,
  sym_state_identifier = 38,
  sym__quoted_string = 39,
  aux_sym__states_repeat1 = 40,
  aux_sym__extended_state_attributes_repeat1 = 41,
  aux_sym__transitions_repeat1 = 42,
  aux_sym__extended_transition_attributes_repeat1 = 43,
  anon_alias_sym_label = 44,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_color] = "color",
  [anon_sym_EQ] = "=",
  [anon_sym_label] = "label",
  [sym_active] = "active",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT_GT] = "=>>",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_COLON] = "<:",
  [sym__identifier] = "_identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = "/[^\"]*/",
  [sym_state_machine] = "state_machine",
  [sym__states] = "_states",
  [sym_state] = "state",
  [sym_actions] = "actions",
  [sym__extended_state_attributes] = "_extended_state_attributes",
  [sym__extended_state_attribute] = "_extended_state_attribute",
  [sym_color] = "color",
  [sym_label] = "label",
  [sym__transitions] = "_transitions",
  [sym_transition] = "transition",
  [sym__extended_transition_attributes] = "_extended_transition_attributes",
  [sym__extended_transition_attribute] = "_extended_transition_attribute",
  [sym_arrow] = "arrow",
  [sym_state_identifier] = "state_identifier",
  [sym__quoted_string] = "_quoted_string",
  [aux_sym__states_repeat1] = "_states_repeat1",
  [aux_sym__extended_state_attributes_repeat1] = "_extended_state_attributes_repeat1",
  [aux_sym__transitions_repeat1] = "_transitions_repeat1",
  [aux_sym__extended_transition_attributes_repeat1] = "_extended_transition_attributes_repeat1",
  [anon_alias_sym_label] = "label",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [sym_active] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_state_machine] = {
    .visible = true,
    .named = true,
  },
  [sym__states] = {
    .visible = false,
    .named = true,
  },
  [sym_state] = {
    .visible = true,
    .named = true,
  },
  [sym_actions] = {
    .visible = true,
    .named = true,
  },
  [sym__extended_state_attributes] = {
    .visible = false,
    .named = true,
  },
  [sym__extended_state_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__transitions] = {
    .visible = false,
    .named = true,
  },
  [sym_transition] = {
    .visible = true,
    .named = true,
  },
  [sym__extended_transition_attributes] = {
    .visible = false,
    .named = true,
  },
  [sym__extended_transition_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__states_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__extended_state_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__transitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__extended_transition_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_label] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [3] = anon_alias_sym_label,
  },
  [2] = {
    [4] = anon_alias_sym_label,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == 'a')
        ADVANCE(24);
      if (lookahead == 'c')
        ADVANCE(30);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 4:
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '>')
        ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '>')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ_GT_GT);
      END_STATE();
    case 20:
      if (lookahead == '>')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      if (lookahead == 'c')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 't')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'i')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'v')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'e')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_active);
      END_STATE();
    case 30:
      if (lookahead == 'o')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'l')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'o')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'r')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 35:
      if (lookahead == 'a')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'b')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'l')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(43);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      END_STATE();
    case 48:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == 'a')
        ADVANCE(24);
      if (lookahead == 'c')
        ADVANCE(30);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(43);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == 'a')
        ADVANCE(24);
      if (lookahead == 'c')
        ADVANCE(30);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      END_STATE();
    case 51:
      if (lookahead == '=')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 51},
  [30] = {.lex_state = 51},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 42},
  [33] = {.lex_state = 42},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 42},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 42},
  [39] = {.lex_state = 49},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 49},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 42},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 42},
  [47] = {.lex_state = 49},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 42},
  [51] = {.lex_state = 42},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 40},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_label] = ACTIONS(1),
    [sym_active] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(3),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_state_machine] = STATE(4),
    [sym__states] = STATE(5),
    [sym_state] = STATE(6),
    [sym__transitions] = STATE(7),
    [sym_transition] = STATE(10),
    [sym_state_identifier] = STATE(8),
    [sym__quoted_string] = STATE(2),
    [aux_sym__states_repeat1] = STATE(9),
    [aux_sym__transitions_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_EQ_GT_GT] = ACTIONS(11),
    [anon_sym_EQ_GT] = ACTIONS(13),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_COLON_GT] = ACTIONS(11),
    [anon_sym_DASH_DASH] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_LT_DASH] = ACTIONS(11),
    [anon_sym_LT_LT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT_COLON] = ACTIONS(11),
  },
  [3] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [5] = {
    [sym__transitions] = STATE(12),
    [sym_transition] = STATE(10),
    [sym_state_identifier] = STATE(13),
    [sym__quoted_string] = STATE(2),
    [aux_sym__transitions_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [6] = {
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(23),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [8] = {
    [sym_actions] = STATE(19),
    [sym__extended_state_attributes] = STATE(20),
    [sym_arrow] = STATE(21),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_EQ_GT_GT] = ACTIONS(31),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_GT_GT] = ACTIONS(31),
    [anon_sym_COLON_GT] = ACTIONS(31),
    [anon_sym_DASH_DASH] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_LT_DASH] = ACTIONS(31),
    [anon_sym_LT_LT_EQ] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_LT_LT] = ACTIONS(33),
    [anon_sym_LT_COLON] = ACTIONS(31),
  },
  [9] = {
    [sym_state] = STATE(22),
    [sym_state_identifier] = STATE(23),
    [sym__quoted_string] = STATE(2),
    [aux_sym__states_repeat1] = STATE(24),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [10] = {
    [sym_transition] = STATE(25),
    [sym_state_identifier] = STATE(13),
    [sym__quoted_string] = STATE(2),
    [aux_sym__transitions_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [11] = {
    [anon_sym_DQUOTE] = ACTIONS(37),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [13] = {
    [sym_arrow] = STATE(21),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_EQ_GT_GT] = ACTIONS(31),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_GT_GT] = ACTIONS(31),
    [anon_sym_COLON_GT] = ACTIONS(31),
    [anon_sym_DASH_DASH] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_LT_DASH] = ACTIONS(31),
    [anon_sym_LT_LT_EQ] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_LT_LT] = ACTIONS(33),
    [anon_sym_LT_COLON] = ACTIONS(31),
  },
  [14] = {
    [sym__identifier] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym__identifier] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(43),
  },
  [16] = {
    [sym__quoted_string] = STATE(27),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [17] = {
    [sym__extended_state_attribute] = STATE(31),
    [sym_color] = STATE(31),
    [sym_label] = STATE(31),
    [aux_sym__extended_state_attributes_repeat1] = STATE(31),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_color] = ACTIONS(49),
    [anon_sym_label] = ACTIONS(51),
    [sym_active] = ACTIONS(53),
  },
  [18] = {
    [sym__identifier] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(55),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
  },
  [20] = {
    [sym_actions] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
  },
  [21] = {
    [sym_state_identifier] = STATE(33),
    [sym__quoted_string] = STATE(2),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [22] = {
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(61),
  },
  [23] = {
    [sym_actions] = STATE(19),
    [sym__extended_state_attributes] = STATE(20),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(29),
  },
  [24] = {
    [sym_state] = STATE(35),
    [sym_state_identifier] = STATE(23),
    [sym__quoted_string] = STATE(2),
    [aux_sym__states_repeat1] = STATE(24),
    [sym__identifier] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(66),
  },
  [25] = {
    [sym_transition] = STATE(25),
    [sym_state_identifier] = STATE(13),
    [sym__quoted_string] = STATE(2),
    [aux_sym__transitions_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym__identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(74),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_color] = ACTIONS(77),
    [anon_sym_label] = ACTIONS(77),
    [sym_active] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(77),
    [anon_sym_EQ_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_COLON_GT] = ACTIONS(77),
    [anon_sym_DASH_DASH] = ACTIONS(77),
    [anon_sym_EQ_EQ] = ACTIONS(77),
    [anon_sym_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_EQ] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_COLON] = ACTIONS(77),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
  },
  [28] = {
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
  },
  [29] = {
    [anon_sym_EQ] = ACTIONS(85),
  },
  [30] = {
    [anon_sym_EQ] = ACTIONS(87),
  },
  [31] = {
    [sym__extended_state_attribute] = STATE(39),
    [sym_color] = STATE(39),
    [sym_label] = STATE(39),
    [aux_sym__extended_state_attributes_repeat1] = STATE(39),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_color] = ACTIONS(49),
    [anon_sym_label] = ACTIONS(51),
    [sym_active] = ACTIONS(91),
  },
  [32] = {
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
  },
  [33] = {
    [sym_actions] = STATE(42),
    [sym__extended_transition_attributes] = STATE(43),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(97),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym__identifier] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
  },
  [35] = {
    [anon_sym_COMMA] = ACTIONS(21),
  },
  [36] = {
    [sym__quoted_string] = STATE(44),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [37] = {
    [sym__quoted_string] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [38] = {
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(101),
  },
  [39] = {
    [sym__extended_state_attribute] = STATE(39),
    [sym_color] = STATE(39),
    [sym_label] = STATE(39),
    [aux_sym__extended_state_attributes_repeat1] = STATE(39),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_color] = ACTIONS(105),
    [anon_sym_label] = ACTIONS(108),
    [sym_active] = ACTIONS(111),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym__identifier] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
  },
  [41] = {
    [sym_color] = STATE(47),
    [sym__extended_transition_attribute] = STATE(47),
    [aux_sym__extended_transition_attributes_repeat1] = STATE(47),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_color] = ACTIONS(49),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(118),
  },
  [43] = {
    [sym_actions] = STATE(50),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(59),
  },
  [44] = {
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_color] = ACTIONS(122),
    [anon_sym_label] = ACTIONS(122),
    [sym_active] = ACTIONS(122),
  },
  [45] = {
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_color] = ACTIONS(124),
    [anon_sym_label] = ACTIONS(124),
    [sym_active] = ACTIONS(124),
  },
  [46] = {
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(126),
  },
  [47] = {
    [sym_color] = STATE(52),
    [sym__extended_transition_attribute] = STATE(52),
    [aux_sym__extended_transition_attributes_repeat1] = STATE(52),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_color] = ACTIONS(49),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym__identifier] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym__identifier] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
  },
  [50] = {
    [anon_sym_SEMI] = ACTIONS(134),
  },
  [51] = {
    [anon_sym_SEMI] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
  },
  [52] = {
    [sym_color] = STATE(52),
    [sym__extended_transition_attribute] = STATE(52),
    [aux_sym__extended_transition_attributes_repeat1] = STATE(52),
    [anon_sym_RBRACK] = ACTIONS(138),
    [anon_sym_color] = ACTIONS(140),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym__identifier] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(143),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_state_machine, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_state_identifier, 1),
  [13] = {.count = 1, .reusable = false}, REDUCE(sym_state_identifier, 1),
  [15] = {.count = 1, .reusable = false}, SHIFT(11),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_state_machine, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(14),
  [23] = {.count = 1, .reusable = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_state, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(16),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = false}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym__transitions, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(26),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_state_machine, 2),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym__states_repeat1, 2),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym__states, 2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_actions, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(28),
  [49] = {.count = 1, .reusable = true}, SHIFT(29),
  [51] = {.count = 1, .reusable = true}, SHIFT(30),
  [53] = {.count = 1, .reusable = true}, SHIFT(31),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_arrow, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_state, 2),
  [59] = {.count = 1, .reusable = true}, SHIFT(16),
  [61] = {.count = 1, .reusable = true}, SHIFT(34),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym__states_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym__states_repeat1, 2), SHIFT_REPEAT(3),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym__transitions_repeat1, 2),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym__transitions_repeat1, 2), SHIFT_REPEAT(2),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym__transitions_repeat1, 2), SHIFT_REPEAT(3),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym__quoted_string, 3),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_actions, 2),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym__extended_state_attributes, 2),
  [85] = {.count = 1, .reusable = true}, SHIFT(36),
  [87] = {.count = 1, .reusable = true}, SHIFT(37),
  [89] = {.count = 1, .reusable = true}, SHIFT(38),
  [91] = {.count = 1, .reusable = true}, SHIFT(39),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_state, 3),
  [95] = {.count = 1, .reusable = true}, SHIFT(40),
  [97] = {.count = 1, .reusable = true}, SHIFT(41),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__states, 3),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__extended_state_attributes, 3),
  [103] = {.count = 1, .reusable = true}, REDUCE(aux_sym__extended_state_attributes_repeat1, 2),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym__extended_state_attributes_repeat1, 2), SHIFT_REPEAT(29),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym__extended_state_attributes_repeat1, 2), SHIFT_REPEAT(30),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym__extended_state_attributes_repeat1, 2), SHIFT_REPEAT(39),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 4),
  [116] = {.count = 1, .reusable = true}, SHIFT(46),
  [118] = {.count = 1, .reusable = true}, SHIFT(48),
  [120] = {.count = 1, .reusable = true}, SHIFT(49),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_color, 3),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__extended_transition_attributes, 2),
  [128] = {.count = 1, .reusable = true}, SHIFT(51),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 5, .alias_sequence_id = 1),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 5),
  [134] = {.count = 1, .reusable = true}, SHIFT(53),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym__extended_transition_attributes, 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(aux_sym__extended_transition_attributes_repeat1, 2),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym__extended_transition_attributes_repeat1, 2), SHIFT_REPEAT(29),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 6, .alias_sequence_id = 2),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_smcat() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
