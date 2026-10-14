#include <stdio.h>

// Definer konstanter
#define HUNDRED_DOLLARS 100
#define FIFTY_DOLLARS 50
#define TWENTY_DOLLARS 20
#define TEN_DOLLARS 10

// Funktionsprototype
void calculate_bills(int amount, int *hundreds, int *fifties, int *twenties, int *tens);

int main(void) {
    int amount, hundreds, fifties, twenties, tens;

    // Indlæs dollarbeløb
    printf("Indtast et dollarbeloeb (deleligt med 10): ");
    scanf("%d", &amount);

    // Tjek om beløbet er gyldigt
    if (amount < 0 || amount % 10 != 0) {
        printf("Ugyldigt!\n");
        return 1;
    }
    //bruger return 1 fordi det afslutter main med en fejlkode.

    // Kald funktionen og gem resultaterne
    calculate_bills(amount, &hundreds, &fifties, &twenties, &tens);

    // Udskriv resultatet
    printf("100 dollar sedler: %d\n", hundreds);
    printf("50 dollar sedler: %d\n", fifties);
    printf("20 dollar sedler: %d\n", twenties);
    printf("10 dollar sedler: %d\n", tens);

    return 0;
}

// Funktion der beregner antallet af sedler
void calculate_bills(int amount, int *hundreds, int *fifties, int *twenties, int *tens) {
    *hundreds = amount / HUNDRED_DOLLARS;
    amount = amount % HUNDRED_DOLLARS;

    *fifties = amount / FIFTY_DOLLARS;
    amount = amount % FIFTY_DOLLARS;

    *twenties = amount / TWENTY_DOLLARS;
    amount = amount % TWENTY_DOLLARS;

    *tens = amount / TEN_DOLLARS;
}