#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Creating a file...\n");
    system("echo Welcome to Linux Practical > demo.txt");

    printf("\nDisplaying file contents using cat\n");
    system("cat demo.txt");

    printf("\nDisplaying file contents using more\n");
    system("more demo.txt");

    printf("\nDisplaying file contents using less\n");
    system("less demo.txt");

    printf("\nDisplaying first line using head\n");
    system("head -1 demo.txt");

    printf("\nDisplaying last line using tail\n");
    system("tail -1 demo.txt");

    return 0;
}