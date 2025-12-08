#include <stdio.h>
int main(){
    int clearanceLevel;
    int age;
    int Inactive;
    printf("Enter clearance level (1-3):");
    scanf("%d", &clearanceLevel);
    printf("Enter age:");
    scanf("%d", &age);
    printf("Enter Inactive status (0 for inactive, 1 for active):");
    scanf("%d", &Inactive);
    switch (clearanceLevel)
    {
    case 1:
        if (age >= 18 && age <= 60 && Inactive == 1) {
            printf("Access Granted\n");
            } else {
                printf("Access Denied\n");
            }
            break;
    case 2:
        if (age >= 21 && age <= 65 && Inactive == 1) {
            printf("Access Granted\n");
            } else {
                printf("Access Denied\n");
            }
            break;
    case 3:
        if (age >= 25 && age <= 70 && Inactive == 1) {
            printf("Access Granted\n");
            } else {
                printf("Access Denied\n");
            }
            break;

    default:
        printf("Invalid clearance level.\n");
        break;
    return 0;
}
}