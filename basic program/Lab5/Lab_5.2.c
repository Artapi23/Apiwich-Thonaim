#include <stdio.h>
struct Employee{
    int id ;
    int gross_salary ;
    int bonus ;
    int total_income ;
};
int calculate_net_salary(int total_income);
int main(){
    struct Employee emp;
    int net_salary ;
    printf("Enter Employee Id:");
    scanf("%d", &emp.id);
    printf("Enter GrossSalary :");
    scanf("%d",&emp.gross_salary);
    printf("Enter Bonus:");
    scanf("%d", &emp.bonus);
    emp.total_income = emp.gross_salary + emp.bonus ;
    net_salary = calculate_net_salary(emp.total_income);
    printf("\n-----EMPLOYEE SALARY REPORT-----\n");
    printf("ID: %d\n",emp.id);
    printf("Gross Salary: %d\n", emp.gross_salary);
    printf("Bonus : %d\n", emp.bonus);
    printf("Total Income: %d\n", emp.total_income);
    printf("Net Salary : %d\n", net_salary);
}
int calculate_net_salary(int total_income){
    int tax ;
    if(total_income > 30000){
        tax = total_income * 0.10 ;
    }else if(total_income <= 30000){
        tax = total_income *0.05 ;
    }
    return total_income - tax ;
}
