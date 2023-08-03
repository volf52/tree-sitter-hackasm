const { buildPermutations } = require('./utils');

const REGISTERS = ['A', 'M', 'D'];
const JUMP_COMMANDS = ['JMP', 'JEQ', 'JLE', 'JGT', 'JGE', 'JLE', 'JNE'];

const DEST_CHOICES = buildPermutations(REGISTERS.join(''));

module.exports = grammar({
  name: 'hackasm',
  rules: {
    source_file: ($) => repeat($._line),
    _line: ($) => choice($.comment, $.label_def, $._instruction),
    label_def: ($) => seq('(', $.label_ident, ')'),
    _instruction: ($) => choice($.a_inst, $.c_inst),
    a_inst: ($) => seq('@', $.label_ident),
    c_inst: ($) => seq(optional($._dest_def), $.comp, optional($._jump_def)),
    label_ident: ($) => choice($._alpha, $._numeric),
    _dest_def: ($) => seq($.dest, '='),
    _jump_def: ($) => seq(';', $.jump),
    jump: ($) => choice(...JUMP_COMMANDS),
    dest: ($) => choice(...DEST_CHOICES),
    comp: ($) =>
      choice(
        '0',
        '1',
        '-1',
        'D',
        'A',
        'M',
        '!D',
        '!A',
        '!M',
        '-D',
        '-A',
        '-M',
        'D+1',
        'D-1',
        'A+1',
        'A-1',
        'M+1',
        'M-1',
        'D+A',
        'A+D',
        'D+M',
        'M+D',
        'D-A',
        'A-D',
        'D-M',
        'M-D',
        'D&A',
        'A&D',
        'D&M',
        'M&D',
        'D|A',
        'A|D',
        'D|M',
        'M|D',
      ),

    _alpha: ($) => /[a-zA-Z]+/,
    _numeric: ($) => /\d+/,
    comment: ($) => /\/\/.*\n/,
  },
});
