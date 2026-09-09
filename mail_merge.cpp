// Write a program that outputs an acceptance letter for Makerere University. It should prompt a user to enter their first name, last name, study program, academic year.
// The program should have autodates

// Example:

// Date: 27th August 2026

// To: John Okello,

// Dear John,

// CONGRATULATIONS! I am pleased to inform you that the Makerere University 
// Admissions Board has approved your application for admission to the 
// 2027/2028 academic year.

// You have been offered a place for the following course:
// PROGRAM: Bachelor of Science in Computer and Communication Engineering

// As a student of Makerere University, you will be part of a historic 
// institution dedicated to academic excellence and innovation. Please ensure 
// that you report to the Academic Registrar's office with your original 
// academic documents for verification during the orientation week.

// We look forward to welcoming you to the Makerere University.

// Yours sincerely,


// John Doe
// Registra

#include <stdio.h>
#include <string.h>
#include <time.h>

// Function to add the correct ordinal suffix to the day
void getOrdinal(int day, char *ordinal)
{
    if (day >= 11 && day <= 13)
    {
        sprintf(ordinal, "%dth", day);
    }
    else
    {
        switch (day % 10)
        {
            case 1:
                sprintf(ordinal, "%dst", day);
                break;
            case 2:
                sprintf(ordinal, "%dnd", day);
                break;
            case 3:
                sprintf(ordinal, "%drd", day);
                break;
            default:
                sprintf(ordinal, "%dth", day);
        }
    }
}

int main()
{
    char firstName[50];
    char lastName[50];
    char program[150];
    char academicYear[20];

    // Variables for automatic date
    time_t currentTime;
    struct tm *localTime;

    char ordinalDay[10];

    // Get the current date from the computer
    time(&currentTime);
    localTime = localtime(&currentTime);

    // Add ordinal suffix to the day
    getOrdinal(localTime->tm_mday, ordinalDay);

    // Input student information
    printf("=============================================\n");
    printf("     MAKERERE UNIVERSITY ACCEPTANCE LETTER\n");
    printf("=============================================\n\n");

    printf("Enter student's first name: ");
    scanf("%49s", firstName);

    printf("Enter student's last name: ");
    scanf("%49s", lastName);

    // Clear newline left by scanf
    getchar();

    printf("Enter study program: ");
    fgets(program, sizeof(program), stdin);
    program[strcspn(program, "\n")] = '\0';

    printf("Enter academic year (e.g. 2027/2028): ");
    scanf("%19s", academicYear);

    // Display acceptance letter
    printf("\n\n");
    printf("============================================================\n");
    printf("                  MAKERERE UNIVERSITY\n");
    printf("                    ACCEPTANCE LETTER\n");
    printf("============================================================\n\n");

    printf("Date: %s %s %d\n\n",
           ordinalDay,
           (char *[]){"January", "February", "March", "April",
                      "May", "June", "July", "August",
                      "September", "October", "November", "December"}
           [localTime->tm_mon],
           localTime->tm_year + 1900);

    printf("To: %s %s,\n\n", firstName, lastName);

    printf("Dear %s,\n\n", firstName);

    printf("CONGRATULATIONS!\n\n");

    printf("I am pleased to inform you that the Makerere University\n");
    printf("Admissions Board has approved your application for admission\n");
    printf("to the %s academic year.\n\n", academicYear);

    printf("You have been offered a place for the following course:\n\n");

    printf("PROGRAM: %s\n\n", program);

    printf("As a student of Makerere University, you will be part of a\n");
    printf("historic institution dedicated to academic excellence and\n");
    printf("innovation. Please ensure that you report to the Academic\n");
    printf("Registrar's office with your original academic documents\n");
    printf("for verification during the orientation week.\n\n");

    printf("We look forward to welcoming you to the Makerere University.\n\n");

    printf("Yours sincerely,\n\n\n");

    printf("John Doe\n");
    printf("Registrar\n");

    printf("\n============================================================\n");

    return 0;
}





