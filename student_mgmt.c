#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

struct Student {
    int id;
    char name[NAME_LENGTH];
    float grade;
};

struct Student students[MAX_STUDENTS];
int student_count = 0;

void add_student() {
    if (student_count >= MAX_STUDENTS) {
        printf("Maximum number of students reached!\n");
        return;
    }
    
    struct Student s;
    printf("Enter student ID: ");
    scanf("%d", &s.id);
    printf("Enter student name: ");
    scanf(" %[^\n]s", s.name);
    printf("Enter student grade: ");
    scanf("%f", &s.grade);
    
    students[student_count] = s;
    student_count++;
    
    printf("Student added successfully!\n");
}

void display_students() {
    if (student_count == 0) {
        printf("No students found!\n");
        return;
    }
    
    printf("\n--- Student List ---\n");
    for (int i = 0; i < student_count; i++) {
        printf("ID: %d, Name: %s, Grade: %.2f\n", 
               students[i].id, students[i].name, students[i].grade);
    }
}

void search_student() {
    int id;
    printf("Enter student ID to search: ");
    scanf("%d", &id);
    
    for (int i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            printf("Student Found:\n");
            printf("ID: %d, Name: %s, Grade: %.2f\n", 
                   students[i].id, students[i].name, students[i].grade);
            return;
        }
    }
    printf("Student not found!\n");
}

int main() {
    int choice;
    
    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                display_students();
                break;
            case 3:
                search_student();
                break;
            case 4:
                printf("Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}