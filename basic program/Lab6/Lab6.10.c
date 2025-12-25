#include <stdio.h>
struct student{
    int student_id ;
    int score ;
    char grade ;
};
void calculate_grade(struct student *student_ptr);
void display_menu();

int main(){
    struct student record = {0,0,' '};
    int choice ;
   do {
        display_menu();
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter Student ID:");
                scanf(" %d",&record.student_id);
                printf("Enter Score:");
                scanf(" %d",&record.score);
                calculate_grade(&record);
                break;
            case 2:
                printf("\n---Student Report---\n");
                printf("Student ID: %d\n",record.student_id);
                printf("Score: %d\n",record.score);
                printf("Grade: %c\n",record.grade);
                break;
            case 3:
                printf("Exit program");
                break;
            default:
            printf("Invalid Choice. Pleaese try again.\n");
        }
    }while(choice != 3);
    return 0;
}

void display_menu(){
    printf("\n---Student Record Menu---\n");
    printf("1.Input/Update Student data\n");
    printf("2. View Student Report\n");
    printf("3. Exit Program\n");
    printf("Enter your choice (1-3):");
}

void calculate_grade(struct student *student_ptr){
    if(student_ptr->score >= 80){
        student_ptr->grade = 'A';
    }else if(student_ptr->score >= 70){
        student_ptr->grade = 'B';
    }else if(student_ptr->score >= 60){
        student_ptr->grade = 'C';
    }else if(student_ptr->score >= 50){
        student_ptr->grade = 'D';
    }else{
        student_ptr->grade = 'F';
    }
}