/**
 * Aufgabestellung:
 *  Der Benutzer soll Anzahl und Preis für zwei verschiedene eingekaufte
 *  Artikel eingeben. Anschließend wird die Summe der Rechnung ermittelt.
 *  Falls diese Summe 10 Euro überschreitet, soll ein Rabatt von 20%
 *  gewährt werden, ansonsten soll kein Rabatt gewährt werden.
 * 
 * Seite 49
 */
#include <stdio.h>

int main() {
    int anzahl;
    double preis, summe;

    // Eingabe der Anzahl des gekauften Artikels
    printf("Anzahl des gekauften Artikels eingeben: ");
    scanf("%d", &anzahl);

    // Eingabe des Preises des Artikels
    printf("Artikelpreis eingeben: ");
    scanf("%lf", &preis);

    // Berechnung der Summe
    summe = anzahl * preis;

    // Überprüfung, ob die Summe 10 Euro überschreitet und Rabatt gewähren
    if (summe > 10.0) {
        summe = summe * 0.8; // 20% Rabatt
        
        // Ausgabe der Summe
        printf("Summe der Rechnung: %.2f Euro\n", summe);
    }
    else {
        printf("Summe der Rechnung: %.2f Euro\n", summe);
    }

    return 0;
}