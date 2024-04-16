const re = {
  space: /[ \r\n\t\f\v\p{Zs}\p{Zl}\p{Zp}]/,
  sym: /[^ \r\n\t\f\v\p{Zs}\p{Zl}\p{Zp}#;"'`,(){}\[\]\\|]/,
  sign: /[+-]/,
  digit: /[0-9]/
}

module.exports = grammar({

  name: "coalton",

  rules: {
    program: $ => repeat($._token),
    _token: $ => choice($._space, $._value),
    _space: $ => choice(token(repeat1(re.space)), $.comment),
    comment: $ => /;.*/,
    _value: $ => choice($.string,
                        $.number,
                        $.symbol,
                        $.list),
    number: _ => token(num()),
    string: $ => seq('"', /[^"\\]+/, '"'),
    symbol: _ => token(repeat1(re.sym)),
    list: $ => seq("(", repeat($._token), ")")
  },
  
})

function num() {

  const int = repeat1(re.digit)
  const exp = optional(seq(/[eE]/,
                           optional(re.sign),
                           repeat1(re.digit)))
  const dec = choice(seq(int, exp),
                     seq(".",
                         repeat1(re.digit),
                         exp),
                     seq(repeat1(re.digit),
                         ".",
                         repeat(re.digit),
                         exp))
  const real = choice(int, dec)

  return seq(optional(re.sign), real)
}
