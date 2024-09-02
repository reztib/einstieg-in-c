/**
 * Aufgabenstellung:
 * Im Folgenden sollen Benutzereingaben validiert werden. Fehleingaben
 * sollen zu einer Eingaben führen. 
 */
#include <stdio.h>

int main() {
    int anzahl;
    double preis;

    /* Eingabe der Anzahl mit Kontrolle, dass diese positiv ist */
    do {
        printf("Anzahl eingeben: ");
        scanf("%d", &anzahl);
        if (anzahl <= 0)
            printf("Anzahl muss positiv sein\n");
    } while (anzahl <= 0);

    /* Eingabe des Preises mit Kontrolle, dass dieser positiv ist und kleiner als zehn Euro */
    do {
        printf("Preis in Euro eingeben: ");
        scanf("%lf", &preis);
        if (preis <= 0)
            printf("Preis muss positiv sein\n");
        else if (preis >= 10)
            printf("Preis muss kleiner als 10 Euro sein\n");
    } while (preis <= 0 || preis >= 10);

    /* Ausgabe der validierten Werten */
    printf("Anzahl: %d\n", anzahl);
    printf("Preis: %.2f Euro\n", preis);

    return 0;
}