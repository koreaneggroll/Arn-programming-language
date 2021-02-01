#ifndef ARN_PARSER_H
#define ARN_PARSER_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

#include "token.h"


enum _ParserStatus {
    PARSER_SUCCES,
    PARSER_SYNTAX_ERROR
};
typedef enum _ParserStatus ParserStatus;


ParserStatus parser_start(TokenList* list, const char* source);
uint32_t parser_get_number(const char* buf);
TokenInst parser_get_inst(const char* buf);


#endif //ARN_PARSER_H