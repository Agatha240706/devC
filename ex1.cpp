#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nascimento,resultado;
	const int hoje = 2023;
	
	cout<< "Informe seu nascimento:";
	cin>> nascimento;
	
	resultado = (hoje-nascimento);
	
	if (resultado >=16){
		cout << "Voc� pode acessar o site, pois voc� tem: " <<resultado<< "anos";
	}else{
		cout << "Voc� n�o pode votar";
	}
}
