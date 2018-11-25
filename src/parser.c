#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 93
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 1
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
  aux_sym_SLASH_DOT_STAR_SLASH = 17,
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
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 28,
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
  anon_alias_sym_label = 55,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
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
  [aux_sym_SLASH_DOT_STAR_SLASH] = "/.*/",
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
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = "/[^\"]*/",
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
  [anon_alias_sym_label] = "label",
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
  [aux_sym_SLASH_DOT_STAR_SLASH] = {
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
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = {
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
  [anon_alias_sym_label] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [3] = anon_alias_sym_label,
  },
  [2] = {
    [4] = anon_alias_sym_label,
  },
  [3] = {
    [5] = anon_alias_sym_label,
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
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead == 'a')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(36);
      if (lookahead == 'l')
        ADVANCE(41);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
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
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 8:
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead != 0)
        ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead != 0)
        ADVANCE(9);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_colon);
      if (lookahead == '>')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 16:
      if (lookahead == '-')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_equals);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '>')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ_GT_GT);
      END_STATE();
    case 26:
      if (lookahead == '>')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_square_bracket_open);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_square_bracket_close);
      END_STATE();
    case 30:
      if (lookahead == 'c')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 't')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'i')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'v')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'e')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 36:
      if (lookahead == 'o')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'l')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'o')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'r')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 41:
      if (lookahead == 'a')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'b')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'l')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_curly_bracket_open);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_curly_bracket_close);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND);
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
        ADVANCE(50);
      END_STATE();
    case 50:
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
        ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '*')
        ADVANCE(52);
      if (lookahead == '/')
        ADVANCE(54);
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
        ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '*')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '*')
        ADVANCE(53);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(55);
      if (lookahead == '/')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(61);
      if (lookahead != 0)
        ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(57);
      if (lookahead == '/')
        ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(58);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(66);
      if (lookahead == '/')
        ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(67);
      if (lookahead != 0)
        ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(67);
      if (lookahead == '/')
        ADVANCE(68);
      if (lookahead != 0)
        ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(68);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead != 0)
        ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(71);
      END_STATE();
    case 72:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(50);
      END_STATE();
    case 73:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      END_STATE();
    case 74:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '}')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(50);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_curly_bracket_close);
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
        ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(77);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead == 'a')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(36);
      if (lookahead == 'l')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 78:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead == 'a')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(36);
      if (lookahead == 'l')
        ADVANCE(41);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      END_STATE();
    case 79:
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(79);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 71},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 71},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 62},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 74},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 62},
  [30] = {.lex_state = 62},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 62},
  [33] = {.lex_state = 72},
  [34] = {.lex_state = 62},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 78},
  [39] = {.lex_state = 62},
  [40] = {.lex_state = 62},
  [41] = {.lex_state = 62},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 72},
  [44] = {.lex_state = 62},
  [45] = {.lex_state = 74},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 79},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 74},
  [51] = {.lex_state = 76},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 76},
  [55] = {.lex_state = 62},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 62},
  [61] = {.lex_state = 62},
  [62] = {.lex_state = 62},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 62},
  [65] = {.lex_state = 79},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 74},
  [68] = {.lex_state = 62},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 73},
  [71] = {.lex_state = 62},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 62},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 74},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 73},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 76},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 76},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_active] = ACTIONS(1),
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
    [anon_sym_POUND] = ACTIONS(1),
    [sym_curly_bracket_open] = ACTIONS(1),
    [sym_curly_bracket_close] = ACTIONS(1),
    [sym_square_bracket_open] = ACTIONS(1),
    [sym_square_bracket_close] = ACTIONS(1),
    [sym_equals] = ACTIONS(3),
    [sym_comma] = ACTIONS(1),
    [sym_colon] = ACTIONS(3),
    [sym_semicolon] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_state_machine] = STATE(5),
    [sym_states] = STATE(6),
    [sym_state] = STATE(7),
    [sym_transitions] = STATE(8),
    [sym_transition] = STATE(9),
    [sym_note] = STATE(10),
    [sym_state_identifier] = STATE(11),
    [sym__quoted_string] = STATE(3),
    [aux_sym_states_repeat1] = STATE(12),
    [aux_sym_transitions_repeat1] = STATE(13),
    [aux_sym_note_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(15),
    [sym_comment] = ACTIONS(13),
  },
  [3] = {
    [anon_sym_DASH_GT] = ACTIONS(17),
    [anon_sym_EQ_GT_GT] = ACTIONS(17),
    [anon_sym_EQ_GT] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_COLON_GT] = ACTIONS(17),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(19),
    [anon_sym_LT_COLON] = ACTIONS(17),
    [sym_curly_bracket_open] = ACTIONS(17),
    [sym_square_bracket_open] = ACTIONS(17),
    [sym_comma] = ACTIONS(17),
    [sym_colon] = ACTIONS(19),
    [sym_semicolon] = ACTIONS(17),
    [sym_comment] = ACTIONS(21),
  },
  [4] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(13),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_comment] = ACTIONS(21),
  },
  [6] = {
    [sym_transitions] = STATE(17),
    [sym_transition] = STATE(9),
    [sym_note] = STATE(18),
    [sym_state_identifier] = STATE(19),
    [sym__quoted_string] = STATE(3),
    [aux_sym_transitions_repeat1] = STATE(13),
    [aux_sym_note_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [7] = {
    [sym_comma] = ACTIONS(29),
    [sym_semicolon] = ACTIONS(31),
    [sym_comment] = ACTIONS(21),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(21),
  },
  [9] = {
    [sym_semicolon] = ACTIONS(33),
    [sym_comment] = ACTIONS(21),
  },
  [10] = {
    [sym_state_identifier] = STATE(23),
    [sym__quoted_string] = STATE(3),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [11] = {
    [sym_actions] = STATE(28),
    [sym_extended_state_attributes] = STATE(29),
    [sym_nested_state_machine] = STATE(30),
    [sym_arrow] = STATE(31),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_EQ_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_COLON_GT] = ACTIONS(35),
    [anon_sym_DASH_DASH] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_COLON] = ACTIONS(35),
    [sym_curly_bracket_open] = ACTIONS(39),
    [sym_square_bracket_open] = ACTIONS(41),
    [sym_comma] = ACTIONS(43),
    [sym_colon] = ACTIONS(45),
    [sym_semicolon] = ACTIONS(43),
    [sym_comment] = ACTIONS(21),
  },
  [12] = {
    [sym_state] = STATE(32),
    [sym_note] = STATE(33),
    [sym_state_identifier] = STATE(34),
    [sym__quoted_string] = STATE(3),
    [aux_sym_states_repeat1] = STATE(35),
    [aux_sym_note_repeat1] = STATE(14),
    [anon_sym_POUND] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [13] = {
    [sym_transition] = STATE(9),
    [sym_note] = STATE(18),
    [sym_state_identifier] = STATE(19),
    [sym__quoted_string] = STATE(3),
    [aux_sym_transitions_repeat1] = STATE(36),
    [aux_sym_note_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [14] = {
    [aux_sym_note_repeat1] = STATE(37),
    [anon_sym_POUND] = ACTIONS(7),
    [sym__identifier] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
  },
  [15] = {
    [anon_sym_POUND] = ACTIONS(53),
    [sym__identifier] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_comment] = ACTIONS(13),
  },
  [16] = {
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_comment] = ACTIONS(21),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(21),
  },
  [18] = {
    [sym_state_identifier] = STATE(39),
    [sym__quoted_string] = STATE(3),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [19] = {
    [sym_arrow] = STATE(31),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_EQ_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_COLON_GT] = ACTIONS(35),
    [anon_sym_DASH_DASH] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_COLON] = ACTIONS(35),
    [sym_comment] = ACTIONS(21),
  },
  [20] = {
    [anon_sym_POUND] = ACTIONS(61),
    [sym__identifier] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_comment] = ACTIONS(13),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [sym_comment] = ACTIONS(13),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym__identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
  },
  [23] = {
    [sym_actions] = STATE(40),
    [sym_extended_state_attributes] = STATE(41),
    [sym_nested_state_machine] = STATE(42),
    [sym_arrow] = STATE(43),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_EQ_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_COLON_GT] = ACTIONS(35),
    [anon_sym_DASH_DASH] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_COLON] = ACTIONS(35),
    [sym_curly_bracket_open] = ACTIONS(39),
    [sym_square_bracket_open] = ACTIONS(41),
    [sym_comma] = ACTIONS(73),
    [sym_colon] = ACTIONS(45),
    [sym_semicolon] = ACTIONS(73),
    [sym_comment] = ACTIONS(21),
  },
  [24] = {
    [sym__identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_comment] = ACTIONS(13),
  },
  [25] = {
    [sym_states] = STATE(45),
    [sym_state] = STATE(46),
    [sym_transitions] = STATE(47),
    [sym_transition] = STATE(48),
    [sym_note] = STATE(10),
    [sym_state_identifier] = STATE(11),
    [sym__quoted_string] = STATE(3),
    [aux_sym_states_repeat1] = STATE(49),
    [aux_sym_transitions_repeat1] = STATE(50),
    [aux_sym_note_repeat1] = STATE(14),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_curly_bracket_close] = ACTIONS(79),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [26] = {
    [sym__extended_state_attribute] = STATE(54),
    [sym_extended_state_key] = STATE(53),
    [aux_sym_extended_state_attributes_repeat1] = STATE(54),
    [anon_sym_color] = ACTIONS(81),
    [anon_sym_label] = ACTIONS(81),
    [anon_sym_active] = ACTIONS(81),
    [sym_square_bracket_close] = ACTIONS(83),
    [sym_comment] = ACTIONS(21),
  },
  [27] = {
    [sym_string] = STATE(55),
    [sym__quoted_string] = STATE(56),
    [sym_curly_bracket_open] = ACTIONS(85),
    [sym_comma] = ACTIONS(85),
    [sym_semicolon] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(21),
  },
  [28] = {
    [sym_nested_state_machine] = STATE(42),
    [sym_curly_bracket_open] = ACTIONS(39),
    [sym_comma] = ACTIONS(73),
    [sym_semicolon] = ACTIONS(73),
    [sym_comment] = ACTIONS(21),
  },
  [29] = {
    [sym_actions] = STATE(40),
    [sym_nested_state_machine] = STATE(42),
    [sym_curly_bracket_open] = ACTIONS(39),
    [sym_comma] = ACTIONS(73),
    [sym_colon] = ACTIONS(87),
    [sym_semicolon] = ACTIONS(73),
    [sym_comment] = ACTIONS(21),
  },
  [30] = {
    [sym_comma] = ACTIONS(73),
    [sym_semicolon] = ACTIONS(73),
    [sym_comment] = ACTIONS(21),
  },
  [31] = {
    [sym_state_identifier] = STATE(57),
    [sym__quoted_string] = STATE(3),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [32] = {
    [sym_comma] = ACTIONS(29),
    [sym_semicolon] = ACTIONS(89),
    [sym_comment] = ACTIONS(21),
  },
  [33] = {
    [sym_state_identifier] = STATE(59),
    [sym__quoted_string] = STATE(3),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [34] = {
    [sym_actions] = STATE(28),
    [sym_extended_state_attributes] = STATE(29),
    [sym_nested_state_machine] = STATE(30),
    [sym_curly_bracket_open] = ACTIONS(39),
    [sym_square_bracket_open] = ACTIONS(41),
    [sym_comma] = ACTIONS(43),
    [sym_colon] = ACTIONS(87),
    [sym_semicolon] = ACTIONS(43),
    [sym_comment] = ACTIONS(21),
  },
  [35] = {
    [sym_state] = STATE(60),
    [sym_note] = STATE(33),
    [sym_state_identifier] = STATE(34),
    [sym__quoted_string] = STATE(3),
    [aux_sym_states_repeat1] = STATE(35),
    [aux_sym_note_repeat1] = STATE(14),
    [anon_sym_POUND] = ACTIONS(91),
    [sym__identifier] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_comment] = ACTIONS(13),
  },
  [36] = {
    [sym_transition] = STATE(9),
    [sym_note] = STATE(18),
    [sym_state_identifier] = STATE(19),
    [sym__quoted_string] = STATE(3),
    [aux_sym_transitions_repeat1] = STATE(36),
    [aux_sym_note_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(100),
    [sym__identifier] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [sym_comment] = ACTIONS(13),
  },
  [37] = {
    [aux_sym_note_repeat1] = STATE(37),
    [anon_sym_POUND] = ACTIONS(109),
    [sym__identifier] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_comment] = ACTIONS(13),
  },
  [38] = {
    [anon_sym_color] = ACTIONS(112),
    [anon_sym_label] = ACTIONS(112),
    [anon_sym_active] = ACTIONS(112),
    [anon_sym_DASH_GT] = ACTIONS(112),
    [anon_sym_EQ_GT_GT] = ACTIONS(112),
    [anon_sym_EQ_GT] = ACTIONS(114),
    [anon_sym_GT_GT] = ACTIONS(112),
    [anon_sym_COLON_GT] = ACTIONS(112),
    [anon_sym_DASH_DASH] = ACTIONS(112),
    [anon_sym_EQ_EQ] = ACTIONS(112),
    [anon_sym_LT_DASH] = ACTIONS(112),
    [anon_sym_LT_LT_EQ] = ACTIONS(112),
    [anon_sym_LT_EQ] = ACTIONS(112),
    [anon_sym_LT_LT] = ACTIONS(114),
    [anon_sym_LT_COLON] = ACTIONS(112),
    [sym_curly_bracket_open] = ACTIONS(112),
    [sym_square_bracket_open] = ACTIONS(112),
    [sym_square_bracket_close] = ACTIONS(112),
    [sym_comma] = ACTIONS(112),
    [sym_colon] = ACTIONS(114),
    [sym_semicolon] = ACTIONS(112),
    [sym_comment] = ACTIONS(21),
  },
  [39] = {
    [sym_arrow] = STATE(43),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_EQ_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_COLON_GT] = ACTIONS(35),
    [anon_sym_DASH_DASH] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_COLON] = ACTIONS(35),
    [sym_comment] = ACTIONS(21),
  },
  [40] = {
    [sym_nested_state_machine] = STATE(61),
    [sym_curly_bracket_open] = ACTIONS(39),
    [sym_comma] = ACTIONS(116),
    [sym_semicolon] = ACTIONS(116),
    [sym_comment] = ACTIONS(21),
  },
  [41] = {
    [sym_actions] = STATE(62),
    [sym_nested_state_machine] = STATE(61),
    [sym_curly_bracket_open] = ACTIONS(39),
    [sym_comma] = ACTIONS(116),
    [sym_colon] = ACTIONS(87),
    [sym_semicolon] = ACTIONS(116),
    [sym_comment] = ACTIONS(21),
  },
  [42] = {
    [sym_comma] = ACTIONS(116),
    [sym_semicolon] = ACTIONS(116),
    [sym_comment] = ACTIONS(21),
  },
  [43] = {
    [sym_state_identifier] = STATE(63),
    [sym__quoted_string] = STATE(3),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [44] = {
    [sym_comma] = ACTIONS(118),
    [sym_semicolon] = ACTIONS(118),
    [sym_comment] = ACTIONS(21),
  },
  [45] = {
    [sym_transitions] = STATE(65),
    [sym_transition] = STATE(48),
    [sym_note] = STATE(18),
    [sym_state_identifier] = STATE(19),
    [sym__quoted_string] = STATE(3),
    [aux_sym_transitions_repeat1] = STATE(50),
    [aux_sym_note_repeat1] = STATE(14),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_curly_bracket_close] = ACTIONS(120),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [46] = {
    [sym_comma] = ACTIONS(29),
    [sym_semicolon] = ACTIONS(122),
    [sym_comment] = ACTIONS(21),
  },
  [47] = {
    [sym_curly_bracket_close] = ACTIONS(124),
    [sym_comment] = ACTIONS(21),
  },
  [48] = {
    [sym_semicolon] = ACTIONS(126),
    [sym_comment] = ACTIONS(21),
  },
  [49] = {
    [sym_state] = STATE(68),
    [sym_note] = STATE(33),
    [sym_state_identifier] = STATE(34),
    [sym__quoted_string] = STATE(3),
    [aux_sym_states_repeat1] = STATE(35),
    [aux_sym_note_repeat1] = STATE(14),
    [anon_sym_POUND] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [50] = {
    [sym_transition] = STATE(48),
    [sym_note] = STATE(18),
    [sym_state_identifier] = STATE(19),
    [sym__quoted_string] = STATE(3),
    [aux_sym_transitions_repeat1] = STATE(69),
    [aux_sym_note_repeat1] = STATE(14),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_curly_bracket_close] = ACTIONS(128),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [51] = {
    [anon_sym_color] = ACTIONS(130),
    [anon_sym_label] = ACTIONS(130),
    [anon_sym_active] = ACTIONS(130),
    [sym_square_bracket_close] = ACTIONS(130),
    [sym_equals] = ACTIONS(130),
    [sym_comment] = ACTIONS(21),
  },
  [52] = {
    [sym_curly_bracket_open] = ACTIONS(132),
    [sym_comma] = ACTIONS(132),
    [sym_colon] = ACTIONS(132),
    [sym_semicolon] = ACTIONS(132),
    [sym_comment] = ACTIONS(21),
  },
  [53] = {
    [anon_sym_color] = ACTIONS(134),
    [anon_sym_label] = ACTIONS(134),
    [anon_sym_active] = ACTIONS(134),
    [sym_square_bracket_close] = ACTIONS(134),
    [sym_equals] = ACTIONS(136),
    [sym_comment] = ACTIONS(21),
  },
  [54] = {
    [sym__extended_state_attribute] = STATE(72),
    [sym_extended_state_key] = STATE(53),
    [aux_sym_extended_state_attributes_repeat1] = STATE(72),
    [anon_sym_color] = ACTIONS(81),
    [anon_sym_label] = ACTIONS(81),
    [anon_sym_active] = ACTIONS(81),
    [sym_square_bracket_close] = ACTIONS(138),
    [sym_comment] = ACTIONS(21),
  },
  [55] = {
    [sym_curly_bracket_open] = ACTIONS(140),
    [sym_comma] = ACTIONS(140),
    [sym_semicolon] = ACTIONS(140),
    [sym_comment] = ACTIONS(21),
  },
  [56] = {
    [sym_curly_bracket_open] = ACTIONS(142),
    [sym_comma] = ACTIONS(142),
    [sym_semicolon] = ACTIONS(142),
    [sym_comment] = ACTIONS(21),
  },
  [57] = {
    [sym_actions] = STATE(74),
    [sym_extended_transition_attributes] = STATE(75),
    [sym_square_bracket_open] = ACTIONS(144),
    [sym_colon] = ACTIONS(87),
    [sym_semicolon] = ACTIONS(146),
    [sym_comment] = ACTIONS(21),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_POUND] = ACTIONS(150),
    [sym__identifier] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [sym_comment] = ACTIONS(13),
  },
  [59] = {
    [sym_actions] = STATE(40),
    [sym_extended_state_attributes] = STATE(41),
    [sym_nested_state_machine] = STATE(42),
    [sym_curly_bracket_open] = ACTIONS(39),
    [sym_square_bracket_open] = ACTIONS(41),
    [sym_comma] = ACTIONS(73),
    [sym_colon] = ACTIONS(87),
    [sym_semicolon] = ACTIONS(73),
    [sym_comment] = ACTIONS(21),
  },
  [60] = {
    [sym_comma] = ACTIONS(29),
    [sym_comment] = ACTIONS(21),
  },
  [61] = {
    [sym_comma] = ACTIONS(152),
    [sym_semicolon] = ACTIONS(152),
    [sym_comment] = ACTIONS(21),
  },
  [62] = {
    [sym_nested_state_machine] = STATE(76),
    [sym_curly_bracket_open] = ACTIONS(39),
    [sym_comma] = ACTIONS(152),
    [sym_semicolon] = ACTIONS(152),
    [sym_comment] = ACTIONS(21),
  },
  [63] = {
    [sym_actions] = STATE(77),
    [sym_extended_transition_attributes] = STATE(78),
    [sym_square_bracket_open] = ACTIONS(144),
    [sym_colon] = ACTIONS(87),
    [sym_semicolon] = ACTIONS(154),
    [sym_comment] = ACTIONS(21),
  },
  [64] = {
    [sym_comma] = ACTIONS(156),
    [sym_semicolon] = ACTIONS(156),
    [sym_comment] = ACTIONS(21),
  },
  [65] = {
    [sym_curly_bracket_close] = ACTIONS(158),
    [sym_comment] = ACTIONS(21),
  },
  [66] = {
    [anon_sym_POUND] = ACTIONS(67),
    [sym_curly_bracket_close] = ACTIONS(67),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [sym_comment] = ACTIONS(13),
  },
  [67] = {
    [anon_sym_POUND] = ACTIONS(71),
    [sym_curly_bracket_close] = ACTIONS(71),
    [sym__identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
  },
  [68] = {
    [sym_comma] = ACTIONS(29),
    [sym_semicolon] = ACTIONS(160),
    [sym_comment] = ACTIONS(21),
  },
  [69] = {
    [sym_transition] = STATE(48),
    [sym_note] = STATE(18),
    [sym_state_identifier] = STATE(19),
    [sym__quoted_string] = STATE(3),
    [aux_sym_transitions_repeat1] = STATE(69),
    [aux_sym_note_repeat1] = STATE(14),
    [anon_sym_POUND] = ACTIONS(100),
    [sym_curly_bracket_close] = ACTIONS(71),
    [sym__identifier] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [sym_comment] = ACTIONS(13),
  },
  [70] = {
    [sym_extended_state_value] = STATE(81),
    [sym__quoted_string] = STATE(82),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(21),
  },
  [71] = {
    [sym_curly_bracket_open] = ACTIONS(162),
    [sym_comma] = ACTIONS(162),
    [sym_colon] = ACTIONS(162),
    [sym_semicolon] = ACTIONS(162),
    [sym_comment] = ACTIONS(21),
  },
  [72] = {
    [sym__extended_state_attribute] = STATE(72),
    [sym_extended_state_key] = STATE(53),
    [aux_sym_extended_state_attributes_repeat1] = STATE(72),
    [anon_sym_color] = ACTIONS(164),
    [anon_sym_label] = ACTIONS(164),
    [anon_sym_active] = ACTIONS(164),
    [sym_square_bracket_close] = ACTIONS(167),
    [sym_comment] = ACTIONS(21),
  },
  [73] = {
    [sym__extended_transition_attribute] = STATE(86),
    [sym_extended_transition_key] = STATE(85),
    [aux_sym_extended_transition_attributes_repeat1] = STATE(86),
    [anon_sym_color] = ACTIONS(169),
    [sym_square_bracket_close] = ACTIONS(171),
    [sym_comment] = ACTIONS(21),
  },
  [74] = {
    [sym_semicolon] = ACTIONS(173),
    [sym_comment] = ACTIONS(21),
  },
  [75] = {
    [sym_actions] = STATE(77),
    [sym_colon] = ACTIONS(87),
    [sym_semicolon] = ACTIONS(154),
    [sym_comment] = ACTIONS(21),
  },
  [76] = {
    [sym_comma] = ACTIONS(175),
    [sym_semicolon] = ACTIONS(175),
    [sym_comment] = ACTIONS(21),
  },
  [77] = {
    [sym_semicolon] = ACTIONS(177),
    [sym_comment] = ACTIONS(21),
  },
  [78] = {
    [sym_actions] = STATE(87),
    [sym_colon] = ACTIONS(87),
    [sym_semicolon] = ACTIONS(179),
    [sym_comment] = ACTIONS(21),
  },
  [79] = {
    [sym_comma] = ACTIONS(181),
    [sym_semicolon] = ACTIONS(181),
    [sym_comment] = ACTIONS(21),
  },
  [80] = {
    [anon_sym_POUND] = ACTIONS(150),
    [sym_curly_bracket_close] = ACTIONS(150),
    [sym__identifier] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [sym_comment] = ACTIONS(13),
  },
  [81] = {
    [anon_sym_color] = ACTIONS(183),
    [anon_sym_label] = ACTIONS(183),
    [anon_sym_active] = ACTIONS(183),
    [sym_square_bracket_close] = ACTIONS(183),
    [sym_comment] = ACTIONS(21),
  },
  [82] = {
    [anon_sym_color] = ACTIONS(185),
    [anon_sym_label] = ACTIONS(185),
    [anon_sym_active] = ACTIONS(185),
    [sym_square_bracket_close] = ACTIONS(185),
    [sym_comment] = ACTIONS(21),
  },
  [83] = {
    [sym_equals] = ACTIONS(187),
    [sym_comment] = ACTIONS(21),
  },
  [84] = {
    [sym_colon] = ACTIONS(189),
    [sym_semicolon] = ACTIONS(189),
    [sym_comment] = ACTIONS(21),
  },
  [85] = {
    [sym_equals] = ACTIONS(191),
    [sym_comment] = ACTIONS(21),
  },
  [86] = {
    [sym__extended_transition_attribute] = STATE(90),
    [sym_extended_transition_key] = STATE(85),
    [aux_sym_extended_transition_attributes_repeat1] = STATE(90),
    [anon_sym_color] = ACTIONS(169),
    [sym_square_bracket_close] = ACTIONS(193),
    [sym_comment] = ACTIONS(21),
  },
  [87] = {
    [sym_semicolon] = ACTIONS(195),
    [sym_comment] = ACTIONS(21),
  },
  [88] = {
    [sym_extended_transition_value] = STATE(91),
    [sym__quoted_string] = STATE(92),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(21),
  },
  [89] = {
    [sym_colon] = ACTIONS(197),
    [sym_semicolon] = ACTIONS(197),
    [sym_comment] = ACTIONS(21),
  },
  [90] = {
    [sym__extended_transition_attribute] = STATE(90),
    [sym_extended_transition_key] = STATE(85),
    [aux_sym_extended_transition_attributes_repeat1] = STATE(90),
    [anon_sym_color] = ACTIONS(199),
    [sym_square_bracket_close] = ACTIONS(202),
    [sym_comment] = ACTIONS(21),
  },
  [91] = {
    [anon_sym_color] = ACTIONS(204),
    [sym_square_bracket_close] = ACTIONS(204),
    [sym_comment] = ACTIONS(21),
  },
  [92] = {
    [anon_sym_color] = ACTIONS(206),
    [sym_square_bracket_close] = ACTIONS(206),
    [sym_comment] = ACTIONS(21),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_state_machine, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = false}, SHIFT(15),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_state_identifier, 1),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_state_identifier, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [23] = {.count = 1, .reusable = false}, SHIFT(16),
  [25] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_state_machine, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(20),
  [31] = {.count = 1, .reusable = true}, SHIFT(21),
  [33] = {.count = 1, .reusable = true}, SHIFT(22),
  [35] = {.count = 1, .reusable = true}, SHIFT(24),
  [37] = {.count = 1, .reusable = false}, SHIFT(24),
  [39] = {.count = 1, .reusable = true}, SHIFT(25),
  [41] = {.count = 1, .reusable = true}, SHIFT(26),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_state, 1),
  [45] = {.count = 1, .reusable = false}, SHIFT(27),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_transitions, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_note, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_note, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(aux_sym_note_repeat1, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_note_repeat1, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(38),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_state_machine, 2),
  [61] = {.count = 1, .reusable = false}, REDUCE(aux_sym_states_repeat1, 2),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_states_repeat1, 2),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_states, 2),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_states, 2),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_transitions_repeat1, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(aux_sym_transitions_repeat1, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_state, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_arrow, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_arrow, 1),
  [79] = {.count = 1, .reusable = false}, SHIFT(44),
  [81] = {.count = 1, .reusable = true}, SHIFT(51),
  [83] = {.count = 1, .reusable = true}, SHIFT(52),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_actions, 1),
  [87] = {.count = 1, .reusable = true}, SHIFT(27),
  [89] = {.count = 1, .reusable = true}, SHIFT(58),
  [91] = {.count = 2, .reusable = false}, REDUCE(aux_sym_states_repeat1, 2), SHIFT_REPEAT(2),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_states_repeat1, 2), SHIFT_REPEAT(3),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_states_repeat1, 2), SHIFT_REPEAT(4),
  [100] = {.count = 2, .reusable = false}, REDUCE(aux_sym_transitions_repeat1, 2), SHIFT_REPEAT(2),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_transitions_repeat1, 2), SHIFT_REPEAT(3),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_transitions_repeat1, 2), SHIFT_REPEAT(4),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_note_repeat1, 2), SHIFT_REPEAT(2),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym__quoted_string, 3),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_state, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_nested_state_machine, 2),
  [120] = {.count = 1, .reusable = false}, SHIFT(64),
  [122] = {.count = 1, .reusable = true}, SHIFT(66),
  [124] = {.count = 1, .reusable = true}, SHIFT(64),
  [126] = {.count = 1, .reusable = true}, SHIFT(67),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_transitions, 1),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_extended_state_key, 1),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_extended_state_attributes, 2),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__extended_state_attribute, 1),
  [136] = {.count = 1, .reusable = true}, SHIFT(70),
  [138] = {.count = 1, .reusable = true}, SHIFT(71),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_actions, 2),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [144] = {.count = 1, .reusable = true}, SHIFT(73),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_states, 3),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_states, 3),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_state, 4),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 4),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_nested_state_machine, 3),
  [158] = {.count = 1, .reusable = true}, SHIFT(79),
  [160] = {.count = 1, .reusable = true}, SHIFT(80),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_extended_state_attributes, 3),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extended_state_attributes_repeat1, 2), SHIFT_REPEAT(51),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym_extended_state_attributes_repeat1, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(83),
  [171] = {.count = 1, .reusable = true}, SHIFT(84),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 4, .alias_sequence_id = 1),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_state, 5),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 5, .alias_sequence_id = 2),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 5),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_nested_state_machine, 4),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym__extended_state_attribute, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_extended_state_value, 1),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_extended_transition_key, 1),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_extended_transition_attributes, 2),
  [191] = {.count = 1, .reusable = true}, SHIFT(88),
  [193] = {.count = 1, .reusable = true}, SHIFT(89),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_transition, 6, .alias_sequence_id = 3),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_extended_transition_attributes, 3),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extended_transition_attributes_repeat1, 2), SHIFT_REPEAT(83),
  [202] = {.count = 1, .reusable = true}, REDUCE(aux_sym_extended_transition_attributes_repeat1, 2),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym__extended_transition_attribute, 3),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_extended_transition_value, 1),
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
