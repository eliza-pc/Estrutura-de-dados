//
//  Atividade2.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 06/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

//2. Desenvolva um algoritmo em C que receba 2 (dois) números inteiros (um positivo outro negativo) fornecidos pelo usuário e através de 3 (três) mensagens em tela seja exibido o retorno de três funções onde : a primeira retorne a informação do dobro destes números e a segunda, exiba o resultado da multiplicação entre estes números, e a terceira seja verificado e depois retornado em tela se o resultado da multiplicação retornada pela função anterior será positivo (quando o resultado >1) ou negativo (quando o resultado <1). Após compilar e executar tudo ok , transcreva o algoritmo para o espaço abaixo.

#include <stdio.h>

void dobro(int positivo,int negativo){
    
    printf("O dobro do numero positivo e: %d\n", positivo*2);
    printf("O dobro do numero negativo e: %d\n", negativo*2);
    
}

void multiplicacao(int positivo,int negativo){
    
    int result = positivo*negativo;
    
    printf("A multiplicacao entre os numeros informados e: %d\n", result);
    
    if (result > 0){
        printf("O resultado da multiplicacao e um numero POSITIVO!\n");
    }else{
         printf("O resultado da multiplicacao e um numero NEGATIVO!\n");
    }

}


int main(){
    
    int positivo,negativo;
    
    printf("Informe um numero positivo: ");
    scanf("%d",&positivo);
    
    printf("Informe um numero negativo: ");
    scanf("%d",&negativo);
    
    
    if ((positivo%2 == 0) && (negativo%2 != 0)){
        
        dobro(positivo, negativo);
        multiplicacao(positivo, negativo);
        
    }else{
        
        printf("Numero invalido, por favor informe um numero postivo: \n");
        scanf("%d",&positivo);
        
        printf("Numero invalido, por favor informe um numero negativo: \n");
        scanf("%d",&negativo);
        
    }
    
    
    
}
