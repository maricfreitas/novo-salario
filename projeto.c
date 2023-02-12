#include<stdio.h>

float sal,sal_novo;

int main(){
    
    printf("Qual o salario atual?\n");
    scanf("%f",&sal);

    sal_novo=sal+(sal*0.25);

    printf("Seu novo salario e R$%2.f",sal_novo);

    return 0;
}