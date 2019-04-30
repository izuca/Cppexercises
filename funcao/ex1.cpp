#include <bits/stdc++.h>

using namespace std; 
double le_numero()
{
	double n;
	cin >> n;
	return n;
}
int main ()
{
	int funcao;
	double media = 0,numero;
	
	funcao = le_numero();
	
	for(int i = 0; i < funcao; i++)
	{
		cin >>	numero;
		media += numero;
	}
	
	cout << media/funcao << endl;

	return 0;
}
