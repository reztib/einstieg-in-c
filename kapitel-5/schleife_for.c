/**
 * Listing 5.1, Seite 51
 * 
 * Angenommen, es sollen Anzahl und Preis von drei Artikeln eines
 * Einkaufs eingegeben werden. Anschließend soll die Rechungssumme
 * ermittelt werden. Es ist bekannt, dass die Daten von Artikel
 * Nummer 1, Artikel Nummer 2 und Artikel Nummer 3 benötigt werden,
 * daher kann eine for-Schleife genutzt werden.
 * 
 * Regelmäßige Wiederholungen mit for:
 * Innerhalb der runden Klammern stehen drei Elemente, die die for-
 * Schleife steuern, getrennt durch zwei Semikola.
 * 
 *      Startanweisung:
 *      Die einmalig durchgeführte Startanweisung, in der die sogenannte
 *      Schleifenvariable nummer den Wert 1 bekommt.
 * 
 *      Laufbedingung:
 *      Die Laufbedingung, die vor jedem Durchlauf der Schleife untersucht
 *      wird. Falls nummer kleiner als 4 ist, wird die Schleife durchlaufen
 *      Ansonsten läuft das Programm hinter der Schleife weiter.
 * 
 *      Änderung danach:
 *      Die Anweisung zur Veränderung der Schleifenvariable nach jedem Durchlauf.
 * 
 * Hinweis:
 * Unmittelbar nach dem Kopf der for-Schleife kein Semikolon zu
 * notieren, dies würde die Schleife unmittelbar beenden. Der Compiler
 * meldet diesen Fehler nicht. Die anschließenden Anweisungen wären
 * nicht mehr mit der Schleife verbunden und würden nur einmalig
 * ausgeführt.
 */
#include <stdio.h>

int main() {
    int anzahl, nummer;
    double preis, summeRechnung;

    /* Startwert */
    summeRechnung = 0.0;

    /* Regelmäßige Wiederholung */
    for (nummer = 1; nummer < 4; nummer = nummer +1){
        /* Eingabe */
        printf("Artikel %d, Anzahl: ", nummer);
        scanf("%d", &anzahl);

        printf("Artikel %d, Preis in Euro: ", nummer);
        scanf("%lf", &preis);

        /* Berechnung */
        summeRechnung = summeRechnung + anzahl * preis;
    }

    /* Ausgabe */
    printf("Summe der Rechnung: %.2f Euro\n", summeRechnung);

    return 0;
}