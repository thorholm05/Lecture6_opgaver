#include <stdio.h>

void hours_minutes_seconds(int total_seconds, int *hours, int *minutes, int *seconds);

int main(void) {
    int total_seconds;
    int hours, minutes, seconds;

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
    *hours = total_seconds / 3600;
    *minutes = (total_seconds % 3600) / 60;
    *seconds = total_seconds % 60;
}