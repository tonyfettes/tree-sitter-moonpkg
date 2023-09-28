/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'moonpkg',

  extras: $ => [
    /\s/
  ],

  word: $ => $.ident,

  rules: {
    file: $ => $.package_file,

    package_file: $ => seq(
      $.package_clause,
      repeat($.import_decl),
    ),

    package_clause: $ => seq(
      'package',
      $.name,
    ),

    import_spec: $ => seq(
      optional($.name),
      $.path,
    ),

    import_decl: $ => seq(
      'import',
      choice(
        $.import_spec,
        seq(
          '(',
          repeat($.import_spec),
          ')'
        )
      )
    ),

    name: $ => $.ident,

    path: $ => $.string,

    string: _ => /".*"/,
    ident: _ => /[a-zA-Z_][a-zA-Z_0-9]*/,
  }
})
