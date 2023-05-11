#pragma     once
#include    <string>
#include    <vector>
#define     stdstr  std::string

enum tokType {
    IDENTIFIER,
    ASSIGN,
    EQUAL,
    SUBTRACTION,
    ADDITION,
    DIVISION,
    MULTIPLICATION,
    EXPONENTATION,
    m_TOTAL
};

typedef struct lexeme {
    tokType tok;
    int     val;
} lexeme;

typedef struct s_tokenLookup {
    tokType     tok;
    std::string equiv;
} s_tokenLookup;

s_tokenLookup tokenLookup[m_TOTAL] = {
    {IDENTIFIER, NULL},
    {ASSIGN, "="},
    {EQUAL, "=="},
    {SUBTRACTION, "-"},
    {ADDITION, "+"},
    {DIVISION, "/"},
    {MULTIPLICATION, "*"},
    {EXPONENTATION, "**"},
};

lexeme lexstr(
    stdstr  str, 
    int     attrVal
) {
    lexeme ret;
    
}