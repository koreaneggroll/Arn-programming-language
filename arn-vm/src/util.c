#include "util.h"

char* read_ascii_file(const char* path){
    //Create a file
    FILE *file = fopen(path, "r");
    
    if(!file){
        printf("Couldn't open file %s\n", path);
        return NULL;
    }

    //Getting the file size
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fseek(file, 0, SEEK_SET);


    //Reads the file
    char* buf = (char*)malloc(sizeof(char) * (size + 1));

    if(!buf){
        printf("Couldn't allocate memory for file\n");
        return NULL;
    }

    fread(buf, 1, size, file);
    buf[size] = '\0';
    fclose(file);

    //And returns contents
    return buf;
}