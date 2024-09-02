/**
 * Listing 4.3, Seite 47
 * 
 * Nicht wahr:
 * Eine Verzweigung kann durch das Schlüsselwort else erweitert werden. Ist
 * die Bedingung nach dem if nicht wahr, wird die Anweisung oder der Block von
 * Anweisungen durchgeführt, der dem else folgt.
 * 
 * Hinweis: 
 * Nach dem else kein Semikolon notieren. Dies würde diesen Zweig der Verzweigung
 * unmittelbar beenden. Der Compiler meldet diesen Fehler ebenfalls nicht. Die
 * anschließende Anweisung wäre nicht mehr mit der Verzweigung verbunden und 
 * würde stets ausgeführt.
 */
#include <stdio.h>

int main() {
    double preis = 0.85;

    /* Falls Bedingung zutrifft */
    if (preis > 0.99)
        printf("Ein teurer Artikel\n");

    /* Ansonsten, falls also Bedingung nicht zutrifft */
    else
    {
        printf("Ein billiger Artikel\n");
        printf("Den nehmen wir\n");
    }

    return 0;
}