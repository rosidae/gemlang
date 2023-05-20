#pragma     once
#include    "def.hpp"

enum token_types {
    E_IDENTIFIER,
    E_ASSIGN,
    E_EQUAL,
    E_SUBTRACTION,
    E_ADDITION,
    E_DIVISION,
    E_MULTIPLICATION,
    E_EXPONENTATION,
    m_TOTAL
};

typedef struct lexeme {
    token_types tok;
    int     val;
    const_str    lexin;
} lexeme;

typedef struct s_token_lookup {
    token_types     tok;
    const_str        equiv;
} s_token_lookup;

s_token_lookup token_lookup[m_TOTAL] = {
    { E_IDENTIFIER,        NULL },
    { E_ASSIGN,            "=" },
    { E_EQUAL,             "==" },
    { E_SUBTRACTION,       "-" },
    { E_ADDITION,          "+" },
    { E_DIVISION,          "/" },
    { E_MULTIPLICATION,    "*" },
    { E_EXPONENTATION,     "**" },
};

lexeme lexstr(
    const_str    _str, 
    int     _attr_val
) {
    lexeme ret = { E_IDENTIFIER, _attr_val, _str };
    for (auto i: token_lookup) {
        if ( _str==i.equiv ){
            ret.tok = i.tok;
        }
    }
    return ret;
}

std::vector<lexeme> lex_file(
    const_str    _path
) {
    
}