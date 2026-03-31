

/* Sistema de Login Simples
Leia usuário e senha:
Usuário correto: admin
Senha correta: 1234
Informe se o login foi bem-sucedido ou não. */

#include <stdio.h>
int main() {
	char usuario, senha, admin;
	
	printf("digite seu usuario: ");
	scanf("%c", &usuario);
	
	printf("\n digite sua senha: ");
	scanf("%c", &senha);
	
	if(usuario == admin){
	printf("\n usuario correto.");
	} else {
	    printf("\n usuario incorreto");
	}
	
	if(senha == 1234){
	    printf("\n senha correta.");
	} else {
	    printf("\n senha incorreta.");
	}


}




