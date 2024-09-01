/**
 * Aufgabestellung:
 *  Der Benutzer soll Anzahl und Preis für zwei verschiedene eingekaufte
 *  Artikel eingeben. Anschließend wird die Summe der Rechnung ermittelt.
 *  Außerdem wird ein Rabatt von 20% gewährt. Als Letztes soll die Summe
 *  einschließlich des eingerechneten Rabatts ausgegeben werden
 * 
 * Seite 41
 */
#include <stdio.h>

int main() {
    // Deklaration der Variablen
    int anzahlErsterArtikel, anzahlZweiterArtikel; // Anzahl der Artikel
    double preisErsterArtikel, preisZweiterArtikel; // Preis der Artikel
    double summeOhneRabatt, summeMitRabatt; // Berechnete Summen
    double rabatt = 0.2;  // Beispielrabatt von 20%

    // Eingabe der Anzahl und des Preises des ersten Artikels
    printf("Anzahl des ersten Artikels eingeben:\n");
    scanf("%d", &anzahlErsterArtikel); // Liest die Anzahl des ersten Artikels
    printf("Preis des ersten Artikels eingeben:\n");
    scanf("%lf", &preisErsterArtikel); // Liest den Preis des ersten Artikels

    // Ausgabe der eingegebenen Werte für den ersten Artikel
    printf("\nErster Artikel, Anzahl: %d\n", anzahlErsterArtikel);
    printf("Erster Artikel, Preis: %.2f\n", preisErsterArtikel);

    // Eingabe der Anzahl und des Preises des zweiten Artikels
    printf("\nAnzahl des zweiten Artikels eingeben:\n");
    scanf("%d", &anzahlZweiterArtikel); // Liest die Anzahl des zweiten Artikels
    printf("Preis des zweiten Artikels eingeben:\n");
    scanf("%lf", &preisZweiterArtikel); // Liest den Preis des zweiten Artikels

    // Ausgabe der eingegebenen Werte für den zweiten Artikel
    printf("\nZweiter Artikel, Anzahl: %d\n", anzahlZweiterArtikel);
    printf("Zweiter Artikel, Preis: %.2f\n", preisZweiterArtikel);

    // Berechnung der Summe ohne Rabatt
    // Multipliziert die Anzahl der Artikel mit dem jeweiligen Preis und summiert die Ergebnisse
    summeOhneRabatt = (anzahlErsterArtikel * preisErsterArtikel) + (anzahlZweiterArtikel * preisZweiterArtikel);

    // Berechnung der Summe mit Rabatt
    // Subtrahiert den Rabatt von der Summe ohne Rabatt (20% Rabatt bedeutet, es bleibt 80% der Summe)
    summeMitRabatt = summeOhneRabatt * (1 - rabatt);

    // Ausgabe der berechneten Summen
    printf("Summe ohne Rabatt: %.2f\n", summeOhneRabatt);
    printf("Summe mit Rabatt: %.2f\n", summeMitRabatt);

    return 0; // Programm endet erfolgreich
}