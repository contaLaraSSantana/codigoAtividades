#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float numero;
	
	cout <<"Informe seu número:";
	cin >> numero;
	
	if(numero< 0){
		cout << "Seu número é negativo";
	}else if(numero > 0){
		cout << "Seu número é positivo";
	}else if (numero== 0){
		cout<<"Seu número é neutro";
	}

}
	
