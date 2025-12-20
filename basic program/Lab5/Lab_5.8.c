#include <stdio.h>
struct student{
    int id ;
    int mathscore ;
    int sciencescore ;
    int englishscore ;
    int total_score ;
};

char calculate_grade(int total_score) ;
void calculate_average(int total_score, float *avg) ;

int main(){
    struct student student_info ;
    char final_grade ;
    float final_average ;

    printf("Enter Student ID: ");
    scanf("%d", &student_info.id);
    printf("Enter Math Score: ");
    scanf("%d", &student_info.mathscore);
    printf("Enter Science Score: ");
    scanf("%d", &student_info.sciencescore);
    printf("Enter English Score: ");
    scanf("%d", &student_info.englishscore);

    student_info.total_score = student_info.mathscore + student_info.sciencescore + student_info.englishscore ;

    calculate_average(student_info.total_score, &final_average);
    final_grade = calculate_grade(student_info.total_score);

    printf("*STUDENT ACADEMIC REPORT*\n");
    printf("Student ID: %d\n", student_info.id);
    printf("Math Score: %d, Science Score: %d, English Score: %d\n", student_info.mathscore, student_info.sciencescore, student_info.englishscore);
    printf("Total Score: %d\n", student_info.total_score);
    printf("Average Score: %.2f\n", final_average);
    printf("Final Grade: %c\n", final_grade);

    return 0;
}
    char calculate_grade(int total_score) {
    if (total_score >= 250) {
        return 'A';
    } else if (total_score >= 200) {
        return 'B';
    } else if (total_score < 200) {
        return 'C';
    } else {
        return 1 ;
    }
}
    void calculate_average(int total_score, float *avg) {
    *avg = (float)total_score / 3,0 ;
}
    
