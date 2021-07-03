// C program to illustrate
// size of struct
#include <stdio.h>

int main()
{

    struct B {
        // sizeof(double) = 8
        int z;

        // sizeof(int) = 4
        char x;


        // sizeof(short int) = 2
        //short int y;
        // Padding of 2 bytes
        //int p[3];
    };

    printf("Size of struct: %ld", sizeof(struct B));

    return 0;
}
