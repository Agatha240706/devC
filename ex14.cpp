#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float lado, resultado;
	
	cout << "Informe o lado";
	cin >> lado;
	
	resultado = (lado*lado);
	cout << "A área é: " << resultado;
	
}
	
