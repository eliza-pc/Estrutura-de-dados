//
//  Exemplo2-Aula2.c
//  EstruturaDeDados
//
//  Created by Eliza Maria Porto de Carvalho on 05/04/19.
//  Copyright © 2019 Academy. All rights reserved.
//

int square(int x){
    
    printf("O quadrado é: %d",(x*x));
    return 0;
}

int main ()
{
    int num;
    printf ("Entre com um numero: "); scanf ("%d",&num);
    printf ("\n\n");
    square(num);
    return 0;
}
