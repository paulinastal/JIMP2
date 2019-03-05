#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
        char napis[1000], odwrocony[1000];
        int i;
        
        cout << "Podaj tekst, ktory ma zostac odwrocony: " << endl;
        cin >> napis;
        
        int dlugosc = strlen(napis);
        
        for(int i=0; i<dlugosc; i++)
		{
            odwrocony[i] = napis[dlugosc-i-1];
        }
                        
        cout << "Odwrocony tekst:" << endl << odwrocony << endl;
        
        return 0;
}
