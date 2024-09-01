/**
 * Listing 3.3, Seite 35
 * 
 * Dezimalpunkt:
 * Bei der Eingabe die englische Schreibweise beachten, also
 * mit einem Dezimalpunkt statt einem Dezimalkomma.
 * 
 * Falsche Eingaben:
 * Sollten mehrere Eingaben auf einmal gemacht werden, Buchstaben
 * statt Ziffern eingeben oder ein Komma statt eines Punktes, führt
 * dies leider zu einem unerwarteten Programmverlauf.
 */
#include <stdio.h>

int main() {
    /* Deklaration */
    int anzahl;
    double preis;

    /* Erste Eingabe */
    printf("Anzahl eingeben: ");
    scanf("%d", &anzahl);

    /* Zweite Eingabe */
    printf("Preis in Euro eingeben: ");
    scanf("%lf", &preis);

    /* Ausgabe */
    printf("Anzahl: %d\n", anzahl);
    printf("Preis: %.2f Euro\n", preis);

    return 0;
}