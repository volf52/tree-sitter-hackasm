module.exports = grammar({
  name: 'hackasm',
  rules: {
    source_file: ($) => repeat($._instruction_or_label),
    _instruction_or_label: ($) => choice($.label_def, $.instruction),
    label_def: ($) => seq('(', $.label_ident, ')'),
    instruction: ($) => choice($.a_inst, $.c_inst),
    a_inst: ($) => seq('@', $.label_ident),
    c_inst: ($) => 'c',
    label_ident: ($) => /[a-zA-Z]+/,
  },
});
