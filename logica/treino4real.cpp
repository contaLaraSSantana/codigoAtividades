#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	int nHerois = 10, repita;
	float poderes, habilidade;
	bool pass = false;
	
	for( i=0; i<=nHerois; i++){
		ph = 0;
		cout << "Digite a pontua��o de habilidades de combate do her�i "<<i+1<<endl;
		cin >> to[i];
		cout << "Digite a pontua��o de poderes especiais do her�i "<<i+1<<endl; 
		cin >> ph;
		to[i] = to[i] + ph;
		
		cout << "Voc� que adicionar um novo her�i?"<<endl;
		cout << "1- sim"<<endl;
		cout << "2- nao";
		cin >> repita;
		
		if (repita == 2){
			break;
		}
	}


	
	}
	
	
	cout << " esses s�o os 3 her�is mais poderosos" << endl << endl;
	
	
	cout << " H�roi " << h1 << " pontua��o de: " << so[0] << endl;
	cout << " H�roi " << h2 << " pontua��o de: " << so[1] << endl;
	cout << " H�roi " << h3 << " pontua��o de: " << so[2] << endl;	
	
	
