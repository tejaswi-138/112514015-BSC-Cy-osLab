#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Current Directory\n");
    system("pwd");
    printf("\nFiles\n");
    system("1s-1");
    printf("\nCreating Directory\n");
    system("mkdir Demo");
    printf("\nListing Files Again\n");
    system("1s");
    printf("\nRemoving Directory\n");
    system("rmdir Demo");
    return 0;
}