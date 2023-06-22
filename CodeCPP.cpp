#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
using namespace std; 

int main()
{
	cout << "Ola mundo!" << endl;
 
int idade;
double salario, altura;
char genero;
string nome;
	
	idade = 20;
	salario = 1000.5;
	altura = 1.70;
	genero = 'M';
	nome = "João";
	
		cout << fixed << setprecision(2);
		cout << "IDADE = " << idade << endl;
		cout << "SALARIO = " << "R$" << salario << endl;
		cout << "ALTURA = " << altura << endl;
		cout << "GENERO = " << genero << endl;
		cout << "NOME = " << nome << endl;
 
double salario1, salario2;
string nome1, nome2;

	cout << "Nome da primeira pessoa: ";
		getline(cin, nome1);
	cout << "Salario da primeira pessoa: ";
		cin >> salario1;
 
	cout << "Nome da segunda pessoa: ";
	cin.ignore(INT_MAX, '\n');
		getline(cin, nome2);
	cout << "Salario da segunda pessoa: ";
		cin >> salario2;

	cout << fixed << setprecision(2);
	cout << "Nome 1: " << nome1 << endl;
	cout << "Salario 1: " << "R$" << salario1 << endl;
	cout << "Nome 2: " << nome2 << endl;
	cout << "Salario 2: " << "R$" << salario2 << endl;

 return 0;
} 
