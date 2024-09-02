/**
 * Listing 5.2, Seite 55
 * 
 * Benutzer steuert Schleife:
 * Es sollen wiederum Anzahl und Preis von mehreren Artikeln eines
 * Einkaufs eingegeben werden. Ebenso wird die Rechnungssumme ermittelt.
 * Nach der Eingabe des ersten Artikels und jedes weiteren Artikels wird
 * der Nutzer gefragt, ob er einen weiteren Artikel eingeben möchte. Er
 * bestimmt also, ob und wie häufig die Schleife durchlaufen wird. Dies
 * geschieht allerdings mindestens einmal, daher verwenden wir die do-while-
 * Schleife.
 * 
 * Eingabeschleife:
 * Eine do-while-Schleife nennt man auch fußgesteuert, da die Prüfung am Ende
 * (am Fuß) der Schleife stattfindet. Dieser Typ von Schleife wird häufig für
 * Eingaben mit anschließender Prüfung verwendet. Sollte der Benutzer eine
 * falsche Eingabe gemacht haben, bekommt er Gelegenheit zur Korrektur.
 * 
 * Unterschiede zum vorherigen Programm:
 * Es kommt die Variable nochEiner hinzu, in der festgehalten wird, ob der
 * Benutzer noch einen Artikel eingeben möchte (nochEiner = 1) oder nicht
 * (nochEiner = 0).
 * 
 * Erster Durchlauf:
 * nummer wird vor der Schleife auf 1 gesetzt. Die Schleife beginnt nach dem
 * Schlüsselwort do. Nach der Eingabe der Artikeldaten und der Berechnung
 * wird der Benutzer gefragt, ob er einen weiteren Artikel eingeben möchte.
 * Dabei werden ihm die möglichen Antworten auf diese Frage genannt: 1 oder 0.
 * 
 * Prüfung am Ende:
 * Der eingegebene Wert wird in der Variable nochEiner gespeichert. Als letzte
 * Anweisung innerhalb der Schleife wird die laufende Nummer erhöht. Nun erfolgt
 * die Prüfung: Solange (while) die Variable nochEiner den Wert 1 hat, wird die
 * Schleife wiederholt. Die Bedingung nach einem while steht innerhalb von runden
 * Klammern, wie bei der Verzweigung mit if.
 * 
 * Hinweis:
 * Nicht vergessen, ganz am Ende der do-while-Schleife ein Semikolon zu
 * notieren - im Unterschied zur while-Schleife.
 */
#include <stdio.h>

int main() {
    int anzahl, nummer, nochEiner;
    double preis, summeRechnung;

    /* Startwerte */
    nummer = 1;
    summeRechnung = 0.0;

    /* Bedingte Wiederholung */
    do {
        /* Eingabe */
        printf("Artikel %d, Anzahl: ", nummer);
        scanf("%d", &anzahl);
        printf("Artikel %d, Preis in Euro: ", nummer);
        scanf("%lf", &preis);

        /* Berechnung */
        summeRechnung = summeRechnung + anzahl * preis;

        /* Abfrage */
        printf("Noch ein Artikel (Ja = 1, Nein = 0): ");
        scanf("%d", &nochEiner);

        /* Laufende Nummer erhöhen */
        nummer = nummer + 1;
    }
    while (nochEiner == 1);

    /* Ausgabe */
    printf("Summe der Rechnung: %.2f Euro\n", summeRechnung);
    
    return 0;
}