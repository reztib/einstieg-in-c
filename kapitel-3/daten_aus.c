/**
 * Listing 3.2, Seite 33
 * 
 * Initialisierung:
 * Diesmal erhalten die Variablen bereits bei der Deklaration einen Wert.
 * Dieser Vorgang heißt "Initialisierung" und macht das Programm ein wenig
 * kompakter. Die Werte der Variablen können nach wie vor im Verlauf
 * des Programms geändert werden.
 * 
 * Formatierte Ausgabe:
 * Der Wert der Variable anzahl steht am Ende der ersten Ausgabe. Der
 * Wert der Variablen preis wird jeweils mitten in der zweiten und
 * dritten Ausgabe eingebettet. Ohen genauere Angabe führt %f zu einer
 * Formatierung der Ausgabe auf sechs Nachkommastellen. Durch die Angabe
 * von %.2f findet eine Formatierung auf zwei Nachkommastellen statt.
 * 
 * Dezimalpunkt:
 * Englische Schreibweise beachten. C verwendet immer einen Dezimalpunkt
 * anstatt des deutschen Dezimalkommas.
 */
#include <stdio.h>

int main() {
    /* Deklaration mit Initialisierung */
    int anzahl = 2;
    double preis = 1.45;

    /* Ausgabe */
    printf("Anzahl: %d\n", anzahl);
    printf("Preis: %f\n", preis);
    printf("Preis: %.2f Euro\n", preis);

    return 0;
}