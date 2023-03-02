#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	int nHerois = 10, repita;
	float poderes, habilidade;
	bool pass = false;
	
	for( i=0; i<=nHerois; i++){
		ph = 0;
		cout << "Digite a pontuação de habilidades de combate do herói "<<i+1<<endl;
		cin >> to[i];
		cout << "Digite a pontuação de poderes especiais do herói "<<i+1<<endl; 
		cin >> ph;
		to[i] = to[i] + ph;
		
		cout << "Você que adicionar um novo herói?"<<endl;
		cout << "1- sim"<<endl;
		cout << "2- nao";
		cin >> repita;
		
		if (repita == 2){
			break;
		}
	}


	
	}
	
	
	cout << " esses são os 3 heróis mais poderosos" << endl << endl;
	
	
	cout << " Héroi " << h1 << " pontuação de: " << so[0] << endl;
	cout << " Héroi " << h2 << " pontuação de: " << so[1] << endl;
	cout << " Héroi " << h3 << " pontuação de: " << so[2] << endl;	
	
	
