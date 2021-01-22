#define SIZE 25
#define NUM_EMP 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
void printEmployees (Employees [NUM_EMP], int);
void saveEmployees (Employees [NUM_EMP], int c, char [SIZE]);
int loadEmployees (Employees [NUM_EMP], char [SIZE]);
void swapEmployees (Employees *, Employee *);
*/
/* definition of an employee record*/

typedef struct employee
{
char fname[20];
char lname[20];
int id;
char dependents [3][20]; // assume that no employees can have more than 3 registered dependents
} Employees;


void printEmployees (Employees emp1[NUM_EMP], int c){
    for(int i = 0; i < c; i++){
        printf("Employee name: %s %s\n", emp1[i].fname, emp1[i].lname);
        printf("Id num. : %d\n", &emp1[i]);
        printf("Dependents: %s %s %s\n\n", emp1[i].dependents[0], emp1[i].dependents[1], emp1[i].dependents[2]);
    }

}
void saveEmployees (Employees emp1[NUM_EMP], int c, char txt[SIZE]){
    FILE *fptr;
    fptr = fopen(txt, "w");
    if(fptr==NULL){
        printf("Error!\n");
        exit(1);
    }
    for (int i = 0; i < c; i++){
        fprintf(fptr,"%s %s\n", emp1[i].fname, emp1[i].lname);
        fprintf(fptr,"%d\n", &emp1[i]);
        fprintf(fptr,"%s %s %s\n\n", emp1[i].dependents[0], emp1[i].dependents[1], emp1[i].dependents[2]);
    }
    fclose(fptr);
}
int loadEmployees (Employees emp2[NUM_EMP], char txtFile[SIZE]){
    FILE *fptr;
    fptr = fopen(txtFile, "r");
    if(fptr == NULL){
        printf("Error!\n");
        exit(1);
    }
    for (int i = 0; i < NUM_EMP; i++){
        fscanf(fptr,"%s %s\n", emp2[i].fname, emp2[i].lname);
        fscanf(fptr,"%d\n", &emp2[i]);
        fscanf(fptr,"%s %s %s\n\n", emp2[i].dependents[0], emp2[i].dependents[1], emp2[i].dependents[2]);
    }
    fclose(fptr);
    
}
void swapEmployees (Employees *e1, Employees *e2){
    Employees temp;
    
   
 strcpy(temp.fname, e1->fname);
 strcpy(temp.lname,e1->lname);
 temp.id = e1->id;
 strcpy(temp.dependents[0], e1->dependents[0]);
 strcpy(temp.dependents[1], e1->dependents[1]);
 strcpy(temp.dependents[2], e1->dependents[2]);//COPY e1 details to temp

 strcpy(e1->fname, e2->fname);
 strcpy(e1->lname,e2->lname);
 e1->id = e2->id;
 strcpy(e1->dependents[0], e2->dependents[0]);
 strcpy(e1->dependents[1], e2->dependents[1]);
 strcpy(e1->dependents[2], e2->dependents[2]);//COPY e2 details to e1

 strcpy( e2->fname, temp.fname);
 strcpy( e2->fname, temp.lname);
 e2->id = temp.id;
 strcpy(e2->dependents[0], temp.dependents[0]);
 strcpy(e2->dependents[1], temp.dependents[1]);
 strcpy(e2->dependents[2], temp.dependents[2]);//COPY temp(e1) details to e2

 


}
