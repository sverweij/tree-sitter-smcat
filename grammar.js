module.exports = grammar({
  name: 'smcat',

  extras: $ => [
    $.comment,
    /[\s]/
  ],

  rules: {
    state_machine: $ => seq(
      optional($.states),
      optional($.transitions)
    ),

    // states
    states: $ => seq(
      repeat(
        seq(
          $.state,
          $.comma
        )
      ),
      $.state,
      $.semicolon
    ),

    state: $ => seq(
      optional($.note),
      $.state_identifier,
      optional($.extended_state_attributes),
      optional($.actions),
      optional($.nested_state_machine)
    ),

    actions: $ => seq(
      $.colon,
      optional(
        $.string
      )
    ),

    extended_state_attributes: $ => seq(
      $.square_bracket_open,
      repeat(
        $._extended_state_attribute
      ),
      $.square_bracket_close
    ),

    _extended_state_attribute: $ => seq(
      $.extended_state_key,
      optional(
        seq(
          $.equals,
          $.extended_state_value
        )
      )
    ),

    extended_state_key: $ => choice(
      'color',
      'label',
      'active'
    ),

    extended_state_value: $ => $._quoted_string,

    nested_state_machine: $ => seq(
      $.curly_bracket_open,
      seq(
        optional($.states),
        optional($.transitions)
      ),
      $.curly_bracket_close
    ),

    // transitions
    transitions: $ => repeat1(
      seq(
        $.transition,
        $.semicolon
      )
    ),

    transition: $ => seq(
      optional($.note),
      $.state_identifier,
      $.arrow,
      $.state_identifier,
      optional($.extended_transition_attributes),
      optional(alias($.actions, 'label'))
    ),

    extended_transition_attributes: $ => seq(
      $.square_bracket_open,
      repeat(
        $._extended_transition_attribute
      ),
      $.square_bracket_close
    ),

    _transition_label_attribute: $ => choice(
      $._quoted_string
    ),

    _extended_transition_attribute: $ => seq(
      $.extended_transition_key,
      $.equals,
      $.extended_transition_value
    ),

    extended_transition_key: $ => 'color',

    extended_transition_value: $ => $._quoted_string,

    arrow: $ => choice(
      '->',
      '=>>',
      '=>',
      '>>',
      ':>',
      '--',
      '==',
      '<-',
      '<<=',
      '<=',
      '<<',
      '<:'
    ),

    // generic definitions
    note: $ => repeat1(
      seq(
        '#',
        /.*/
      )
    ),

    curly_bracket_open: $ => '{',

    curly_bracket_close: $ => '}',

    square_bracket_open: $ => '[',

    square_bracket_close: $ => ']',

    equals: $ => '=',

    comma: $ => ',',

    colon: $ => ':',

    semicolon: $ => ';',

    /* eslint no-useless-escape:0 */
    _identifier: $ => /([^;, "\t\n\r=\-><:{\[])+/,

    state_identifier: $ => choice(
      $._identifier,
      $._quoted_string
    ),

    string: $ => choice(
      $._quoted_string
      // TODO: make non-quoted strings work alongside quoted ones
      // /[^,;]*/
    ),

    _quoted_string: $ => seq(
      '"',
      /[^"]*/,
      '"'
    ),

    // comment matching: shamelessly stolen from the c tree sitter grammer
    // at https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js
    // ... and they reference stackoverflow:
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  }
})
