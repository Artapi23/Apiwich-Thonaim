#include <stdio.h>
#include <string.h>

struct student{
    char name[50];
    int studentID;
    float score;
};

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int N, i;
    float total = 0.0;
    float avg = 0.0;
    
    printf("กรุณาป้อนจำนวนนักศึกษา (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("จำนวนนักศึกษาไม่ถูกต้อง\n");
        return 1;
    }

    struct student students[N];

    for (i = 0; i < N; i++) {
        printf("\n--- ข้อมูลนักศึกษาคนที่ %d ---\n", i + 1);
        
        printf("รหัส (ID) และ คะแนน (Score): ");
        if (scanf("%d %f", &students[i].studentID, &students[i].score) != 2) {
             printf("รับค่า ID/Score ผิดพลาด\n");
             return 1;
        }
        
        total += students[i].score;
        
        clear_input_buffer(); 

        printf("ชื่อนักศึกษา (Name): ");
        if (fgets(students[i].name, sizeof(students[i].name), stdin) == NULL) {
            printf("รับค่าชื่อผิดพลาด\n");
            return 1;
        }

        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }
    }
    
    if (N > 0) {
        avg = total / N; 
        
        printf("\n==================================\n");
        printf("ผลรวมคะแนนทั้งหมด: %.2f\n", total);
        printf("จำนวนนักศึกษา: %d\n", N);
        printf("คะแนนเฉลี่ย (Average score): %.2f\n", avg);
        printf("==================================\n");
    } else {
        printf("\nไม่มีข้อมูลนักศึกษาให้คำนวณ\n");
    }

    return 0;
}