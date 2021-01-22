#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.c"

/*typedef struct employee
{
char fname[20];
char lname[20];
int id;
char dependents [3][20]; // assume that no employees can have more than 3 registered dependents
} Employees;
*/
int main(int argc, char *argv[]){

    FILE *file = fopen(argv[2], "r");
    Employees emp[3];    
    
    int a = 3;//Number of employees
    
 strcpy(emp[0].fname,"John");
 strcpy(emp[0].lname,"Doe");
 emp[0].id = 5;
 strcpy(emp[0].dependents[0],"Pino");
 strcpy(emp[0].dependents[1],"Steve");
 strcpy(emp[0].dependents[2],"Mike"); 

 strcpy(emp[1].fname,"Rohan");
 strcpy(emp[1].lname,"Shah");
 emp[1].id = 4;
 strcpy(emp[1].dependents[0],"Valmik");
 strcpy(emp[1].dependents[1],"Dixon");
 strcpy(emp[1].dependents[2],""); 

 strcpy(emp[2].fname,"Susan");
 strcpy(emp[2].lname,"Trucks");
 emp[2].id = 7;
 strcpy(emp[2].dependents[0],"Denver");
 strcpy(emp[2].dependents[1],"Moscow");
 strcpy(emp[2].dependents[2],"Delhi"); 

printEmployees (emp, a);

saveEmployees (emp, a,  argv[1]);

int num = loadEmployees (emp,  argv[1]);
printf("%d employees detalis have been loaded from the .txt file", num);

swapEmployees (&emp[0], &emp[1]);

fclose(file);

}
