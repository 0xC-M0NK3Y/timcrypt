#ifndef TIMCRYPT_H
# define TIMCRYPT_H

#include <stdint.h>

#define TIM_KEY_SIZE 32

typedef struct timcrypt {
    uint8_t key[TIM_KEY_SIZE];
}   timcrypt_t;

void timcrypt(uint8_t *buf, size_t len, timcrypt_t key);
void timdecrypt(uint8_t *buf, size_t len, timcrypt_t key);

#endif