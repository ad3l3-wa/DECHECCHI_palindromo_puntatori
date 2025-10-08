#include <stdio.h>

int main(void) {
    char frase[] = "i topi non avevano nipoti";
    char *end = (frase + sizeof(frase) - 1); //-1!!!
    //avrei potuto fare:
    //while(*end != '\0'){
    // end++;
    char *start = frase;

    while (start <= end){
        if (*start)