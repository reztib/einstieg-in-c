/**
 * Aufgabenstellung:
 *  Die Tabelle soll eine kleine Rechenhilfe darstellen. In ihr
 *  wird der Preis von unterschiedlichen Anzahl desselben Artikels
 *  ausgegeben. Es sind keine Eingaben des Benutzers erfoderlich. 
 *  Aufgrund der Regelmäßigkeit der Zahlen bitet sich die 
 *  for-Schleife zur Lösung an.
 */
#include <stdio.h>

int main() {
    double preisApfel = 1.45, preisGesamt;
    int anzahl;

    /* Tabelle mit for, Überschrift und Format */
    printf("Anzahl \t Preis\n");
    for (anzahl = 1; anzahl <= 10; anzahl++) {
        /* Berechnung */
        preisGesamt = anzahl * preisApfel;

        /* Ausgabe */
        printf("%d%8.2f Euro\n", anzahl, preisGesamt);
    }

    return 0;
}