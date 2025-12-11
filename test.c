#include <stdio.h>

void printStudent(struct Student s);

struct Student{
    char name[50];
    int StudentId;
    float score;
};

int main(){
    int N,i;

if(scanf("%d", &N) != 1){
    return 1;
}

struct Student students[N];

for (i = 0; i < N; i++){
   
    if(scanf("%d %f %s", &students[i].StudentId, &students[i].score ,&students[i].name) != 3){
        return 1;
    }
    
}
for ( i = 0; i < N; i++)
{   
    printStudent(students[i]);
}

    return 0;
}

void printStudent(struct Student s){
    printf("ID: %d ", s.StudentId);
    printf("Name: %s ", s.name);
    printf("Score: %.2f\n", s.score);
}