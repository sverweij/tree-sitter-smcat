#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 93
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_color = 1,
  anon_sym_label = 2,
  anon_sym_active = 3,
  anon_sym_DASH_GT = 4,
  anon_sym_EQ_GT_GT = 5,
  anon_sym_EQ_GT = 6,
  anon_sym_GT_GT = 7,
  anon_sym_COLON_GT = 8,
  anon_sym_DASH_DASH = 9,
  anon_sym_EQ_EQ = 10,
  anon_sym_LT_DASH = 11,
  anon_sym_LT_LT_EQ = 12,
  anon_sym_LT_EQ = 13,
  anon_sym_LT_LT = 14,
  anon_sym_LT_COLON = 15,
  anon_sym_POUND = 16,
  aux_sym_note_token1 = 17,
  sym_curly_bracket_open = 18,
  sym_curly_bracket_close = 19,
  sym_square_bracket_open = 20,
  sym_square_bracket_close = 21,
  sym_equals = 22,
  sym_comma = 23,
  sym_colon = 24,
  sym_semicolon = 25,
  sym__identifier = 26,
  anon_sym_DQUOTE = 27,
  aux_sym__quoted_string_token1 = 28,
  sym_comment = 29,
  sym_state_machine = 30,
  sym_states = 31,
  sym_state = 32,
  sym_actions = 33,
  sym_extended_state_attributes = 34,
  sym__extended_state_attribute = 35,
  sym_extended_state_key = 36,
  sym_extended_state_value = 37,
  sym_nested_state_machine = 38,
  sym_transitions = 39,
  sym_transition = 40,
  sym_extended_transition_attributes = 41,
  sym__extended_transition_attribute = 42,
  sym_extended_transition_key = 43,
  sym_extended_transition_value = 44,
  sym_arrow = 45,
  sym_note = 46,
  sym_state_identifier = 47,
  sym_string = 48,
  sym__quoted_string = 49,
  aux_sym_states_repeat1 = 50,
  aux_sym_extended_state_attributes_repeat1 = 51,
  aux_sym_transitions_repeat1 = 52,
  aux_sym_extended_transition_attributes_repeat1 = 53,
  aux_sym_note_repeat1 = 54,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_color] = "color",
  [anon_sym_label] = "label",
  [anon_sym_active] = "active",
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
  [anon_sym_POUND] = "#",
  [aux_sym_note_token1] = "note_token1",
  [sym_curly_bracket_open] = "curly_bracket_open",
  [sym_curly_bracket_close] = "curly_bracket_close",
  [sym_square_bracket_open] = "square_bracket_open",
  [sym_square_bracket_close] = "square_bracket_close",
  [sym_equals] = "equals",
  [sym_comma] = "comma",
  [sym_colon] = "colon",
  [sym_semicolon] = "semicolon",
  [sym__identifier] = "_identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [sym_comment] = "comment",
  [sym_state_machine] = "state_machine",
  [sym_states] = "states",
  [sym_state] = "state",
  [sym_actions] = "actions",
  [sym_extended_state_attributes] = "extended_state_attributes",
  [sym__extended_state_attribute] = "_extended_state_attribute",
  [sym_extended_state_key] = "extended_state_key",
  [sym_extended_state_value] = "extended_state_value",
  [sym_nested_state_machine] = "nested_state_machine",
  [sym_transitions] = "transitions",
  [sym_transition] = "transition",
  [sym_extended_transition_attributes] = "extended_transition_attributes",
  [sym__extended_transition_attribute] = "_extended_transition_attribute",
  [sym_extended_transition_key] = "extended_transition_key",
  [sym_extended_transition_value] = "extended_transition_value",
  [sym_arrow] = "arrow",
  [sym_note] = "note",
  [sym_state_identifier] = "state_identifier",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [aux_sym_states_repeat1] = "states_repeat1",
  [aux_sym_extended_state_attributes_repeat1] = "extended_state_attributes_repeat1",
  [aux_sym_transitions_repeat1] = "transitions_repeat1",
  [aux_sym_extended_transition_attributes_repeat1] = "extended_transition_attributes_repeat1",
  [aux_sym_note_repeat1] = "note_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_active] = {
    .visible = true,
    .named = false,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_curly_bracket_open] = {
    .visible = true,
    .named = true,
  },
  [sym_curly_bracket_close] = {
    .visible = true,
    .named = true,
  },
  [sym_square_bracket_open] = {
    .visible = true,
    .named = true,
  },
  [sym_square_bracket_close] = {
    .visible = true,
    .named = true,
  },
  [sym_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_state_machine] = {
    .visible = true,
    .named = true,
  },
  [sym_states] = {
    .visible = true,
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
  [sym_extended_state_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym__extended_state_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_extended_state_key] = {
    .visible = true,
    .named = true,
  },
  [sym_extended_state_value] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_state_machine] = {
    .visible = true,
    .named = true,
  },
  [sym_transitions] = {
    .visible = true,
    .named = true,
  },
  [sym_transition] = {
    .visible = true,
    .named = true,
  },
  [sym_extended_transition_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym__extended_transition_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_extended_transition_key] = {
    .visible = true,
    .named = true,
  },
  [sym_extended_transition_value] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_state_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_states_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extended_state_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extended_transition_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [3] = anon_sym_label,
  },
  [2] = {
    [4] = anon_sym_label,
  },
  [3] = {
    [5] = anon_sym_label,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == 'a')
        ADVANCE(14);
      if (lookahead == 'c')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(17);
      if (lookahead == '}')
        ADVANCE(18);
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
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 5:
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_colon);
      if (lookahead == '>')
        ADVANCE(23);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 9:
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(27);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_equals);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == '>')
        ADVANCE(30);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_square_bracket_open);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_square_bracket_close);
      END_STATE();
    case 14:
      if (lookahead == 'c')
        ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'o')
        ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'a')
        ADVANCE(33);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_curly_bracket_open);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_curly_bracket_close);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      if (lookahead == '*')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '>')
        ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 31:
      if (lookahead == 't')
        ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'l')
        ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'b')
        ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == '*')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ_GT_GT);
      END_STATE();
    case 37:
      if (lookahead == 'i')
        ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'o')
        ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 41:
      if (lookahead == 'v')
        ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'l')
        ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'e')
        ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '*')
        ADVANCE(52);
      if (lookahead == '/')
        ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead == '/')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(57);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(29);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '*')
        ADVANCE(61);
      if (lookahead == '/')
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '"')
        ADVANCE(21);
      if (lookahead == '*')
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '\n')
        ADVANCE(60);
      if (lookahead == '"')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '"')
        ADVANCE(21);
      if (lookahead == '*')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(60);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '/')
        ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '*')
        ADVANCE(68);
      if (lookahead == '/')
        ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\n')
        ADVANCE(21);
      if (lookahead == '*')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\n')
        ADVANCE(21);
      if (lookahead == '*')
        ADVANCE(69);
      if (lookahead == '/')
        ADVANCE(70);
      if (lookahead != 0)
        ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(71);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(51);
      END_STATE();
    case 72:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '{')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      END_STATE();
    case 73:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(51);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_curly_bracket_close);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(51);
      END_STATE();
    case 75:
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(76);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == 'a')
        ADVANCE(14);
      if (lookahead == 'c')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 77:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(57);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == 'a')
        ADVANCE(14);
      if (lookahead == 'c')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      END_STATE();
    case 78:
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 71},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 56},
  [20] = {.lex_state = 71},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 56},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 71},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 71},
  [31] = {.lex_state = 73},
  [32] = {.lex_state = 75},
  [33] = {.lex_state = 72},
  [34] = {.lex_state = 56},
  [35] = {.lex_state = 56},
  [36] = {.lex_state = 56},
  [37] = {.lex_state = 71},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 56},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 56},
  [42] = {.lex_state = 56},
  [43] = {.lex_state = 56},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 71},
  [46] = {.lex_state = 56},
  [47] = {.lex_state = 56},
  [48] = {.lex_state = 56},
  [49] = {.lex_state = 78},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 56},
  [52] = {.lex_state = 73},
  [53] = {.lex_state = 73},
  [54] = {.lex_state = 56},
  [55] = {.lex_state = 75},
  [56] = {.lex_state = 75},
  [57] = {.lex_state = 75},
  [58] = {.lex_state = 56},
  [59] = {.lex_state = 56},
  [60] = {.lex_state = 56},
  [61] = {.lex_state = 56},
  [62] = {.lex_state = 56},
  [63] = {.lex_state = 56},
  [64] = {.lex_state = 73},
  [65] = {.lex_state = 56},
  [66] = {.lex_state = 56},
  [67] = {.lex_state = 73},
  [68] = {.lex_state = 73},
  [69] = {.lex_state = 78},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 56},
  [72] = {.lex_state = 75},
  [73] = {.lex_state = 75},
  [74] = {.lex_state = 56},
  [75] = {.lex_state = 56},
  [76] = {.lex_state = 56},
  [77] = {.lex_state = 56},
  [78] = {.lex_state = 56},
  [79] = {.lex_state = 73},
  [80] = {.lex_state = 56},
  [81] = {.lex_state = 75},
  [82] = {.lex_state = 75},
  [83] = {.lex_state = 75},
  [84] = {.lex_state = 56},
  [85] = {.lex_state = 75},
  [86] = {.lex_state = 75},
  [87] = {.lex_state = 56},
  [88] = {.lex_state = 72},
  [89] = {.lex_state = 56},
  [90] = {.lex_state = 75},
  [91] = {.lex_state = 75},
  [92] = {.lex_state = 75},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_square_bracket_close] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_active] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_EQ_GT_GT] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_square_bracket_open] = ACTIONS(1),
    [sym_equals] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_curly_bracket_close] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
  },
  [1] = {
    [sym__quoted_string] = STATE(2),
    [aux_sym_note_repeat1] = STATE(6),
    [sym_transitions] = STATE(5),
    [sym_transition] = STATE(7),
    [sym_state_machine] = STATE(8),
    [aux_sym_states_repeat1] = STATE(9),
    [sym_note] = STATE(10),
    [sym_state] = STATE(11),
    [aux_sym_transitions_repeat1] = STATE(12),
    [sym_states] = STATE(13),
    [sym_state_identifier] = STATE(14),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
  },
  [2] = {
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_EQ_GT] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(15),
    [sym_comma] = ACTIONS(15),
    [anon_sym_LT_LT_EQ] = ACTIONS(15),
    [anon_sym_DASH_DASH] = ACTIONS(15),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_EQ_GT_GT] = ACTIONS(15),
    [sym_square_bracket_open] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(15),
    [sym_semicolon] = ACTIONS(15),
    [sym_colon] = ACTIONS(17),
  },
  [3] = {
    [sym_comment] = ACTIONS(5),
    [aux_sym__quoted_string_token1] = ACTIONS(19),
  },
  [4] = {
    [aux_sym_note_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(5),
  },
  [5] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [6] = {
    [aux_sym_note_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(13),
  },
  [7] = {
    [sym_semicolon] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(31),
  },
  [9] = {
    [sym__quoted_string] = STATE(2),
    [aux_sym_note_repeat1] = STATE(6),
    [sym_state_identifier] = STATE(19),
    [sym_note] = STATE(20),
    [sym_state] = STATE(21),
    [aux_sym_states_repeat1] = STATE(22),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
  },
  [10] = {
    [sym_state_identifier] = STATE(23),
    [sym__quoted_string] = STATE(2),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [11] = {
    [sym_semicolon] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(35),
  },
  [12] = {
    [sym__quoted_string] = STATE(2),
    [aux_sym_note_repeat1] = STATE(6),
    [sym_state_identifier] = STATE(26),
    [sym_note] = STATE(27),
    [sym_transition] = STATE(7),
    [aux_sym_transitions_repeat1] = STATE(28),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
  },
  [13] = {
    [sym_transition] = STATE(7),
    [sym__quoted_string] = STATE(2),
    [sym_note] = STATE(27),
    [sym_transitions] = STATE(29),
    [sym_state_identifier] = STATE(26),
    [aux_sym_transitions_repeat1] = STATE(12),
    [aux_sym_note_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
  },
  [14] = {
    [sym_actions] = STATE(34),
    [sym_extended_state_attributes] = STATE(35),
    [sym_nested_state_machine] = STATE(36),
    [sym_arrow] = STATE(37),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_COLON] = ACTIONS(39),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_EQ_GT] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(43),
    [sym_comma] = ACTIONS(45),
    [anon_sym_LT_LT_EQ] = ACTIONS(39),
    [anon_sym_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_COLON_GT] = ACTIONS(39),
    [anon_sym_EQ_GT_GT] = ACTIONS(39),
    [sym_square_bracket_open] = ACTIONS(47),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT_GT] = ACTIONS(39),
    [sym_semicolon] = ACTIONS(45),
    [sym_colon] = ACTIONS(49),
  },
  [15] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(51),
  },
  [16] = {
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(53),
  },
  [17] = {
    [aux_sym_note_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
  },
  [18] = {
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(60),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
  },
  [19] = {
    [sym_actions] = STATE(34),
    [sym_extended_state_attributes] = STATE(35),
    [sym_nested_state_machine] = STATE(36),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(43),
    [sym_comma] = ACTIONS(45),
    [sym_square_bracket_open] = ACTIONS(47),
    [sym_semicolon] = ACTIONS(45),
    [sym_colon] = ACTIONS(64),
  },
  [20] = {
    [sym_state_identifier] = STATE(39),
    [sym__quoted_string] = STATE(2),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [21] = {
    [sym_semicolon] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(35),
  },
  [22] = {
    [sym__quoted_string] = STATE(2),
    [aux_sym_note_repeat1] = STATE(6),
    [sym_state_identifier] = STATE(19),
    [sym_note] = STATE(20),
    [sym_state] = STATE(41),
    [aux_sym_states_repeat1] = STATE(22),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(68),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(74),
  },
  [23] = {
    [sym_actions] = STATE(42),
    [sym_extended_state_attributes] = STATE(43),
    [sym_nested_state_machine] = STATE(44),
    [sym_arrow] = STATE(45),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_COLON] = ACTIONS(39),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_EQ_GT] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(43),
    [sym_comma] = ACTIONS(77),
    [anon_sym_LT_LT_EQ] = ACTIONS(39),
    [anon_sym_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_COLON_GT] = ACTIONS(39),
    [anon_sym_EQ_GT_GT] = ACTIONS(39),
    [sym_square_bracket_open] = ACTIONS(47),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT_GT] = ACTIONS(39),
    [sym_semicolon] = ACTIONS(77),
    [sym_colon] = ACTIONS(49),
  },
  [24] = {
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(79),
  },
  [25] = {
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(83),
  },
  [26] = {
    [sym_arrow] = STATE(37),
    [anon_sym_EQ_GT_GT] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_COLON] = ACTIONS(39),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_EQ_GT] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_LT_LT_EQ] = ACTIONS(39),
    [anon_sym_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_COLON_GT] = ACTIONS(39),
  },
  [27] = {
    [sym_state_identifier] = STATE(46),
    [sym__quoted_string] = STATE(2),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [28] = {
    [sym__quoted_string] = STATE(2),
    [aux_sym_note_repeat1] = STATE(6),
    [sym_state_identifier] = STATE(26),
    [sym_note] = STATE(27),
    [sym_transition] = STATE(7),
    [aux_sym_transitions_repeat1] = STATE(28),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(87),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_POUND] = ACTIONS(93),
  },
  [29] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(96),
  },
  [30] = {
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(100),
  },
  [31] = {
    [sym__quoted_string] = STATE(2),
    [aux_sym_note_repeat1] = STATE(6),
    [sym_transition] = STATE(48),
    [sym_transitions] = STATE(49),
    [aux_sym_states_repeat1] = STATE(50),
    [sym_note] = STATE(10),
    [sym_state] = STATE(51),
    [sym_state_identifier] = STATE(14),
    [aux_sym_transitions_repeat1] = STATE(52),
    [sym_states] = STATE(53),
    [anon_sym_POUND] = ACTIONS(13),
    [sym__identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
    [sym_curly_bracket_close] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [32] = {
    [sym_extended_state_key] = STATE(56),
    [aux_sym_extended_state_attributes_repeat1] = STATE(57),
    [sym__extended_state_attribute] = STATE(57),
    [sym_square_bracket_close] = ACTIONS(104),
    [anon_sym_label] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_color] = ACTIONS(106),
    [anon_sym_active] = ACTIONS(106),
  },
  [33] = {
    [sym_string] = STATE(58),
    [sym__quoted_string] = STATE(59),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(108),
    [sym_comma] = ACTIONS(108),
    [sym_semicolon] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [34] = {
    [sym_nested_state_machine] = STATE(44),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(43),
    [sym_comma] = ACTIONS(77),
    [sym_semicolon] = ACTIONS(77),
  },
  [35] = {
    [sym_actions] = STATE(42),
    [sym_nested_state_machine] = STATE(44),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(43),
    [sym_comma] = ACTIONS(77),
    [sym_semicolon] = ACTIONS(77),
    [sym_colon] = ACTIONS(64),
  },
  [36] = {
    [sym_semicolon] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(77),
  },
  [37] = {
    [sym_state_identifier] = STATE(60),
    [sym__quoted_string] = STATE(2),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [38] = {
    [sym_square_bracket_close] = ACTIONS(110),
    [anon_sym_EQ_EQ] = ACTIONS(110),
    [anon_sym_LT_COLON] = ACTIONS(110),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_color] = ACTIONS(110),
    [anon_sym_EQ_GT] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(110),
    [sym_comma] = ACTIONS(110),
    [anon_sym_LT_LT_EQ] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_LT_LT] = ACTIONS(112),
    [anon_sym_active] = ACTIONS(110),
    [anon_sym_COLON_GT] = ACTIONS(110),
    [anon_sym_EQ_GT_GT] = ACTIONS(110),
    [sym_square_bracket_open] = ACTIONS(110),
    [anon_sym_LT_DASH] = ACTIONS(110),
    [anon_sym_LT_EQ] = ACTIONS(110),
    [anon_sym_label] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [sym_semicolon] = ACTIONS(110),
    [sym_colon] = ACTIONS(112),
  },
  [39] = {
    [sym_actions] = STATE(42),
    [sym_extended_state_attributes] = STATE(43),
    [sym_nested_state_machine] = STATE(44),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(43),
    [sym_comma] = ACTIONS(77),
    [sym_square_bracket_open] = ACTIONS(47),
    [sym_semicolon] = ACTIONS(77),
    [sym_colon] = ACTIONS(64),
  },
  [40] = {
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(114),
  },
  [41] = {
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(35),
  },
  [42] = {
    [sym_nested_state_machine] = STATE(61),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(43),
    [sym_comma] = ACTIONS(118),
    [sym_semicolon] = ACTIONS(118),
  },
  [43] = {
    [sym_actions] = STATE(62),
    [sym_nested_state_machine] = STATE(61),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(43),
    [sym_comma] = ACTIONS(118),
    [sym_semicolon] = ACTIONS(118),
    [sym_colon] = ACTIONS(64),
  },
  [44] = {
    [sym_semicolon] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(118),
  },
  [45] = {
    [sym_state_identifier] = STATE(63),
    [sym__quoted_string] = STATE(2),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [46] = {
    [sym_arrow] = STATE(45),
    [anon_sym_EQ_GT_GT] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_COLON] = ACTIONS(39),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_EQ_GT] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_LT_LT_EQ] = ACTIONS(39),
    [anon_sym_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_COLON_GT] = ACTIONS(39),
  },
  [47] = {
    [sym_semicolon] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(120),
  },
  [48] = {
    [sym_semicolon] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_close] = ACTIONS(124),
  },
  [50] = {
    [sym__quoted_string] = STATE(2),
    [aux_sym_note_repeat1] = STATE(6),
    [sym_state_identifier] = STATE(19),
    [sym_note] = STATE(20),
    [sym_state] = STATE(66),
    [aux_sym_states_repeat1] = STATE(22),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
  },
  [51] = {
    [sym_semicolon] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(35),
  },
  [52] = {
    [sym__quoted_string] = STATE(2),
    [aux_sym_note_repeat1] = STATE(6),
    [sym_state_identifier] = STATE(26),
    [sym_note] = STATE(27),
    [sym_transition] = STATE(48),
    [aux_sym_transitions_repeat1] = STATE(68),
    [anon_sym_POUND] = ACTIONS(13),
    [sym__identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
    [sym_curly_bracket_close] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [53] = {
    [sym_transition] = STATE(48),
    [sym__quoted_string] = STATE(2),
    [sym_note] = STATE(27),
    [sym_transitions] = STATE(69),
    [sym_state_identifier] = STATE(26),
    [aux_sym_transitions_repeat1] = STATE(52),
    [aux_sym_note_repeat1] = STATE(6),
    [anon_sym_POUND] = ACTIONS(13),
    [sym__identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
    [sym_curly_bracket_close] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [54] = {
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(132),
    [sym_comma] = ACTIONS(132),
    [sym_semicolon] = ACTIONS(132),
    [sym_colon] = ACTIONS(132),
  },
  [55] = {
    [sym_square_bracket_close] = ACTIONS(134),
    [anon_sym_label] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [anon_sym_color] = ACTIONS(134),
    [sym_equals] = ACTIONS(134),
    [anon_sym_active] = ACTIONS(134),
  },
  [56] = {
    [sym_square_bracket_close] = ACTIONS(136),
    [anon_sym_label] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [anon_sym_color] = ACTIONS(136),
    [sym_equals] = ACTIONS(138),
    [anon_sym_active] = ACTIONS(136),
  },
  [57] = {
    [sym_extended_state_key] = STATE(56),
    [aux_sym_extended_state_attributes_repeat1] = STATE(72),
    [sym__extended_state_attribute] = STATE(72),
    [sym_square_bracket_close] = ACTIONS(140),
    [anon_sym_label] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_color] = ACTIONS(106),
    [anon_sym_active] = ACTIONS(106),
  },
  [58] = {
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(142),
    [sym_comma] = ACTIONS(142),
    [sym_semicolon] = ACTIONS(142),
  },
  [59] = {
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(144),
    [sym_comma] = ACTIONS(144),
    [sym_semicolon] = ACTIONS(144),
  },
  [60] = {
    [sym_actions] = STATE(74),
    [sym_extended_transition_attributes] = STATE(75),
    [sym_comment] = ACTIONS(3),
    [sym_square_bracket_open] = ACTIONS(146),
    [sym_semicolon] = ACTIONS(148),
    [sym_colon] = ACTIONS(64),
  },
  [61] = {
    [sym_semicolon] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(150),
  },
  [62] = {
    [sym_nested_state_machine] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(43),
    [sym_comma] = ACTIONS(150),
    [sym_semicolon] = ACTIONS(150),
  },
  [63] = {
    [sym_actions] = STATE(77),
    [sym_extended_transition_attributes] = STATE(78),
    [sym_comment] = ACTIONS(3),
    [sym_square_bracket_open] = ACTIONS(146),
    [sym_semicolon] = ACTIONS(152),
    [sym_colon] = ACTIONS(64),
  },
  [64] = {
    [anon_sym_DQUOTE] = ACTIONS(62),
    [sym__identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(5),
    [sym_curly_bracket_close] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(60),
  },
  [65] = {
    [sym_semicolon] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(154),
  },
  [66] = {
    [sym_semicolon] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(35),
  },
  [67] = {
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__identifier] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
    [sym_curly_bracket_close] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(79),
  },
  [68] = {
    [sym__quoted_string] = STATE(2),
    [aux_sym_note_repeat1] = STATE(6),
    [sym_state_identifier] = STATE(26),
    [sym_note] = STATE(27),
    [sym_transition] = STATE(48),
    [aux_sym_transitions_repeat1] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym__identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [sym_curly_bracket_close] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(93),
  },
  [69] = {
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_close] = ACTIONS(158),
  },
  [70] = {
    [sym_extended_state_value] = STATE(81),
    [sym__quoted_string] = STATE(82),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [71] = {
    [sym_comment] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(160),
    [sym_comma] = ACTIONS(160),
    [sym_semicolon] = ACTIONS(160),
    [sym_colon] = ACTIONS(160),
  },
  [72] = {
    [sym_extended_state_key] = STATE(56),
    [aux_sym_extended_state_attributes_repeat1] = STATE(72),
    [sym__extended_state_attribute] = STATE(72),
    [sym_square_bracket_close] = ACTIONS(162),
    [anon_sym_label] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [anon_sym_color] = ACTIONS(164),
    [anon_sym_active] = ACTIONS(164),
  },
  [73] = {
    [sym_extended_transition_key] = STATE(85),
    [aux_sym_extended_transition_attributes_repeat1] = STATE(86),
    [sym__extended_transition_attribute] = STATE(86),
    [anon_sym_color] = ACTIONS(167),
    [sym_square_bracket_close] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym_semicolon] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym_actions] = STATE(77),
    [sym_semicolon] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_colon] = ACTIONS(64),
  },
  [76] = {
    [sym_semicolon] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(173),
  },
  [77] = {
    [sym_semicolon] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_actions] = STATE(87),
    [sym_semicolon] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_colon] = ACTIONS(64),
  },
  [79] = {
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym__identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(5),
    [sym_curly_bracket_close] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(114),
  },
  [80] = {
    [sym_semicolon] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(179),
  },
  [81] = {
    [sym_square_bracket_close] = ACTIONS(181),
    [anon_sym_label] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [anon_sym_color] = ACTIONS(181),
    [anon_sym_active] = ACTIONS(181),
  },
  [82] = {
    [sym_square_bracket_close] = ACTIONS(183),
    [anon_sym_label] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [anon_sym_color] = ACTIONS(183),
    [anon_sym_active] = ACTIONS(183),
  },
  [83] = {
    [sym_comment] = ACTIONS(3),
    [sym_equals] = ACTIONS(185),
  },
  [84] = {
    [sym_semicolon] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_colon] = ACTIONS(187),
  },
  [85] = {
    [sym_comment] = ACTIONS(3),
    [sym_equals] = ACTIONS(189),
  },
  [86] = {
    [sym_extended_transition_key] = STATE(85),
    [aux_sym_extended_transition_attributes_repeat1] = STATE(90),
    [sym__extended_transition_attribute] = STATE(90),
    [anon_sym_color] = ACTIONS(167),
    [sym_square_bracket_close] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [sym_semicolon] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [sym_extended_transition_value] = STATE(91),
    [sym__quoted_string] = STATE(92),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [89] = {
    [sym_semicolon] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_colon] = ACTIONS(195),
  },
  [90] = {
    [sym_extended_transition_key] = STATE(85),
    [aux_sym_extended_transition_attributes_repeat1] = STATE(90),
    [sym__extended_transition_attribute] = STATE(90),
    [anon_sym_color] = ACTIONS(197),
    [sym_square_bracket_close] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [anon_sym_color] = ACTIONS(202),
    [sym_square_bracket_close] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [anon_sym_color] = ACTIONS(204),
    [sym_square_bracket_close] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_state_machine, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_state_identifier, 1),
  [17] = {.count = 1, .reusable = false}, REDUCE(sym_state_identifier, 1),
  [19] = {.count = 1, .reusable = false}, SHIFT(15),
  [21] = {.count = 1, .reusable = false}, SHIFT(16),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_state_machine, 1),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_note, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_note, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [33] = {.count = 1, .reusable = true}, SHIFT(24),
  [35] = {.count = 1, .reusable = true}, SHIFT(25),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_transitions, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(30),
  [41] = {.count = 1, .reusable = false}, SHIFT(30),
  [43] = {.count = 1, .reusable = true}, SHIFT(31),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_state, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(32),
  [49] = {.count = 1, .reusable = false}, SHIFT(33),
  [51] = {.count = 1, .reusable = true}, SHIFT(38),
  [53] = {.count = 1, .reusable = false}, REDUCE(aux_sym_note_repeat1, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_note_repeat1, 2),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_note_repeat1, 2), SHIFT_REPEAT(4),
  [60] = {.count = 1, .reusable = false}, REDUCE(aux_sym_transitions_repeat1, 2),
  [62] = {.count = 1, .reusable = true}, REDUCE(aux_sym_transitions_repeat1, 2),
  [64] = {.count = 1, .reusable = true}, SHIFT(33),
  [66] = {.count = 1, .reusable = true}, SHIFT(40),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_states_repeat1, 2), SHIFT_REPEAT(2),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_states_repeat1, 2), SHIFT_REPEAT(3),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_states_repeat1, 2), SHIFT_REPEAT(4),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_state, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_states, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_states, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(aux_sym_states_repeat1, 2),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym_states_repeat1, 2),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_transitions_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_transitions_repeat1, 2), SHIFT_REPEAT(3),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_transitions_repeat1, 2), SHIFT_REPEAT(4),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_state_machine, 2),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_arrow, 1),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_arrow, 1),
  [102] = {.count = 1, .reusable = false}, SHIFT(47),
  [104] = {.count = 1, .reusable = true}, SHIFT(54),
  [106] = {.count = 1, .reusable = true}, SHIFT(55),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_actions, 1),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym__quoted_string, 3),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_states, 3),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_states, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_state, 3),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_nested_state_machine, 2),
  [122] = {.count = 1, .reusable = true}, SHIFT(64),
  [124] = {.count = 1, .reusable = true}, SHIFT(65),
  [126] = {.count = 1, .reusable = true}, SHIFT(67),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_transitions, 1),
  [130] = {.count = 1, .reusable = false}, SHIFT(65),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_extended_state_attributes, 2),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_extended_state_key, 1),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym__extended_state_attribute, 1),
  [138] = {.count = 1, .reusable = true}, SHIFT(70),
  [140] = {.count = 1, .reusable = true}, SHIFT(71),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_actions, 2),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [146] = {.count = 1, .reusable = true}, SHIFT(73),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_state, 4),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 4),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_nested_state_machine, 3),
  [156] = {.count = 1, .reusable = true}, SHIFT(79),
  [158] = {.count = 1, .reusable = true}, SHIFT(80),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_extended_state_attributes, 3),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_extended_state_attributes_repeat1, 2),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extended_state_attributes_repeat1, 2), SHIFT_REPEAT(55),
  [167] = {.count = 1, .reusable = true}, SHIFT(83),
  [169] = {.count = 1, .reusable = true}, SHIFT(84),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 4, .alias_sequence_id = 1),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_state, 5),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 5, .alias_sequence_id = 2),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 5),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_nested_state_machine, 4),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym__extended_state_attribute, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_extended_state_value, 1),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_extended_transition_key, 1),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_extended_transition_attributes, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(88),
  [191] = {.count = 1, .reusable = true}, SHIFT(89),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 6, .alias_sequence_id = 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_extended_transition_attributes, 3),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extended_transition_attributes_repeat1, 2), SHIFT_REPEAT(83),
  [200] = {.count = 1, .reusable = true}, REDUCE(aux_sym_extended_transition_attributes_repeat1, 2),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym__extended_transition_attribute, 3),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_extended_transition_value, 1),
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
