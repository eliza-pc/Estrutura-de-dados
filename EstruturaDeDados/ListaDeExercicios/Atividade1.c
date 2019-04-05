//
//  Atividade1.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

#include <stdio.h>

void parOuImpar(int numero){
    
    if (numero == 0){
        printf("VOCE PRECISA INFORMAR UMA DAS OPÇÕES!");
    }
    
    if (numero % 2 == 0){
        printf("VERDADEIRO!");
    }else{
        printf("FALSO!");
    }
    
    
}


int main(){
    
    int numero;
    
    printf("Informe um numero positivo ou negativo: ");
    scanf("%d",&numero);
    
    parOuImpar(numero);
    
    
}
