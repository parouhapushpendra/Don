#include <stdio.h>
#include <time.h>

int main() {
    int birthYear, currentYear, age;

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    // Getting current year
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    currentYear = local->tm_year + 1900;

    // Calculating age
    age = currentYear - birthYear;

    if (age >= 0) {
        printf("You are approximately %d years old.\n", age);
    } else {
        printf("Invalid birth year entered.\n");
    }

    return 0;
}
