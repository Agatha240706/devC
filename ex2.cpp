#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	cout<< "Digite um n�mero: ";
	cin>> n1;
	
	cout<< "Digite outro n�mero: ";
	cin>> n2;
	
	if (n1>n2){
		cout << " n1 � maior que n2 ";
	} 
	
	if(n1<n2){
		cout << "n2 � maior que n1";
	}
	
	if (n1==n2){
		cout << "os dois s�o iguais";
	}
	
}
