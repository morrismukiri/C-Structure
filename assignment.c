/* 
 * File:   assignment.c
 * Author: morris
 *
 * Created on March 24, 2015, 11:51 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SCREEN_HEIGHT 25

void menu(int option); //main menu
void cls(); //clear screen
void addStudent();
void searchStudent();
void editStudent();
void deleteStudent();
int validScore(int score); //validate whether score is 0-100

int main() {
    menu(0);

}

void menu(int option) {

    if (option == 0) {
        //cls();
        printf("\n0. Exit");
        printf("\n1. Add Student");
        printf("\n2. Search Student");
        printf("\n3. Edit Student");
        printf("\n4. Delete Student\n");
        printf("Enter option:");
        option = getchar();
        option -= 48; //convert to int

    }
    switch (option) {
        case 0:
            break;
        case 1:
            addStudent();
            menu(0);
        case 2:
            searchStudent();
            menu(0);
        case 3:
            editStudent();
           menu(0);
        case 4:
            deleteStudent();
            menu(0);
        default:
            menu(0);
            break;
    }


}

void addStudent() {
    char Fname[20], Lname[20], reg[10];
    int eng, kisw, math, sci, soci;
    float total, average;

    printf("\nADD STUDENT...\n");
    printf("\nEnter Student Registration number:");
    scanf("%s", &reg);
    printf("\nEnter Student first name:");
    scanf("%s", &Fname);
    printf("\nEnter Student last name:");
    scanf("%s", &Lname);

    do {
        printf("\nEnter English Score:");
        scanf("%d", &eng);
    } while (!validScore(eng));
    do {
        printf("\nEnter Kiswahili Score:");
        scanf("%d", &kisw);
    } while (!validScore(kisw));

    do {
        printf("\nEnter Mathematics Score:");
        scanf("%d", &math);
    } while (!validScore(math));

    do {
        printf("\nEnter Science Score:");
        scanf("%d", &sci);
    } while (!validScore(sci));

    do {
        printf("\nEnter Social studies Score:");
        scanf("%d", &soci);
    } while (!validScore(sci));


    total = eng + kisw + math + sci + soci;
    average = total / 5;
    char dbOutput[150];
    snprintf(dbOutput, sizeof dbOutput, "%s,%s,%s,%d,%d,%d,%d,%d,%.2f,%.2f", reg, Fname, Lname, eng, kisw, math, sci, soci,total,average);
    
    if(insertRecord(dbOutput)){
        printf("\n Student added Successfully\n");
    }else{
        printf("Error adding student\n");
    }

}

char* findRecord(char *what, int lineColumn) {
    char result[150];
    return " ";
}

int insertRecord(char *data) {
    int result = 1;
    FILE *db;

    db = fopen("db.txt", "a+");
    
    strcat(data, "\n");
    int res = fprintf(db, data);
    if (res< sizeof data) {
        result = 0;
    }
    fclose(db);
    return result;
}

int deleteRecord(int index) {

}

int validScore(int score) {
    int valid = 0;
    if (score >= 0 && score <= 100) {
        valid = 1;
    } else {
        printf("\nINVALID SCORE! Score should be betwen 0-100\n");
    }
    return valid;
}

void searchStudent() {
    printf("SEARCH STUDENT...\n");

}

void editStudent() {
    printf("EDIT STUDENT...\n");

}

void deleteStudent() {
    printf("DELETE STUDENT...\n");

}

void cls() {
    int i;

    for (i = 0; (i <= SCREEN_HEIGHT); i++) {
        printf("\n");
    }
}
