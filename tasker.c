#include <stdio.h>
#include "string.h"

#define maxLists 10
#define maxTasks 20

typedef struct {
    int id;
    bool complete;
    char name[100];
}tasks;

typedef struct {
    int id;
    char name[100];

    tasks task[maxTasks];
    unsigned int taskCount;
}lists;

void printHelp();
void addTask();
void addList();
void rm();
void listTask();
void handleSaves();

static usedTaskIDs;
static usedListIDs;

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
            if(strcmp(argv[i+1],"list")==0) {
               addList();
            }
            if(strcmp(argv[i+1],"task")==0) {
                addTask();
            }
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
    printf("tasker add [List] [Name] .... adds a Task/List\n");
    printf("tasker rm  [List] [Name] .... removes a Task/List\n");
    printf("tasker mc  [List] [Name] .... marks a Task as complete\n");
    printf("tasker umc [List] [Name] .... unmarks a Task\n");
    printf("tasker ls  [List] [Name] .... lists a Task/List\n");
}

void addTask(){

}

void addList(){
    lists list={0};
}

void listTask()
{
    printf("Do shit");
}

void handleSaves()
{
    printf("Do shit");
}