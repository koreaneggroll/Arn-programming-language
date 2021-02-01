#ifndef ARN_PARSER_H
#define ARN_PARSER_H

#include <string.h>

#include "token.h"


void parter_start(TokenList* list, char* source);
int parser_get_number(char* buf);
TokenInst parser_get_inst(char* buf);


#endif //ARN_PARSER_H