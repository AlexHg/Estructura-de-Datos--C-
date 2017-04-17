#include <iostream>
#include <string>

using namespace std;
char a = 97;
char abc(int cod, char arr[][26]){
	for (int i = 0; i < 26; i++)
	{
		arr[0][i] = a + i;
	}
	for (int i = 0; i < 26; i++)
	{
		arr[1][i] = arr[0][cod++];
		if(arr[1][i] == arr[0][25]){
			cod = 0;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		cout << endl;
		for (int j = 0; j < 26; j++)
		{
			cout << arr[i][j];
		}
	}
	return arr[1][26];
}
char cifrar(char abcedario, string & input){
	string output;
	for(int i=0; i <= input.lenght(); i++){
		for(j=0;)
	}
	return output;
}

int main()
{
	char arr[1][26];
	int cod;
	cout<<"Ingrese el numero de codificacion: ";
	cin>>cod; cout<<endl;


	string input; 
	cout<<"Ingrese la oracion a codificar: ";
	cin>>input; cout<<endl;

	char abcedario = abc(cod, arr);
	char output = cifrar(abcedario, input);

	return 0;
}