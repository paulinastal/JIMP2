//dzia³a bez spacji
//na razie tylko do szyfrowania, brak odszyfrowania

#include <iostream>
#include <sstream>
#include <string>

using namespace std;
void PolybiusCrypt(string slowo);

int main() 
{
	string slowo1;
	cout << "Podaj slowo: ";
	cin >> slowo1;
	PolybiusCrypt(slowo1);

	return 0;

}
	
void PolybiusCrypt(string slowo)
{	
	string szyfr;
	
	char tab[5][5] = {{'a', 'b', 'c', 'd', 'e'},
					  {'f', 'g', 'h', 'i', 'k'},
					  {'l', 'm', 'n', 'o', 'p'},
					  {'q', 'r', 's', 't', 'u'},
					  {'v', 'w', 'x', 'y', 'z'}};

	char tab2[5][5] = {{'A', 'B', 'C', 'D', 'E'},
					   {'F', 'G', 'H', 'I', 'K'},
					   {'L', 'M', 'N', 'O', 'P'},
					   {'Q', 'R', 'S', 'T', 'U'},
					   {'V', 'W', 'X', 'Y', 'Z'}};

	for (int i = 0; i < slowo.length(); i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			for (int k = 0; k < 5; k++) 
			{
				if (tab[j][k] == slowo[i] || tab2[j][k] == slowo[i]) 
				{
					char str[100];
					sprintf(str, "%d%d ", j + 1, k + 1);
					szyfr.append(str);
				}
			}
		}

	}

	cout << endl << "zaszyfrowana wiadomosc: " << szyfr;
	
}	
