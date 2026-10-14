#include <stdio.h>

// Definer konstanter
#define SECONDS_PER_MINUTE 60
#define MINUTES_PER_HOUR 60
#define SECONDS_PER_HOUR (SECONDS_PER_MINUTE * MINUTES_PER_HOUR)

void hours_minutes_seconds(int total_seconds, int *hours, int *minutes, int *seconds);

int main(void) {
    int total_seconds, hours, minutes, seconds;

    // Indlæs antal sekunder
    printf("Indtast antal sekunder: ");
    scanf("%d", &total_seconds);

    // Kald funktionen og gem resultaterne
    hours_minutes_seconds(total_seconds, &hours, &minutes, &seconds);

    // Udskriv resultatet
    printf("%d timer, %d minutter og %d sekunder\n",
           hours, minutes, seconds);

    return 0;
}

// Funktion der omregner sekunder til timer, minutter og sekunder
void hours_minutes_seconds(int total_seconds, int *hours, int *minutes, int *seconds) {
    *hours = total_seconds / SECONDS_PER_HOUR;
    *minutes = (total_seconds % SECONDS_PER_HOUR) / SECONDS_PER_MINUTE;
    *seconds = total_seconds % SECONDS_PER_MINUTE;
}