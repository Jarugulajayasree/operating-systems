#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[30];
    int id;
    double salary;
} Employee;
 
int main()
{
	int i;
    int n=2;
    Employee employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);
        printf("Id: ");
        scanf("%d",&employees[i].id);
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);
        char ch = getchar();
 
        printf("\n");
    }
    printf("-------------- All Employees Details ---------------\n");
    for(i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}


OUTPUT:
Enter 2 Employee Details

Employee 1:-
Name: JAYASREE
Id: 8309911059
Salary: 50000

Employee 2:-
Name: POOJITHA
Id: 7893221211
Salary: 60000

-------------- All Employees Details ---------------
Name    : JAYASREE
Id      : -280023533
Salary  : 50000.00

Name    : POOJITHA
Id      : -696713381
Salary  : 60000.00

