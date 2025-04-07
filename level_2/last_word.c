// Assignment name  : last_word
// Expected files   : last_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a string and displays its last word followed by a \n.
// 
// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.
// 
// If the number of parameters is not 1, or there are no words, display a newline.
// 
// Example:
// 
// $> ./last_word "FOR PONY" | cat -e
// PONY$
// $> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
// not$
// $> ./last_word "   " | cat -e
// $
// $> ./last_word "a" "b" | cat -e
// $
// $> ./last_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>

#include <unistd.h>

void last_word(char *str)
{
    int i;
    int end;
    int start;

    i=0;
    end = 0;
    start = 0;
    while (str[i])
        i++;
    i--;
    while(i >= 0 && (str[i] == ' ' || str[i] == '\t'))
        i--;
    end = i;
    while(i >= 0 && str[i] == ' ' && str[i] == '\t')
        i--;
    start = i;
    while (start <= end)
        write(1, &str[start++],1);
    write(1,"\n",1);
}
