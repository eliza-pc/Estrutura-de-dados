//
//  Atividade6.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 06/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

//6. Desenvolva um algoritimo que o usuário informe dois números e que através de chamada de funções seja retornado em tela o seguinte:
//O dobro destes números
//O quadrado destes números
//A divisão entre os números
//O resto da divisão entre os números
//E diga se :
//O resultado da soma entre os números foi uma resposta positiva ou se foi uma resposta negativa

#include <stdio.h>

void fazTudo(int a, int b){
    
    printf("O dobro do primeiro numero informado e: %d\n", a*2);
    printf("O dobro do segundo numero informado e: %d\n", b*2);
    
    printf("O Quadrado do primeiro numero informado e: %d\n", a*a);
    printf("O Quadrado do segundo numero informado e: %d\n", b*b);
    
    printf("A divisao entre os numeros informados e: %d\n", a/b);
    
    printf("O resto da divisao entre os numeros informados e: %d\n", a%b);
    
}

int main(){
    
    int a,b;
    int soma;
    
    printf("Informe o primeiro numero: ");
    scanf("%d",&a);
    
    printf("Informe o segundo numero: ");
    scanf("%d",&b);
    
    fazTudo(a,b);
    
    soma = a+b;
    
    if (soma % 2 == 0){
        printf("POSITIVO!\n");
    }else{
        printf("NEGATIVO!\n");
    }
}
