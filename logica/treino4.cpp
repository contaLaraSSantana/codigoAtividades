#include <iostream>
#include <stdlib.h>    
#include <time.h>       

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int nArvore, esconde, tentativas, chute;
	bool mentiroso = false, ganhou = false;
	string nivel;
	
	srand (time(NULL));
	
	cout <<"Informe a quantidade de árvores: ";
	cin>> nArvore;
	
	esconde = rand() % nArvore + 0;
	
	system("cls");
	
	while(mentiroso == false){
		cout << "Qual nivel você quer jogar? " << endl;
		cout << "F - fácil" << endl;
		cout << "M- médio" << endl;
		cout << "D- difícil" << endl;
		cout << "R: ";
		cin >> nivel;	
		if (nivel == "F" or nivel == "M" or nivel == "D"){
			mentiroso = true;
		}else {
			mentiroso = false;
			system("cls");
		}
	}
	
	if (nivel == "F"){
		tentativas = 15;
	}else if (nivel == "M"){
		tentativas = 10;
	}else {
		tentativas = 5;
	}
	
	for (int i = 0; i < tentativas; i++){
		cout << "Você tem " << i +1 << " de " << tentativas << " tentativas."<< endl;
		
		cout << "Chute um número: ";
		cin >> chute;
		 
		if (chute > esconde){
			cout << "Está mais a direita";
			cout << "\n";
		}else if (chute < esconde){
			cout << "Está mais a esquerda";
			cout << "\n";
		}else if (chute == esconde){
			ganhou = true;
			break;
		}	
		system("pause");
		system ("cls");
	}
	
	if (ganhou == true){
		cout << "Você venceu";
	}else {
		cout << "Você perdeu";
	}
}

