/*
Crie um programa que implementa a função CalculaModa. Esta função
recebe um vetor de caracteres de tamanho 20 e retorna qual é o elemento
mais frequente. Para testar a função leia um vetor de caracteres de 20
elementos na função main, invoque a função e exiba qual é o elemento mais
frequente neste vetor e a quantidade de vezes que ele aparece
*/
 
#include <stdio.h>
#include <string.h>
 
 
void CalculaModa(char palavra[])
{
    //b a n a n a
    char caracMaisFreq;
    int cont = 0, max = 0, i, j;
    for(i = 0; i < strlen(palavra); i++)
    {
        cont = 0;
        for(j = 0; j < strlen(palavra); j++)
        {
            if(palavra[i] == palavra[j])
            {
                cont ++;
            }
        }
        if(max < cont)
        {
            max = cont;
            caracMaisFreq = palavra[i];
        }
    }
 
    printf("elemento mais frequente: %c\nvezes que apareceu: %d\n", caracMaisFreq, max);
}
 
 
int main()
{
    char palavra[20];
 
 
    scanf("%[^\n]s",&palavra);
    getchar();
 
 
    CalculaModa(palavra);
 
 
}
