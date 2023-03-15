#include <stdio.h>

int main(int argc, char const *argv[])
{
    int grade;
    char letterGrade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    switch (grade) {
        case 10:
            letterGrade = 'S';
            break;
        case 9:
            letterGrade = 'A';
            break;
        case 8:
            letterGrade = 'B';
            break;
        case 7:
            letterGrade = 'C';
            break;
        case 6:
            letterGrade = 'D';
            break;
        case 5:
            letterGrade = 'E';
            break;
        default:
            letterGrade = 'F';
            break;
    }
    printf("Your grade is %c\n", letterGrade);

    return 0;
}
