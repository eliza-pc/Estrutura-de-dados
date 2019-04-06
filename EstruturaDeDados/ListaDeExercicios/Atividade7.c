//
//  Atividade7.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

//Desenvolva um algoritmo em C que quando o usuário informar sua idade, seu nome e seu no de titulo em tela, se sua idade for maior que 18 e tem idade abaixo de 70 anos, informe mensagem que o usuário é obrigatório votação, e SE o usuário informar idade menor que for igual a 16 e maior que 70, informe em tela que o voto é facultativo.

#include <stdio.h>



int main(){
    
    int idade, titulo;
    char nome;
    
    printf("Informe seu nome: ");
    gets(nome);
    
    printf("Informe sua idade: ");
    scanf("%d",&titulo);
    
    printf("Informe o numero do seu Titulo: ");
    scanf("%d",&titulo);
    
    if (18 >= idade <= 70){
        
        printf("Voto obrigatório!!!");

    }else if (16 <= idade >= 70){
        printf("Voto facultativo!");
    }
    
}
