#include <stdio.h>
#define NUM_STUDENTS 4 

struct student{
    int id ;
};

struct student Id_list[NUM_STUDENTS];
    int search_id ;
    int found_status ;
    int i ;
    int check_id_existence(struct student students[],int size, int search_id);

int main(){
    
    printf("Enter IDs for %d students\n", NUM_STUDENTS);
    for(i = 0; i < NUM_STUDENTS; i++){
        printf("Student %d Id: ",i + 1);
        scanf("%d", &Id_list[i].id);
    }
    printf("\n*ID SEARCH REPORT*\n");
    printf("\nEnter ID to search:");
    scanf("%d", &search_id);
    printf("Recorded IDS: ");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%d ", Id_list[i].id);
    }
    found_status = (Id_list, NUM_STUDENTS, search_id);
    if(found_status){
        printf("\nID FOUND in the system\n");
    } else {
        printf("\nID NOT FOUND in the system\n");
    }

    return 0;
}
int check_id_existence(struct student students[],int size, int search_id){
    for(int i = 0; i < size; i++){
        if(students[i].id == search_id){
            found_status = 1;
        }
    }
    return found_status ;
}