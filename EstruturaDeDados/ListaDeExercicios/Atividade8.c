//
//  Atividade8.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//


//Escrever no espaço o algoritmo para ler e imprimir dois números inteiros positivos. Através de funções, demonstre:
//- Se o primeiro numero for positivo, imprima o seu quadrado;
//- Se o segundo número for maior que 10 e menor que 100, imprimir a mensagem: “Número está entre 10 e 100 – intervalo permitido”;
//- Se o segundo número for menor que o primeiro, calcular e imprimir a diferença (um menos o outro) entre eles, caso contrário, imprimir o primeiro número adicionado de 1 .


#include <stdio.h>


void quadrado(int numero){
    
    printf("O quadrado do primeiro numero é: %d\n",numero*numero);
    
}

void diferenca(int a, int b){
    
    printf("A diferenca entre os numeros e: %d\n", a-b);
    
}

int main(){
    
    int a,b;
    
    printf("Informe o primeiro numero: ");
    scanf("%d",&a);
    
    printf("Informe o segundo numero: ");
    scanf("%d",&b);
    
    if (a % 2 == 0){
        
        quadrado(a);
        
    }
    
    if(10 > b < 100){
        
       printf("O número está entre 10 e 100 – intervalo permitido\n");
        
    }
    
    if(b < a){
        
        diferenca(a,b);
        
        
    }else{
        
        printf("%d",a+1);
    }
    
    
}
