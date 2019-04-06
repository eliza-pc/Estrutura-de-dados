//
//  Atividade5.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 06/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//


//5. Desenvolva um algoritmo em que no bloco principal MAIN, demonstre através de chamadas e funções, as mensagens em tela referente à cada operação matemática que o usuário escolher (adição, subtração etc). Ou seja, serão 4 funções.:

#include <stdio.h>

int main(){
    
    int opcao;
    
    
    printf("Escolha alguma das opcoes abaixo: \n");
    printf("[1]Adicão [2]Subtracao [3]Multiplicacao [4]Divisao\n");
    printf("Digite o numero referente a opcao escolhida: ");
    scanf("%d",&opcao);
    
    switch (opcao) {
        case 1:
            printf("Voce escolheu Adicao!\n");
            break;
        
        case 2:
            printf("Voce escolheu Subtracao!\n");
            break;
        
        case 3:
            printf("Voce escolheu Multiplicacao!\n");
            break;
        
        case 4:
            printf("Voce escolheu Divisao!\n");
            break;
        default:
            break;
    }
  
}
