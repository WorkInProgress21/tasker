#include <stdio.h>

void printHelp();

int main(int argc, char *argv[])
{
    printf("Hello, World!\n");
    return 0;
}

void printHelp()
{
    printf("Commands:\n");
    printf("tasker add .... adds a Task   tasker rm .... removes a Task\n");
    printf("tasker mc .... marks a Task as complete\n");
}