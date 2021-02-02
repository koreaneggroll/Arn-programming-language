#ifndef ARN_COMPILER_H
#define ARN_COMPILER_H

#include "../include/token.h"

enum _CompilerStatus {
    COMPILER_SUCCES,
};
typedef enum _CompilerStatus CompilerStatus;

CompilerStatus compiler_start(TokenList* tokens);

#endif // ARN_COMPILER_H
