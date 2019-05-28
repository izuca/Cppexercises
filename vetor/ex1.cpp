#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int vetor[10] , substituir[10];
	
	for(int i = 0; 10 > i; i++)
	{
		cin >> vetor[i];
		
		if(vetor[i] >= 0)
			substituir[i] = vetor[i];
		else
			substituir[i] = 1;
		cout << vetor[i] << " " << substituir[i] << endl;

	}

	return 0;
}
