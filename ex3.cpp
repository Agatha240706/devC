#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,result,presenca;
	
	cout<< "Informe sua presen�a de 0 a 100: ";
	cin >> n1;
	
		if (presenca <= 25){
			
	       cout << "Informe a primeira nota:";
	       cin >> n1;
	       
	       cout << "Informe sua segunda nota:";
	       cin >> n2;
	       
	       result = (n1+n2) / 2;
	       
	       if (result >= 6){
	       	cout << "Voc� passou com a nota: " << result <<"parab�ns ";
		   }else{
		   	cout << "reprovou";
		   }
		}else {
			cout<< "reprovado por faltas";
		}
	
	
	    
	   
   
	
}
