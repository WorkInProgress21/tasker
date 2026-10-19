#include <stdio.h>
#include "string.h"

void printHelp();

int main(int argc, char *argv[]){

    FILE *fileptr;

    fileptr=fopen("saves.txt","w");
    fclose(fileptr);

    fileptr=fopen("saves.txt","rw");

    for (int i=1; i<argc; i++) {
        if (strcmp(argv[i],"help")==0) {
            printHelp();
        }
    }

    fclose(fileptr);
    return 0;
}

void printHelp()
{
    printf("tasker add .... adds a Task\n");
    printf("tasker rm  .... removes a Task\n");
    printf("tasker mc  .... marks a Task as complete\n");
}