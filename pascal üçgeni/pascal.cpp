#include <iostream>


using namespace std;
int main() {
	// olusturulacak matris boyutu alinir
	int gir;
	cin >> gir;
	int matris[gir][gir];	//alınan deger kadar bir matris olusturulur
	
	
	for(int i=0; i<=gir-1; i++)	//dongu ile satir ve sutunlar hesaplanir
	{
		for(int j=0; j<=i; j++)
		{
			if(i-1<0 || j-1 <0 || i == j || j==0)	//istisna durumlar kontrol edilir
			{
				matris[i][j] = 1;
			}
			else
			{
				matris[i][j] = matris[i-1][j] + matris[i-1][j-1];	//normal durumlarda hep bir ustu ile toplanir 
			}
			cout << matris[i][j] << " ";	//yazdirilir
		}
		cout << "\n";	
	}
	
	cin.get();
	return 0;
}
