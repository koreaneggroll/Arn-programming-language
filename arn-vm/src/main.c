#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/util.h"
#include "../include/parser.h"
#include "../include/token.h"
#include "../include/compiler.h"

// arnnn file.arnvm

int main (int argc, char **argv) {

   if(argc <3){
       printf("Too few arguments\n");
       return 1;
   }

   if(strcmp(argv[1], "arnnn") == 0){
        char* source = read_ascii_file(argv[2]);
        TokenList tokens;
        token_list_create(&tokens, 1);
        ParserStatus pstat = parser_start(&tokens, source);
        if(pstat != PARSER_SUCCES){
            return 1;
        }

        CompilerStatus cstat = compiler_start(&tokens);
        
        if(cstat != COMPILER_SUCCES){
            return 1;
        }

        /*for(int i = 0; i < tokens.ptr; i++){
            Token* t = token_list_get(&tokens, i);
            printf("%d, %d, %d\n", t->type, t->data, t->line);
        }*/

        token_list_destroy(&tokens);
        free(source);
   }
   
   return 0;
}