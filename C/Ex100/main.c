#include <stdio.h>
int ordAsc(int n){
    int dig[4], aux, num;
    int i, j;
    for (i = 0; i < 4; i++){
        dig[i] = n % 10;
        n = n/10;
    }
    for(i = 0; i < 3; i++){
        for (j = 0; j < 3-i; j++){
            if(dig[j] > dig[j+1]){
                aux = dig[j];
                dig[j] = dig[j+1];
                dig[j+1] = aux;
            }
        }
    }

    num = dig[3]*1000+dig[2]*100+dig[1]*10+dig[0];

    return num;
}
int ordDes(int n){
    int dig[4], aux, num;
    int i, j;
    for (i = 0; i < 4; i++){
        dig[i] = n % 10;
        n = n/10;
    }
    for(i = 0; i < 3; i++){
        for (j = 0; j < 3-i; j++){
            if(dig[j] < dig[j+1]){
                aux = dig[j];
                dig[j] = dig[j+1];
                dig[j+1] = aux;
            }
        }
    }

    num = dig[3]*1000+dig[2]*100+dig[1]*10+dig[0];

    return num;
}

void casoDePrueba() {
    int i, num, aux;
    scanf("%d", &num);
    for(i = 0; i < 7; i++){
        if (num == 6174)
            break;
        else{
            num=ordAsc(num);
            aux=ordDes(num);
            num-=aux;
        }
    }
    if(num!=6174)
        i=8;
    printf("%d\n", i);
}

int main() {
    unsigned int numCasos, i;
    scanf("%u\n", &numCasos);

    for (i = 0; i < numCasos; ++i)
        casoDePrueba();

    return 0;
}