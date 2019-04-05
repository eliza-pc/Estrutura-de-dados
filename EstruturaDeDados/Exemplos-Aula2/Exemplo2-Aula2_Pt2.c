//
//  Exemplo2-Aula2_Pt2.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

int soma_dobro(int a,int b)
{
    int soma;
    a=2*a;
    b=2*b;
    soma=a+b;
    
    return 0;
}
int main()
{
    int x,y,res;
    printf("Digite o primeiro número:");
    scanf("%d",&x);
    printf("Digite o segundo número:");
    scanf("%d",&y);
    
    res = soma_dobro(x,y);
    printf("\n A soma do dobro dos números eh:%d",res);
    
}
