/**
 * Listing 5.4, Seite 59
 * 
 * In der Übungsaufgabe zu diesem Kapitel soll eine formatierte 
 * Tabelle ausgegeben werden. Eine Tabelle wird besonders leicht 
 * lesbar, wenn die Zahlenspalten jeweils rechtsbündig und in einer
 * bestimmten Breite ausgegeben werden. Bei einem double-Wert 
 * sollten außerdem Lage und Anzahl der Nachkommastellen übereinstimmen.
 * 
 * Ganze Zahlen:
 * In der ersten Tabelle werden zwei ganze Zahlen in einer Mindestbreite 
 * von sechs Zeichen formatiert und zwar mithilfe der Formatierung %6d. 
 * Normalerweise werden Leerzeichen vor der Zahl ausgegeben. Das Format 
 * %06d führt dazu, dass führende Nullen ausgegeben werden.
 * 
 * Nachkommastellen:
 * Bei der zweiten Tabelle werden double-Werte mithilfe des Formats %8.2f 
 * in einer Mindestbreite von acht Zeichen dargestellt. Der Dezimalpunkt 
 * und die zwei Nachkommastellen sind in diesen acht Zeichen enthalten. 
 * Es bleiben also noch fünf Zeichen für die Vorkommastellen übrig. Wie 
 * erwähnt handelt es sich um eine Mindestbreite. Sollte eine Zahl mehr 
 * Stellen haben, wird sie vollständig ausgegeben und nicht etwa abgeschnitten.
 */
#include <stdio.h>

int main() {
    int anzahlApfel = 12, anzahlRadio = 2;
    double preisApfel = 1.45, preisRadio = 109.95;

    /* Ausgabe für Tabelle von ganzen Zahlen, teilweise mit führenden Nullen */
    printf("Anzahl\n");
    printf("%6d\n", anzahlApfel);
    printf("%06d\n", anzahlRadio);

    /* Ausgabe für Tabelle von Zahlen mit Nachkommastellen */
    printf("\n      Preis\n");
    printf("%8.2f Euro\n", preisApfel);
    printf("%8.2f Euro\n", preisRadio);

    return 0;
}