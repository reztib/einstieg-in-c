/**
 * Listing 2.2, Seite 28
 * 
 * Kommentar:
 * Kommentare werden nicht übersetzt und sind immer nur in der Datei
 * mit dem C-Quellcode sichtbar. Seit dem Sprachstandard C99 sind auch
 * einzeilige Kommentare möglich. Sie beginnen hinter // und erstrecken
 * sich bis zum Ende der Zeile.
 * 
 * Langer Text:
 * Die einzelnen Textstücke stehen jeweils innerhalb von doppelten
 * Anführungszeichen. Die Zeichenfolge \n sorgt für einen Zeilenumbruch.
 */
#include <stdio.h>

int main() {
    /* Es gibt lange Kommentare.
        Diese stehen in mehreren Zeilen */
    printf("Es gibt auch lange"
    " Texte.\nDiese stehen"
    " auch in mehreren Zeilen.\n");

    return 0; // Kommentar bis zum Ende der Zeile, seit C99
}