#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Saída: ");

    //transforma cada caractere em um vetor
    for (int i = 0; i < strlen(s); i++)
    {
        //transforma cada vetor em um int number
        printf("%i ", s[i]);
    }
    printf("\n");
}
