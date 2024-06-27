#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<locale.h>

int main(){
setlocale (LC_ALL, "Portuguese");

    struct tm * local; // Ponteiro para struct que armazena data e hora.
        time_t t; // Variável do tipo time_t para armazenar o tempo.
        t= time (NULL);
        local=localtime(&t); // Tempo local.

    int dia, mes, ano1, ano2, hora, minuto;
    system("cls");
    
    // Variáveis de tempo.
        dia = local->tm_mday;
        mes = local->tm_mon + 1;
        ano1 = local->tm_year;
        ano2 = ano1 + 1900;
        hora = local->tm_hour;
        minuto = local->tm_min;

    if (mes == 1)
    printf("Data atual: %d / janeiro / %d\n", dia, ano2);
    else if (mes == 2)
        printf("Data atual: %d / fevereiro / %d\n", dia, ano2);
        else if (mes == 3)
            printf("Data atual: %d / marco / %d\n", dia, ano2);
            else if (mes == 4)
                printf("Data atual: %d / abril / %d\n", dia, ano2);
                else if (mes == 5)
                    printf("Data atual: %d / maio / %d\n", dia, ano2);
                    else if (mes == 6)
                        printf("Data atual: %d / junho / %d\n", dia, ano2);
                        else if (mes == 7)
                            printf("Data atual: %d / julho / %d\n", dia, ano2);
                            else if (mes == 8)
                                printf("Data atual: %d / agosto / %d\n", dia, ano2);
                                else if (mes == 9)
                                    printf("Data atual: %d / setembro / %d\n", dia, ano2);
                                    else if (mes == 10)
                                        printf("Data atual: %d / outubro / %d\n", dia, ano2);
                                        else if (mes == 11)
                                            printf("Data atual: %d / novembro / %d\n", dia, ano2);
                                            else if (mes == 12)
                                                printf("Data atual: %d / dezembro / %d\n", dia, ano2);
                                                printf("Hora atual: %d:%d", hora, minuto);
    
    getch();
    system("pause");
    return 0;
}