//
//  Atividade2-Aula2.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

#include <stdio.h>

void restoDaDivisão(int a, int b){
    
    double calculaRestoDivisão = a/b;
    printf("O resto da divisão entre 'a' e 'b' é: %f", calculaRestoDivisão);
    
}

int main(){
    
    int a,b;
    
    printf("Informe um numero inteiro para 'a': ");
    scanf("%d",&a);
    
    printf("Informe um numero inteiro para 'b': ");
    scanf("%d",&b);
    
    restoDaDivisão(a,b);
    
}
