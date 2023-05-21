#pragma     once
#include    "def.hpp"
#include    "str.hpp"

enum tktypes {
    E_IDENTIFIER,
    E_ASSIGN,
    E_EQUAL,
    E_SUBTRACTION,
    E_ADDITION,
    E_DIVISION,
    E_MULTIPLICATION,
    E_EXPONENTATION,
    M_TOTAL
};

typedef struct lexeme {
    tktypes     tok;
    int         val;
    const_str   lexin;
} lexeme;

typedef struct s_tklookup {
    tktypes         tok;
    const_str       equiv;
} s_tklookup;

s_tklookup tklookup[M_TOTAL] = {
    { E_IDENTIFIER,         NULL },
    { E_ASSIGN,             "=" },
    { E_EQUAL,              "==" },
    { E_SUBTRACTION,        "-" },
    { E_ADDITION,           "+" },
    { E_DIVISION,           "/" },
    { E_MULTIPLICATION,     "*" },
    { E_EXPONENTATION,      "**" },
};

lexeme lexstr(
    const_str   str, 
    int         attrval
) {
    lexeme ret = { E_IDENTIFIER, attrval, str };
    for (auto i: tklookup) {
        if (str == i.equiv){
            ret.tok = i.tok;
        }
    }
    return ret;
}

std::vector<lexeme> lex_file(
    const_str    _path
) {
    std::vector<char*> lines = 
}