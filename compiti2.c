#include<stdio.h>
main()
{
    char numero=' ';
    printf("Inserire un numero: ");
    scanf("%c", &numero);
    
    while(numero!='1' && numero!='2' && numero!='3' && numero!='4' && numero!='5' && numero!='6' && numero!='7')
    {
        printf("\n Reinserire il numero: ");
        scanf("%c", &numero);
    }

    if(numero=='1')
    { 
        printf("Lunedì ");
    } 
    if(numero=='2')
    {
        printf("Martedì ");
    }
    if(numero=='3')
    {
        printf("Mercoledì ");
    }
    if(numero=='4')
    {
        printf("Giovedì ");
    }
    if(numero=='5')
    {
        printf("Venerdì ");
    }
    if(numero=='6')
    {
        printf("Sabato ");
    }
    if(numero=='7')
    {
        printf("Domenica ");
    }
    
    
}