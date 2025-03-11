// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:

// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
// $>

#include <unistd.h>

char putchar(int n)
{
    int c;
    
    if(n>9)
        putchar(n/10);
    c
}

void fizzbuzz()
{
    int n;

    n = 1;
    while(n<=100)
    {
        if (n % 3 == 0 && n % 5 == 0)
            write(1, "fizz",1);
        else if (n % 5 == 0)
            write(1, "buzz",1);
        else if (n % 3 == 0)
            write(1, "fizzbuzz",1);
        else 
        {

        }
        write(1, "\n", 1);
        n++;
    }
}
