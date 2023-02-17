#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	const float pi = 3.14;
	float raio, resultado;
	
	cout<< "Informe o raio: ";
	cin>>raio;
	
	resultado = (pi*(raio*raio));
	cout<< "a área é "<< resultado;
}
