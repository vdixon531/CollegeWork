#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee
{
char fname[20];
char lname[20];
int id;
char dependents [3][20]; // assume that no employees can have more than 3 registered dependents
} Employees;

void saveEmployees (Employees [NUM_EMP], int c, char [SIZE]);
int loadEmployees (Employees [NUM_EMP], char [SIZE]);
void swapEmployees (Employees *, Employee *);

#define SIZE 25
#define NUM_EMP 3
