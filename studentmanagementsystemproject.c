#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};
void addStudent() {
    FILE *fp = fopen("student.dat", "ab"); // append binary
    if(fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    struct Student s;
    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    fflush(stdin);
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = 0; // remove \n
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("Student Added Successfully!\n");
}

void searchStudent() {
    FILE *fp = fopen("student.dat", "rb");
    if(fp == NULL) {
        printf("File not found!\n");
        return;
    }

    int roll, found = 0;
    struct Student s;
    printf("Enter Roll No to Search: ");
    scanf("%d", &roll);

    while(fread(&s, sizeof(s), 1, fp) == 1) {
        if(s.roll == roll) {
            printf("\nRoll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
            found = 1;
            break;
        }
    }
    if(!found) printf("Student not found!\n");
    fclose(fp);
}

void deleteStudent() {
    FILE *fp = fopen("student.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if(fp == NULL) {
        printf("File not found!\n");
        return;
    }

    int roll, found = 0;
    struct Student s;
    printf("Enter Roll No to Delete: ");
    scanf("%d", &roll);

    while(fread(&s, sizeof(s), 1, fp) == 1) {
        if(s.roll!= roll) {
            fwrite(&s, sizeof(s), 1, temp); // copy all except deleted
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("student.dat");
    rename("temp.dat", "student.dat");

    if(found) printf("Student Deleted Successfully!\n");
    else printf("Student not found!\n");
}

void displayAll() {
    FILE *fp = fopen("student.dat", "rb");
    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }

    struct Student s;
    printf("\n--- ALL STUDENTS ---\n");
    while(fread(&s, sizeof(s), 1, fp) == 1) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);
}


int main() {
    int choice;

    while(1) {
        printf("\n====== STUDENT RECORD SYSTEM ======\n");
        printf("1. Add Student\n");
        printf("2. Search Student\n");
        printf("3. Delete Student\n");
        printf("4. Display All Students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: searchStudent(); break;
            case 3: deleteStudent(); break;
            case 4: displayAll(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

