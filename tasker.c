#include <stdio.h>
#include "string.h"

void printHelp();
void addTask(char *tasks, char arg);
void removeTask();
void listTask();
void handleSaves();

int main(int argc, char *argv[]){
    char *tasks[]={};
    FILE *fileptr;

    fileptr=fopen("saves.txt","w");
    fclose(fileptr);

    fileptr=fopen("saves.txt","rw");

    for (int i=1; i<argc; i++) {
        if (strcmp(argv[i],"help")==0) {
            printHelp();
        }
        if (strcmp(argv[i],"add")==0){
            addTask(*tasks,*argv[i+1]);
        }
        if (strcmp(argv[i],"rm")==0){
            removeTask();
        }
        if (strcmp(argv[i],"ls")==0){
            listTask();
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
    printf("tasker umc .... unmarks a Task\n");
    printf("tasker ls  .... lists current Task\n");
}

void addTask(char *tasks,char arg){
    printf("%c",arg);
}

void listTask()
{
    printf("Do shit");
}

void removeTask()
{
    printf("Do shit");
}

void handleSaves()
{
    printf("Do shit");
}