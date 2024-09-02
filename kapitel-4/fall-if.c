/**
 * Listing 4.1, Seite 44
 * 
 * Verzweigung:
 * Eine Verzweigung wird mithilfe einer Bedingung formuliert. Eine Bedingung
 * hat einen Wahrheitswert. Dieser ist entweder wahr oder falsch.
 * 
 * Vergleichsoperatoren:
 * Liegt der Preis über 99 Cent, handelt es sich um einen teuren Artikel und
 * es wird der Block mit den beiden Anweisungen zur Ausgabe durchgeführt. Liegt
 * der Preis unterhalb von einem Euro, ist der Artikel billig und die einzelne
 * Anweisung wird durchgeführt.
 * 
 * Einrückung:
 * Lesbarkeit der Programme durch Einrückungen erhöhen.
 * 
 * Hinweis:
 * Nach der Bedingung kein Semikolon. Der Compiler meldet diesen Fehler nicht (Lauf-
 * zeitfehler). Die anschließende Anweisung wäre nicht mehr mit der Verzweigung
 * verbunden und würde stets ausgeführt.
 */
#include <stdio.h>

int main() {
    double preis = 0.85;

    /* Bedingte Ausführung eines Blocks von Anweisungen */
    if (preis > 0.99) {
        printf("Ein teurer Artikel\n");
        printf("Brauchen wir den wirklich?\n");
    }

    /* Bedingte Ausführung einer einzelnen Anweisung */
    if (preis < 1.0)
        printf("Ein billiger Artikel\n");
    
    return 0;
}