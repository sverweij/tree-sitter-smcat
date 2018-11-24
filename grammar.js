module.exports = grammar({
  name: 'smcat',

  rules: {
    state_machine: $ => seq(
      optional($._states),
      optional($._transitions)
    ),

    _states: $ => seq(
      repeat(
        seq(
          $.state,
          ','
        )
      ),
      $.state,
      ';'
    ),

    state: $ => seq(
      $.state_identifier,
      optional($._extended_state_attributes),
      optional($.actions)
    ),

    actions: $ => seq(
      ':',
      optional(
        choice(
          $._quoted_string
        // TODO: make non-quoted strings work alongside quoted ones
        // /[^,;]*/
        )
      )
    ),

    _extended_state_attributes: $ => seq(
      '[',
      repeat(
        $._extended_state_attribute
      ),
      ']'
    ),

    _extended_state_attribute: $ => choice(
      $.color,
      $.label,
      $.active
    ),

    color: $ => seq(
      'color',
      '=',
      $._quoted_string
    ),

    label: $ => seq(
      'label',
      '=',
      $._quoted_string
    ),

    active: $ => 'active',

    _transitions: $ => repeat1(
      $.transition
    ),

    transition: $ => seq(
      $.state_identifier,
      $.arrow,
      $.state_identifier,
      optional($._extended_transition_attributes),
      optional(
        alias($.actions, 'label')
      ),
      ';'
    ),

    _extended_transition_attributes: $ => seq(
      '[',
      repeat(
        $._extended_transition_attribute
      ),
      ']'
    ),

    _transition_label_attribute: $ => choice(
      $._quoted_string
    ),

    _extended_transition_attribute: $ => $.color,

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

    _identifier: $ => /([^;, "\t\n\r=\-><:{[])+/,

    state_identifier: $ => choice(
      $._identifier,
      $._quoted_string
    ),

    _quoted_string: $ => seq(
      '"',
      /[^"]*/,
      '"'
    )
  }
})
