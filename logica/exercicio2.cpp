#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float number1, number2;
	
	cout <<"Informe o primeiro n�mero:";
	cin >> number1;
	
	cout <<"Informe o segundo n�mero:";
	cin >> number2;
	
	if(number1< number2){
		cout << "O n�mero 2 � maior";
	}else if (number1> number2){
		cout<<"O n�mero 1 � maior";
	}
}



