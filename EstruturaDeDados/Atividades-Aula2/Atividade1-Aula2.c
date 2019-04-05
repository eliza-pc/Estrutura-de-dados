//
//  Atividade1-Aula2.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

#include <stdio.h>

void transformaSec(int valorSec){
    
    int valorMin1;
    int valorSecFinal;
    int valorHoraFinal;
    int valorMinFinal;
    
    valorMin1 = valorSec / 60;
    valorSecFinal = valorSec - (valorMin1*60);
    valorHoraFinal = valorMin1 / 60;
    valorMinFinal = valorMin1 - (valorHoraFinal*60) ;
    
    printf("%d Hora %d Min %d Sec",valorHoraFinal,valorMinFinal,valorSecFinal);
    
}


int main()
{
    
    int valorSec;
    
    printf("Informe o tempo em segundos que deseja tranformar: ");
    scanf("%d",&valorSec);
    
    
    transformaSec(valorSec);
    
}

