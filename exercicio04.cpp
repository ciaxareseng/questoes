#include <iostream>

/*Questão 04 - Lista de Questões - Solução */
using namespace std;
/*Variáveis para receber os parâmetros - letras*/
char letra01, letra02;
/* Interface */
void verifica_se_letra_e_maiuscula_ou_minuscula_e_retorna_convertido(char valor);


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	cin >> letra01 >> letra02;
	verifica_se_letra_e_maiuscula_ou_minuscula_e_retorna_convertido(letra01);
	verifica_se_letra_e_maiuscula_ou_minuscula_e_retorna_convertido(letra02);
	return 0;
}

void verifica_se_letra_e_maiuscula_ou_minuscula_e_retorna_convertido(char valor){
	
	int variavel = int(valor);
	
	if((variavel >= 97) && (variavel <= 122)){
		int auxMin = variavel - 32;
		cout << "A letra digitada " << char(variavel) 
		<< " é minúscula e sua correspondente maíuscula é " << char(auxMin) << ".\n";
		
	}else if((variavel >= 65) && (variavel <= 90)){
		int auxMai = variavel + 32;
		cout << "A letra digitada " << char(variavel) 
		<< " é maiúscula e sua correspondente minúscula é " << char(auxMai) << ".\n";
		
	}
	


}
