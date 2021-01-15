#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 80

int main (){
    char s[MAX];
    int i, conta;

    conta = 0;

    printf("Inserire un nome: ");
    gets(s);

    for(i = 0; i < strlen(s); i++){
        if(s[i] == 'a'){
            conta = conta + 1;
        }
    }

    printf("Ci sono %d a minuscole", conta);
}
