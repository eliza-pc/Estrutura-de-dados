//
//  Exemplo1-Aula2.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

#include <stdio.h>

int fatorial(int n){
    int i, fat; fat=1;
    for (i=1;i<=n;i++){
        fat*=i;
        /*fat = fat * i; */
        printf("\nFatorial de %d = %d\n",n,fat);
    }
    
    return 0;
    
}


int  main(){
    
    double limite;
    
    printf("\n\nCalculo de fatorial\n");
    printf("\nQual fatorial: ");
    scanf("%f",&limite);
    
    fatorial(limite);
    printf("Tecle <ENTER> para finalizar");
    
    return 0;
    
}
