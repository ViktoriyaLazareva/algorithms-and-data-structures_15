#include <stdio.h>
#include <stdlib.h>

//Task 15.1--------------------------

int hash = 0;

int getHash (char* str){
    while((*str) != '\0'){
        hash += (*str);
        str++;
    }
    return hash;
}

int main()
{
    char buffer[125];
    printf("Input string: ");
    gets(buffer);

    getHash(buffer);

    printf("Hash is:  %d\n", hash);

    return 0;
}
