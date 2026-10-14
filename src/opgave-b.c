#include <stdio.h>

// Funktionsprototype
void convert_currency(double dollars, double *euros, double *kroner,
                      double *rupees, double *yen);

int main(void) {
    double euros, kroner, rupees, yen;

    // Udskriv tabeloverskrifter
    printf("Dollars     Euro       Kroner     Rupier     Yen\n");

    // Gennemgå 1 til 100 dollars
    for (int dollars = 1; dollars <= 100; dollars++) {

        // Kald funktionen og send adresserne på variablerne
        convert_currency(dollars, &euros, &kroner, &rupees, &yen);

        // Udskriv resultaterne i en tabel
        printf("%-11d %-10.2f %-10.2f %-10.2f %.2f\n",
               dollars, euros, kroner, rupees, yen);
    }

    return 0;
}

// Funktion der omregner dollars til fire valutaer
void convert_currency(double dollars, double *euros, double *kroner,
                      double *rupees, double *yen) {

    *euros = dollars * 0.88;
    *kroner = dollars * 6.58;
    *rupees = dollars * 96.03;
    *yen = dollars * 158.93;
}