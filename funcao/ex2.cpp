#include <bits/stdc++.h>

using namespace std;
void classificacao(int conteudo, int dureza, int resistencia)
{
	if (conteudo < 7 && dureza > 50 && resistencia > 80000)
		cout << "ACO DE GRAU = " << 10 << endl;
	else if (conteudo < 7 && dureza > 50)
		cout << "ACO DE GRAU = " << 9 << endl;
	else if (conteudo < 7 )
		cout << "ACO DE GRAU = " << 8 << endl;
	else
		cout << "ACO DE GRAU = " << 7 << endl;	
	
}


int main ()
{
	int conteudo,dureza,resistencia;
	
	cin >> conteudo >> dureza >> resistencia;
	
	classificacao(conteudo,dureza,resistencia);
	
	return 0;
}
