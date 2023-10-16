#include <stdio.h>
#include <string.h>

void congratulateStudent(char *name, char gender, float average) {
    char message[50];
    
    if (average > 10) {
        if (gender == 'M' || gender == 'm') {
            strcpy(message, "Congratulations young man :-)");
        } else if (gender == 'F' || gender == 'f') {
            strcpy(message, "Congratulations Miss :-)");
        } else {
            strcpy(message, "Congratulations :-)");
        }
    } else {
        strcpy(message, ":-(");
    }

    printf("%s\n", message);
}

int main() {
    char studentName[50];
    char studentGender;
    float studentAverage;

    printf("Enter student's name: ");
    scanf("%s", studentName);

    printf("Enter student's gender (M/F): ");
    scanf(" %c", &studentGender);

    printf("Enter student's average: ");
    scanf("%f", &studentAverage);

    congratulateStudent(studentName, studentGender, studentAverage);

    return 0;
}
