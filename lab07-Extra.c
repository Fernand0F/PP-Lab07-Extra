#include <stdio.h>
#include <string.h>

void main() {
    char texto[100];
    int c, d, len;

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    len = strlen(texto);

    for (c = 0; c < len; c++) {

        if (((texto[c] == 'r')||(texto[c] == 'R'))&&(texto[c+1] != ' ')&&(c != len-2)) {  
            switch (texto[c]) {
                case 'r':
                    texto[c] = 'l';  break;
                case 'R':
                    texto[c] = 'L'; break;
            }

            if (texto[c+1] == 'r') {
                for (d = c+1; d < len; d++) {
                    texto[d] = texto[d+1];
                }
            }     
        }
    }

    printf("\n%s", texto);
}