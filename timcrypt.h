#ifndef TIMCRYPT_H
# define TIMCRYPT_H

#include <stdint.h>

typedef struct timcrypt {
    uint8_t key[32];
}   timcrypt_t;

void timcrypt(uint8_t *buf, size_t len, timcrypt_t key);
void timdecrypt(uint8_t *buf, size_t len, timcrypt_t key);

#endif