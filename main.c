#include <stdio.h>

int main() {
    char mensagem[100] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
     'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x','y', 'z',};
    char x,y;
    long i, qtdRot;
    qtdRot = 3;

    printf("Digite a palavra: ");
    scanf("%s", &mensagem);


    ////////////////////////////
    ///////CRIPTOGRAFANDO///////
    ////////////////////////////


    for(i = 0; mensagem[i] != '\0'; i++){
        x = mensagem[i];
        if(x >= 'a' && x <= 'z'){
            x = x + qtdRot;
            if(x > 'z'){
                x = x - 'z' + 'a'-1;
            }
            mensagem[i] = x;
        }
    }
    printf("\n\nMensagem Encriptada: %s\n", mensagem);


    ////////////////////////////
    /////DESCRIPTOGRAFANDO//////
    ////////////////////////////


    for(i = 0; mensagem[i] != '\0'; i++){
        x=mensagem[i];
        if(x >= 'a' && x <= 'z'){
            x = x - qtdRot;
            if(x < 'a'){
                x = x + 'z' - 'a' + 1;
            }
            mensagem[i] = x;
        }
        mensagem[i] = x;
    }
    printf("\n\nMensagem Descriptada: %s \n\n", mensagem);
    return  0;
}