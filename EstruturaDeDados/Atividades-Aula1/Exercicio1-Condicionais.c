//
//  Exercicio1.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

#include <stdio.h>
#include <math.h>


void calculaIMC(float altura, float peso){
    
    double imc = peso/pow(altura, 2);
    
    if (18.5 > imc < 24.99) {
        printf("Seu IMC é: %f",imc);
        printf("Peso Normal");
    }else if(25 > imc < 29.99) {
        printf("Seu IMC é: %f",imc);
        printf("Acima do peso");
    }else if(30 > imc < 34.99) {
        printf("Seu IMC é: %f",imc);
        printf("Obesidade 1");
    }
    
}



int main(int argc, const char * argv[]) {
    
    float altura,peso;
    printf("Informe a sua peso: \n");
    scanf("%f",&peso);
    
    printf("Informe a sua altura: \n");
    scanf("%f",&altura);
    
    calculaIMC(altura, peso);
}
