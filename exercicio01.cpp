#include <iostream>
/*Questão 01 - Lista de Questões */
using namespace std;


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	for(int i = 32; i <=127; ++i){
		
		if(i < 100){
			
			cout << "0" << dec << i << " - " <<  hex << i << " - " << char(i) << "\n";
		}else{
			
			cout << dec << i << " - " << hex << i << " - " << char(i) << "\n";
		}
		
	}
	
	return 0;
}