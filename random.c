#include <stdlib.h>

// Returns a random character from 'A' - 'Z'
char randchar()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return alphabet[rand() % 26];
}