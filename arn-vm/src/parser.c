#include "../include/parser.h"
#define true 1
#define false 0

void parser_start(TokenList* list, char* source){
    char lex[256];
    int lexi = 0;
    int i = 0;
    int line = 1;
    
    while(true){
        memset(lex, '\0', 256);

        while(source[i] != ' ' && source[i] != '\n' && source[i] != '\0'){
            lex[lexi++] = source[i++];
        }
        
        lex[lexi] = '\0';

        if(lex[0] == '#'){
            int num = parser_get_number(lex);
            token_list_add(list, token_create(NUMBER, num, line));
        }
        
        //If it isn't a number it is an instruction
        else{

        }

        lexi = 0;
        i++;

    }

}