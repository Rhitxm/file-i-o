//to print hello world using file i/o
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("NewTest.txt", "r");
    fclose(fptr);
    return 0;
}
