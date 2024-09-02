/**
 * Listing 4.4, Seite 48
 * 
 * Verknüpfung:
 * Sollen alle Bedingungen wahr sein, oder reicht es aus, 
 * wenn eine der Bedingungen wahr ist?
 * 
 * Und &&:
 * Falls alle Bedingungen wahr sein sollten, werden diese mit mithilfe
 * des Operators && verknüpft. Er steht für das logische Und.
 * 
 * Oder ||:
 * Reicht dagegen eine Bedingung aus, kann der Operator || genutzt werden. Er
 * steht für das logische Oder.
 * 
 * Nicht !:
 * Es gibt noch einen dritten logischen Operator. Das Zeichen ! steht für das
 * logische Nicht. Mit diesem Operator wird der Wahrheitswert einer
 * Bedingung umgedreht: Aus wahr wird falsch und umgekehrt. Manche Verzweigung
 * lässt sich mithilfe dieses Operators einfacher formulieren.
 */
#include <stdio.h>

int main() {
    double preisApfel = 1.45, preisBirne = 0.85, preisBanane = 0.75;

    /* Logisches Und */
    if (preisBirne < 1.0 && preisBanane < 1.0)
        printf("Beide Artikel sind billig\n");
    
    /* Logisches Oder */
    if (preisApfel > 0.99 || preisBirne > 0.99)
        printf("Mindestens einer der Artikel ist teuer\n");

    /* Logisches Nicht */
    if (!(preisBanane > 0.99))
        printf("Artikel ist nicht teuer\n");

    return 0;
}