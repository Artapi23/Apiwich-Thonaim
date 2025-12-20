#include <stdio.h>
#define NUM_EMPLOYEES 4

struct Employee {
    int id ;
    int salary ;
};

void find_min_max_salary(struct Employee emp[],int size,int *max, int *min);

int main(){
    struct Employee staffdata[NUM_EMPLOYEES] ;
    int max_salary ;
    int min_salary ;
    int i ;

    printf("Enter data for %d Employee:\n", NUM_EMPLOYEES);
    for(i = 0 ; i < NUM_EMPLOYEES; i++){
        printf("Enter ID: ");
        scanf("%d", &staffdata[i].id);
        printf("Enter Salary: ");
        scanf("%d", &staffdata[i].salary);
    }

    find_min_max_salary(staffdata, NUM_EMPLOYEES, &max_salary, &min_salary );

    printf("\n--- EMPLOYEE SALARY SUMMARY ---\n");
    printf("ID     | Salary\n");
    printf("-------|---------\n");
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("%-6d | %d\n", staffdata[i].id, staffdata[i].salary);
    }
    printf("Maximum Salary Found: %d\n", max_salary);
    printf("Minimum Salary Found: %d\n", min_salary);

    return 0;
}
void find_min_max_salary(struct Employee emp[],int size,int *max, int *min){
    *max = emp[0].salary ;
    *min = emp[0].salary ;
    for(int i = 1 ; i < size ; i++){
        if(emp[i].salary > *max){
            *max = emp[i].salary ;
        }
        if(emp[i].salary < *min){
            *min = emp[i].salary ;
        }
    }
}