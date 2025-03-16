#include <stdio.h>
int main() {
    
char  estado1[20], estado2[20];
char  codigo1[4], codigo2[4];
char  cidade1[20], cidade2[20];
int   populacao1, populacao2;
int   ponto_turistico1, ponto_turistico2;
float Area1, Area2;
float PIB1, PIB2;


printf("Digite o estado: "); // O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%s", &estado1); // aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 


printf("Digite o código da carta: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%s", codigo1);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 



printf("Digite o nome da cidade: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%s", cidade1);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 



printf("Digite a população: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%d", &populacao1);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 



printf("Digite a área: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%f", &Area1);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 



printf("Digite o PIB: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%f", &PIB1);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 



printf("Digite o número de pontos turísticos: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%\nd", &ponto_turistico1);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado.



printf("--Próximos dados!--\n");// Próximos dados solicitados



printf("Digite o estado: "); // O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%s%*s",&estado2); /*Usando %*c no scanf (específico para caracteres): Se o problema é apenas com a leitura de um único caractere, você pode
 usar o especificador %*c para ler e descartar o caractere restante no buffer (geralmente o \n):
 
char carater;
scanf("%c%*c",&carater);

fiz a troca baseada no cometário do professor;
foi trocado o c de um único caractere por s de várias  strings */

printf("Digite o código da carta: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%s", &codigo2);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 



printf("Digite o nome da cidade: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%s", &cidade2);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 



printf("Digite a população: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%d", &populacao2);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 



printf("Digite a área: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%f", &Area2);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 



printf("Digite o PIB: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%f", &PIB2);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado. 



printf("Digite o número de pontos turísticos: ");// O programa vai imprimir uma mensagem sobre qual dado o usuário deve inserir;
scanf("%d", &ponto_turistico2);// aqui aparecerá um prompt onde o usuário deve inserir o dado solicitado.






    return 0;
}
