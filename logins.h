#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTAM 100

typedef struct{
    char nome[40];
    float hlogin, hlogout;
}controlelogins;


typedef struct {
     int primeiro, ultimo;
    controlelogins logins[MAXTAM];
    
}controlelista;

controlelista criar (){
    controlelista aux;
    aux.primeiro =0;
    aux.ultimo= -1;
    return aux;
}
int listaVazia(controlelista aux){
    if(aux.ultimo == -1){
        return 1;
    }else{
        return 0;
    }
}

int listaCheia(controlelista aux){
    if(aux.ultimo == MAXTAM-1){
        return 1;
    }else{
        return 0;
    }
}
controlelista realizarlogin(controlelista aux, controlelogins auxx){
    if(listaCheia(aux)==0){
        aux.ultimo++;
        aux.logins[aux.ultimo] = auxx;
    }
    return aux;
}

void imprimir (controlelista aux){
    int i=0;
    for (i=aux.primeiro; i<=aux.ultimo; i++){
        printf("\n\nNome do usuario: %s", aux.logins[i].nome);
        
    }
    
}

void imprimirapostalhora (controlelista aux){
    float hora;
    int i=0;
    for(i=0; i<=aux.ultimo;i++){
        if(aux.logins[i].hlogin>=hora){
            printf("\nUsuario: %s", aux.logins[i].nome);
        }else
            printf("\n\nNinguem fez login apos a hora indicada.");
    }
    
}

void imprimirlogoutapostalhora (controlelista aux){
    int i=0;
    float horalog;
    for(i=0; i<=aux.ultimo;i++){
        if(aux.logins[i].hlogout<=horalog){
            printf("\nUsuario: %s, logou! ", aux.logins[i].nome);
        }else
            printf("\n\nNinguem fez logout apos a hora indicada.");
    }
    
}

void imprimirtotallog(controlelista aux){
    int i=0;
    int cont=0;
    for(i=0;i<=aux.ultimo;i++){
        aux.logins[i];
        cont++;
    }
    printf("\n\nTotal de LOG é igual = %d", cont);
} 

int pesquisar(controlelista aux,controlelogins nome){
    int posicao=0;
    int i=0;
    for(i=aux.primeiro; i<=aux.ultimo; i++){
        if(strcmp(aux.logins[i].nome,nome.nome)==0){
            posicao++;
            break;
        }
    }return posicao;
    
}

controlelista quantidadedeacessos(controlelista aux, controlelogins nome){
    int retornopesquisa = pesquisar(aux,nome);
    if(retornopesquisa==-1){
        printf("\nNome não encontrado!");
    }
    else{
        int i=0;
        
        for(i=retornopesquisa; i<=aux.ultimo;i++){
            aux.logins[i]=aux.logins[i+1];printf("%d", posicao);
        }
    }return aux;
}
