/**
 * Listing 5.3, Seite 58 
 * 
 * Kopfgesteuert:
 * Bei einer while-Schleife findet die Prüfung als erstes statt.
 * Vor der Eingabe des ersten Artikels und jedes weiteren Artikels
 * eines Einkaufs wird der Benutzer gefragt, ob er einen Artikel
 * eingeben möchte. Eine while-Schleife nennt man auch kopfgesteuert,
 * da die Prüfung am Beginn (Kopf) der Schleife stattfindet.
 * 
 * Unterschiede zur do-while-Schleife:
 * nummer wird vor der Schleife auf 0 gesetzt. Sollte der Benutzer
 * keinen Artikel eingeben wollen, so bleibt sie auf 0. Zu Beginn
 * wird der Benutzer gefragt, ob er überhaupt einen Artikel eingeben
 * möchte.
 * 
 * Prüfung zu Beginn:
 * Die Schleife beginnt mit der Prüfung, die bereits aus dem Beispiel 
 * mit der do-while-Schleife bekannt ist. Sollte sich der Benutzer 
 * entschieden haben, Artikel einzugeben, wird der Wert der Variablen 
 * beim ersten Druchlauf auf 1 gesetzt. Nach Eingabe und Berechnung 
 * wird der Benutzer gefragt, ob er einen weiteren Artikel eingeben möchte.
 * 
 * Hinweis:
 * Unmittelbar nach dem Kopf der while-Schleife ist KEIN Semikolon zu notieren.
 * Dies würde die Schleife unmittelbar beenden. Der Compiler meldet diesen 
 * Fehler nicht. Die anschließenden Anweisungen wären nicht mehr mit der Schleife
 * verbunden und würden nur einmalig ausgeführt.
 */
#include <stdio.h>

int main() {
    int anzahl, nummer, nochEiner;
    double preis, summeRechnung;

    /* Startwerte */
    nummer = 0;
    summeRechnung = 0.0;

    /* Abfrage */
    printf("Wollen Sie einen Artikel eingeben? (Ja = 1, Nein = 0): ");
    scanf("%d", &nochEiner);

    /* Bedingte Wiederholung, Prüfung vorher */
    while (nochEiner == 1) {
        /* Laufende Nummer erhöhen */
        nummer = nummer + 1;

        /* Eingabe */
        printf("Artikel %d, Anzahl: ", nummer);
        scanf("%d", &anzahl);
        printf("Artikel %d, Preis in Euro: ", nummer);
        scanf("%lf", &preis);

        /* Berechnung */
        summeRechnung = summeRechnung + anzahl * preis;

        /* Abfrage */
        printf("Noch ein Artikel (Ja = 1, Nein = 0): ");
        scanf("%d",  &nochEiner);
    }

    /* Ausgabe */
    if (nummer == 0)
        printf("Keine Eingabe\n");
    else
        printf("Summe der Rechnung: %.2f Euro\n", summeRechnung);

    return 0;
}