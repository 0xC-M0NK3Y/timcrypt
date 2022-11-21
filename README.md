# timcrypt
Symetrique encryption library

Include the header file, compile with the timcrypt.a file, and link the math library with -lm.

example : gcc main.c timcrypt/timcrypt.a -lm

Easy to use, only 2 function, one to crypt, one to decrypt, and a structure with only the key in it.
It uses a 256 bits key (32 bytes).
