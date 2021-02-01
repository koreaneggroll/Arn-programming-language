#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/util.h"
#include "../include/parser.h"
#include "../include/token.h"

// arnnn file.arnvm

int main (int argc, char **argv) {

   if(argc <3){
       printf("Too few arguments\n");
       return 1;
   }

   if(strcmp(argv[1], "arnnn") == 0){
       char* source = read_ascii_file(argv[2]);
       TokenList tokens;
       parter_start(&tokens, source);


       free(source);
   }
   
   return 0;
}