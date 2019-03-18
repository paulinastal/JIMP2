#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct ocena 
{ 
    int x;
    ocena *nastepna;    
    ocena();            
};

ocena::ocena() {
    nastepna = 0;       
}

struct lista 
{
    ocena *pierwsza;  
    void dodaj_ocene (int x);
    void usun_ocene (int x);
    void wyswietl_liste ();
    lista();
};

lista::lista() 
{
    pierwsza = 0;
}

void lista::wyswietl_liste()
{
    
    ocena *temp = pierwsza;

    while (temp)
    {
        cout << "ocena: " << temp->x << endl;
        temp=temp->nastepna;
    }
}

void lista::dodaj_ocene(int x)
{
    ocena *nowa = new ocena;    

    nowa->x = x;

    if (pierwsza==0) 
    {
        pierwsza = nowa;
    }

    else
    {
        
        ocena *temp = pierwsza;

        while (temp->nastepna)
        {
            temp = temp->nastepna;
        }

        temp->nastepna = nowa;  
        nowa->nastepna = 0;     
    }
}


int main()
{
	int n,nowa;
    lista *baza = new lista;    
	cout << "ile ocen chcesz podac?: " << endl;
	cin >> n;
	for(int i=1;i<=n;++i)
	{
		cout << "podaj ocene: " << endl;
		cin >>nowa;
    	baza->dodaj_ocene(nowa);
	}

    baza->wyswietl_liste();

    delete (baza);

	system("pause >nul");

    return 0;
}
