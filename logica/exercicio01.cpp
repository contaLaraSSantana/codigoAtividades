#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
    float idade;
    
    cout <<"Informe sua idade:";
    cin >> idade;
    
    if(idade> 16){
		cout << "Voc� ainda n�o pode votar";
	}else if(idade>= 16){
		cout<<"Voc� j� pode votar";
	}
}

    

