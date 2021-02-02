#ifndef ARN_BYTEBUFFER_H
#define ARN_BYTEBUFFER_H

#include <stdint.h>
#include <stdlib.h>

struct _ByteBuffer {
    uint8_t* buffer;
    int ptr;
    int size;
};
typedef struct _ByteBuffer ByteBuffer;

#endif //ARN_BYTEBUFFER_H