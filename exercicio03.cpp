#include <iostream>
/*Questão 03 - Lista de Questões - Solução */
using namespace std;

short int h, m, s;


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	cin >> h >> m >> s;
	while((h < 0) || (h >= 24)){
		cout << "Erro! Insira um valor válido para hora.\n";
		cin >> h;	
	}
	while((m < 0) || (m >= 60)){
		cout << "Erro! Insira um valor válido para os minutos.\n";
		cin >> m;	
	}
	while((s < 0) || (s >= 59)){
		cout << "Erro! Insira um valor válido para os segundos.\n";
		cin >> s;	
	}
	
	/* Primeiras 06 horas do dia - Vai de 00h até as 5h59min*/
	if(((h >= 0) and (h < 6))){
		cout << "Madrugada.\n";
	}else if(((h >= 6) and (h < 12))){
		cout << "Manhã.\n";
	}else if(((h >= 12) and (h < 18))){
		cout << "Tarde.\n"
	}else{
		cout << "Noite.\n";
	}
	return 0;
}