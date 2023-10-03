#include <stdio.h>
int potencia(int base, int expoente);
int main(){
int b, e, res;
printf("Digite a base: ");
scanf("%d", &b);
printf("Digite o expoente: ");
scanf("%d", &e);
res = potencia(b, e);
printf("%d elevado %d eh igual a %d\n", b, e, res);
return 0;
}
int potencia(int base, int expoente){
int tmp, i;
tmp = 1; // atribui o primeiro valor para tmp
while(i < expoente){
tmp *= base;
i++;
}
return tmp;
}