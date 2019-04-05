//
//  Exemplo2-Aula2_Pt3.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

#include <stdio.h>


int troca (int *a, int *b)
/*Definicao de ponteiros que receberao os valores dos vetores*/
{
    int x;
    if (*a > *b){
        x = *a;
        *a = *b;
        *b = x;
    }
    
     return 0;
}

int main(){
    
    int vetor[9],i,j;
    char tecla;
    
    printf("\n\nOrdenacao de vetor\n\n");
  
    for (i=0;i<=9;i++){
        
        printf("Entro com o %do. elemento: ",i+1);
        scanf("%d",&vetor[i]);
    }
}
