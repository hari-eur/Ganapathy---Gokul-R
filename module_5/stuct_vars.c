#include <stdio.h>

struct Time
{
    unsigned short seconds;
    unsigned short minutes;
    unsigned short hours;
    unsigned short day;
    unsigned short month;
    unsigned short year;
};

int main()
{
    struct Time time;

    printf("Enter a Time:\n");
    printf("Hours: ");
    scanf("%hu", &time.hours);
    printf("Minutes: ");
    scanf("%hu", &time.minutes);
    printf("Seconds: ");
    scanf("%hu", &time.seconds);
    printf("Day: ");
    scanf("%hu", &time.day);
    printf("Month: ");
    scanf("%hu", &time.month);
    printf("Year: ");
    scanf("%hu", &time.year);

    printf("----------------------------------\n");

    printf("Entered Time:\n");
    printf("Hours: %u\n", time.hours);
    printf("Minutes: %u\n", time.minutes);
    printf("Seconds: %u\n", time.seconds);
    printf("Day: %u\n", time.day);
    printf("Month: %u\n", time.month);
    printf("Year: %u\n", time.year);

    printf("----------------------------------\n");

    printf("Size of struct time is %zu bytes.\n", sizeof(struct Time));

    return 0;
}