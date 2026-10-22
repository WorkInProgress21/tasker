#include <stdio.h>
#include "string.h"

#define MAXTASKS 20

int taskId[MAXTASKS];
bool taskCompleted[MAXTASKS];
char taskName[MAXTASKS][100];

int taskCount=0;
int nextTaskId=1;

void printHelp();
void rm();
void listTask();
void addTask(char *name);
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
            if (strlen(argv[i+1])>100)
            {
                printf("Max Name length exceeded");
                return;
            }
            addTask(argv[i+1]);

        }
        if (strcmp(argv[i],"rm")==0){
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
    printf("tasker add [Name] .... adds a Task/List\n");
    printf("tasker rm  [Name] .... removes a Task/List\n");
    printf("tasker mc  [Name] .... marks a Task as complete\n");
    printf("tasker umc [Name] .... unmarks a Task\n");
    printf("tasker ls  [Name] .... lists a Task/List\n");
}

void addTask(char *name){
    if (taskCount>=MAXTASKS)
    {
        printf("Max Number of Tasks reached\n");
        return;
    }

    taskId[taskCount]=nextTaskId;
    strcpy(taskName[taskCount],name);
    taskCompleted[taskCount]=false;

    taskCount++;
    nextTaskId++;

    printf("Task Created\n");
}

void listTask()
{
    printf("Do shit");
}

void handleSaves()
{
    printf("Do shit");
}