#include <stdio.h>
#include "string.h"

#define maxProjects 10;
#define maxLists 10;
#define maxTasks 20;

typedef struct {
    int id;
    char name[100];

}projects;

typedef struct {
    int id;
    char name[100];

}lists;

typedef struct {
    int id;
    bool complete;
    char name[100];

}tasks;

void printHelp();
void add();
void rm();
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
            if(strcmp(argv[i+1],"project")==0) {
                add();
            }
            if(strcmp(argv[i+1],"list")==0) {
                add();
            }
            if(strcmp(argv[i+1],"task")==0) {
                add();
            }
        }
        if (strcmp(argv[i],"rm")==0){
            remove();
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
    printf("tasker add [Project] [List] [Name] .... adds a Task/List/Project\n");
    printf("tasker rm  [Project] [List] [Name] .... removes a Task/List/Project\n");
    printf("tasker mc  [Project] [List] [Name] .... marks a Task as complete\n");
    printf("tasker umc [Project] [List] [Name] .... unmarks a Task\n");
}

void add(){
}

void listTask()
{
    printf("Do shit");
}

void handleSaves()
{
    printf("Do shit");
}