#include <stdio.h>// lib onde estao funçao printf, scanf, gets, strcmp
int main(){// loop principal 
     char frase[100];//palavra inserida
     char palavra[4]="tixe";//palavra para sair loop infinito
     int artel;// letra ao contrario
     int result;//resultado da comparaçao para sair
     while(1){//loop infinito
         int letra=0;//começar a contar letras do zero
         printf("\n\n");//espaço enter na consola
         printf("\ninsira frase\n");//oq aparece escrito na consola
         gets(frase);//palavra inserida
         while(frase[letra] != 0){//loop se letras em palavra not equal zero
             ++letra;//incrementa numero de letras
             artel=letra;//palavras ao contrario teem o mesmo numero de letras
            }
         printf("frase tem %d caracters\n", letra);//print numero d letras
         printf("frase ao contrario: ");//print normal
         //for(init;statment,update) .. porcada(algo; oque; faz)
         for(artel=letra-1; artel>=0; --artel){//matematica q reverte as letras
             printf("%c",frase[artel]);//print ao contrario
            }
         //result é a comparaçao entra frase inserida e palavra tixe
         result = strcmp(frase, palavra);//strcmp string compare
         if(result==0){// se for zero ou seja se palavra inserida == tixe
             printf("\n%s",artel);//print tixe = exit
             return 0;//exit program
            }
        }
    }
