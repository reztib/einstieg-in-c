/**
 * Listing 3.4, Seite 37
 * 
 * Mehrere Deklarationen:
 * Es werden zwei verschiedene Artikel eingekauft, in unterschiedlicher Menge.
 * Daher werden weitere Variablen benötigt. Mehrere Variablen desselben Typs
 * können durch ein Komma getrennt innerhalb einer Anweisung deklarieren
 * und auch initialisieren.
 * 
 * Summe:
 * Zur Berechnung der Summe der Rechnung werden die Einzelsummen pro Artikel
 * ermittelt. Anschließend werden diese Einzelsummen addiert.
 * 
 * Mittelwert:
 * Der mittelere Preis eines Artikels dieses Einkaufsvorgangs ergibt sich,
 * indem wir die Summe der REchnung durch die Gesamtanzahl der Artikel teilen.
 * Wir müssen Klammern setzen, da ansonsten die Division Vorrang hätte.
 * 
 * Differenz:
 * Als Letztes wird die preisliche Differenz der beiden Artikel ermittelt.
 * 
 * Hinweis:
 * Falls an einer Division zwei ganze Zahlen beteiligt sind, ergibt sich wiederum
 * eine ganze Zahl. Sollen sich Nachkommastellen ergeben, werden diese abgeschnitten.
 * Ein Beispiel: 11 durch 4 ergibt den Wert 2 und nicht etwa 2,75, wie es mathematisch
 * richtig wäre. Beispiel:
 *      11.0 / 4 oder 11 / 4.0, also eine der beiden Zahlen als double-Wert an
 *      1.0 * 11 / 4, Multiplikation eines double-Werts mit der ersten Zahl
 */
#include <stdio.h>

int main() {
    /* Deklaration, teilweise mit Initialisierung */
    int anzahlApfel = 2, anzahlBirne = 4;
    double preisApfel = 1.45, preisBirne = 0.85;
    double summeRechnung, preisMittel, preisDifferenz;

    /* Berechnung */
    summeRechnung = anzahlApfel * preisApfel + anzahlBirne * preisBirne;
    preisMittel = summeRechnung / (anzahlApfel + anzahlBirne);
    preisDifferenz = preisApfel - preisBirne;

    /* Ausgabe */
    printf("Summe der Rechnung: %.2f Euro\n", summeRechnung);
    printf("Mittlerer Preis: %.2f Euro\n", preisMittel);
    printf("Preis-Differenz: %.2f Euro \n", preisDifferenz);

    return 0;
}