#include<bits/stdc++.h>

using namespace std;

int sorteio(int x)
{
	int ingresso;
	
	for (int j = 1; j <= x ;j++)
	{
		cin >> ingresso;
		if(ingresso == j)
			cout <<  ingresso << endl;
		
	}
	
}

int main ()
{
	int x,xablau;

	

	for(int i = 1 ;2 != 0 ;i++)
	{
		cin >> x;
		xablau = x;
		if(x== 0 )
			break;
		cout << "Teste " << i << endl;	
		//cout << sorteio(x) << endl;
		sorteio(xablau);
		
	}

	return 0;
}
