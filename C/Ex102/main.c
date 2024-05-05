#include <stdio.h>
#include <string.h>

int casoDePrueba() {
    char cesar[100];
    int desp, i=0, j=0;
    int total=0;
    char vocales[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    char fin[]="FIN";

    fgets(cesar, 100, stdin);
    cesar[strlen(cesar)-1] = '\0';
    desp = cesar[0] - 'p';

    for (i = 1; cesar[i] != '\0'; i++){
        char letra = cesar[i] - desp;

        if(letra > 'z'){
            letra = (letra - 'z' - 1) + 'a';
        }
        else if(letra > 'Z' && cesar[i] <= 'Z'){
            letra = letra - ('Z'-'A' + 1);
        }
        else if(letra < 'A'){
            letra = letra + ('Z' - 'A' - 1);
        }
        else if(letra < 'a' && cesar[i] >= 'a'){
            letra = letra + ('z' - 'a' + 1);
        }

        for(j = 0; j < 10; j++) {
            if(letra == vocales[j]){
                total++;
                break;
            }
        }
    }

    if(strlen(cesar) == 4) {
        char res[4];
        res[0] = cesar[1] - desp;
        res[1] = cesar[2] - desp;
        res[2] = cesar[3] - desp;
        res[3] = '\0';

        if (strcmp(res, fin) == 0) {
            return 0;
        }
    }
    printf("%d\n", total);

    return 1;
} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }

    return 0;

}
