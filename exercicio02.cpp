#include <iostream>
/*Questão 02 - Lista de Questões - Solução */
using namespace std;

int num, numPar = 0, contPar = 0, numImpar = 0, contImpar = 0;


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	do{
		cin >> num;
		if(((num % 2) == 0) && (num > 0)){
			numPar = numPar + num;
			contPar++;
		}else if(((num % 2) != 0) && (num > 0)){
			numImpar = numImpar + num;
			contImpar++;
		}
		
	}while(num>0);
	
	cout << "i) A soma dos números pares = " << numPar << ". ii) A média dos números pares = " << numPar/contPar << ".\n";
	cout << "i) A soma dos números ímpares = " << numImpar << ". ii) A média dos números ímpares = " << numImpar/contImpar << ".\n";
	
	return 0;
}