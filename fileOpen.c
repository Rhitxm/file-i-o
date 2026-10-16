//to print hello world using file i/o
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("NewTest.txt", "r");
    fclose(fptr);
    return 0;
}

//to check whether file exists

#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("sample1.txt", "r");
    if(fptr==NUll){
        printf("file doesn't exist");
    }
    else{
    fclose(fptr);
    }
    return 0;
}
