#pragma once
#include <string>
#define stdstr std::string

typedef enum toktype {
    IDENTIFIER,
    EQUAL,
    ADDITION,
    SUBTRACTION,
    DIVISION,
    MULTIPLICATION,
    EXPONENTATION,
    LITERALNUM,
    LITERALSTR
} toktype;

typedef struct lexeme {
    toktype tok;
    int val;
} lexeme;

lexeme lexstr(stdstr str) {
    
}