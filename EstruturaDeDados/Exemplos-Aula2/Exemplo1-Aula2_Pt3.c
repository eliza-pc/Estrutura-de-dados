//
//  Exemplo1-Aula2_Pt3.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

#include <stdio.h>

// Definição de ponteiros que receberão os valores
int troca(int *a, int *b){
    
    int x;
    
    x = *a;
    *a = *b;
    *b = x;
    
    return (0);
}

int main(){
    
    int n,k;
    // Entrada de dados
    printf("\n\nDigite dois valores inteiros\n");
    scanf("%d %d",&n,&k);
    printf("Antes da troca n=%d e k=%d\n",n,k);
    troca(&n,&k);
    printf("Depois da troca n=%d e k=%d \n",n,k);
    return(0);

}
