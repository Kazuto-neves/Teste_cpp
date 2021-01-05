#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){
	cout << "Programa de calculos de juros" << endl;
	float C,i,t;
	cout << "Digite o valor inicial da transacao:R$ ";
	cin >> C;
	cout << "Digite a taxa de juros: ";
	cin >> i;
	cout << "Digite o periodo da transacao: ";
	cin >> t;
	system("pause");
	cout << "Digite 1 para Juros Sinples \n ou 2 para juros compostos: ";
	int CB;
	cin >> CB;
	if (CB == 1){
		cout << "Juros Simples" << endl << endl;
		cout << "Formula de juros Simples: J="<< C <<"*"<< i <<"*"<< t << endl << endl;
		float J=(C*(i/100)*t);
		cout <<"seus juros sao de:R$ "<< J << endl << endl;
		cout <<" Se voce desejar fazer o montante\n digite 1 se nao digite 2: ";
		int m;
		cin >> m;
		if (m == 1){
			cout <<"Formula do montante: M="<< C << "+" << J << endl << endl;
			float M=(C+J);
			cout <<"seu montante e de:R$ "<< M << endl;
			system("pause");
			return 0;
		}else{
            system("pause");
            return 0;
		}
	}else{
		cout << endl << "Juros Compostos" << endl;
		cout << "Formula de juros Compostos: M=" << C << "(1+" << i << ")^" << t << endl << endl;
		float M=(C*pow((1+i),t));
		cout << "seus Juros sao de:R$ " << M << endl;
		system("pause");
        return 0;
	}
	

}
