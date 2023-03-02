#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	bool mentiroso = false;
	int adc,exb,excl,sair,op;
	
	do{
		cout<< "1-Adicionar item\n";
		cout<< "2-Exibir item item\n";
		cout<< "3-Excluir item\n";
		cout<< "4-Sair\n";
		cout<< "R:";
		cin >> op;
		
		switch(op){
				case 1:cout<< "Adicionar item";
			break;
				case 2:cout<< "Exibir item";
			break;
				case 3:cout<< "Excluir item";
			break;
				case 4:cout<< "Sair";
			break;
			
			default: cout <<"item inexistente";
		}
	}while (op != 4);
		
		
	}
	

