//#include = incluir uma biblioteca
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  // Declaração de variáveis
    int idade, ano_nasc;
    string nome;

  // c out << - console output
  // c in >> - console input
  //" " - string
  //"\n" - pular uma linha
    cout << "Ola mundo cruel!\n";
    
	cout << "Qual o seu nome? ";
    cin >> nome;
    
	cout << "Qual a sua idade? ";
    cin >> idade;
	ano_nasc = 2023 - idade;

    cout << nome << ", sua idade e " << idade << " anos\nVoce nasceu em " << ano_nasc << "\n";

	system("pause");
	return 0;
}
