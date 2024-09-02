/**
 * Listing 4.2, Seite 45
 * 
 * > < >= <= == !=
 * Beim Vergleich von Zahlen stehen sechs verschiedenen Vergleichsoperatoren
 * zur Verfügung. Neben > und < gibt es vier Operatoren, die jeweils aus zwei
 * Zeichen bestehen: >= (größer als oder gleich), <= (kleiner als oder gleich),
 * == (gleich) und != (ungleich).
 * 
 * Hinweis: 
 * Achtung beim Unterschied zwischen einer Zuweisung mit = und einem Vergleich
 * mit ==. Der Compiler übersetzt auch die Anweisung if (preis = 1.5) ohne Fehler-
 * meldung. Allerdings wurde damit nicht überprüft, ob der Preis 1,50 Euro beträgt,
 * sondern der Preis wurde mit 1,50 Euro festgelegt. Dies führt nicht zu den erwarteten
 * Ergebnissen.
 */
#include <stdio.h>

int main() {
    double preisApfel = 1.45, preisBirne = 0.85, preisKiwi = 1.45;

    /* Größer */
    if (preisApfel > preisBirne)
        printf("Apfel ist teurer als Birne\n");

    /* Kleiner */
    if (preisBirne < preisKiwi)
        printf("Birne ist billiger als Kiwi\n");

    /* Größer oder gleich */
    if (preisApfel >= preisKiwi)
        printf("Apfel ist mindestens so teuer wie Kiwi\n");

    /* Kleiner oder gleich */
    if (preisBirne <= preisKiwi)
        printf("Birne ist hoechstens so teuer wie Kiwi\n");
    
    /* Gleich */
    if (preisApfel == preisKiwi)
        printf("Apfel und Kiwi haben denselben Preis\n");

    /* Ungleich */
    if (preisBirne != preisKiwi)
        printf("Birne und Kiwi haben unterschiedliche Preise\n");

    return 0;
}