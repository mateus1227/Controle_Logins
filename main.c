#include "logins.h"


int main(int argc, char** argv) {
   float hora, horalog;
        controlelista login;
        login = criar();
    controlelogins usuario;
    int op;
    
    while(login.ultimo<MAXTAM){
    printf("\n\tMenu Principal:\n\n1- Efetuar login\n\n2-Visualizar todos os logins\n\n3-Imprimir quem fez login apos tal hora\n\n4-Quantidade total de logins\n\n5-Imprimir quem fez logout apos tal hora\n\n6-Imprimir quantidade de logins feito por alguem\n\n7-Efetuar logout\n\nSua opcao: ");
    scanf("%d", &op);
    
    switch (op){
        
        case 1:
        
    printf("\nDigite o nome do usuário: ");
    scanf("%s", &usuario.nome);
    printf("\nDigite a hora do login: ");
    scanf("%f", &usuario.hlogin);
    login = realizarlogin(login, usuario);
    
    
    break;
    
        case 2:
            imprimir(login); 
            
            break;
            
        case 3:
            
            printf("\nDigite ate que horario de login voce deseseja pesquisar: ");
            scanf("%f", &hora);
            imprimirapostalhora(login);
            break;
            
        case 4:
            imprimirtotallog(login);
            break;
        case 5:
            
            printf("\nDigite ate que horario de logout voce deseseja pesquisar: ");
            scanf("%f", &horalog);
            imprimirlogoutapostalhora(login);
            break;
            
        case 6:
            
            printf("\nDigite o nome a ser procurado: ");
            scanf("%s", &usuario.nome);
            
            quantidadedeacessos(login, usuario);   
            
            break;
        case 7:
            printf("\nDigite a hora do logout: ");
            scanf("%f", &usuario.hlogout);
            break;
        
    }}
    return (EXIT_SUCCESS);
}

