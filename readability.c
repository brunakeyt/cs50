#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    int letras = 0;
    int palavras = 1;
    int frases = 0;
    // coleta cada caractere em um vetor s[i]
    string s = get_string("Insira seu texto: ");
    // verificação de caracteres do texto
    // enquanto i menor que caracteres contados da string s
    for (int i = 0, j = strlen(s); i < j; i++)
    {
        // verifica se o caractere é alguma letra maiuscula ou minuscula
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            letras++;
        }
        // verifica se o caractere é um espaço (acabou uma palavra)
        else if (s[i] == ' ')
        {
            palavras++;
        }
        // verifica se o caractere é algum tipo de pontuação, para contar as frases
        else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            frases++;
        }
    }
    // Calcula a quantidade de letras e frases para cada 100 palavras
    float medletra = ((float)letras / palavras) * 100;
    float medfrase = ((float)frases / palavras) * 100;
    // Coleman
    float resultado = ((0.0588 * medletra) - (0.296 * medfrase) - 15.8);
    int serie = (int)resultado;
    printf("\n\n");
    printf(" Série adequada para leitura: \n Escolaridade dos EUA. \n\n");
    if (serie < 0)
    {
        printf("Antes da Grade 1 \n");
    }
    else if (serie > 16)
    {
        printf("Grade 16+ \n");
    }
    else
    {
        printf("Grade %i \n", serie);
    }
}
