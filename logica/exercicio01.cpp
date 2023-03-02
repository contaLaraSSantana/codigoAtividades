#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
    float idade;
    
    cout <<"Informe sua idade:";
    cin >> idade;
    
    if(idade> 16){
		cout << "Você ainda não pode votar";
	}else if(idade>= 16){
		cout<<"Você já pode votar";
	}
}

    

