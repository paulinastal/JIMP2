#include<iostream>
#include<string>

using namespace std;

class dziecko
{
	private:
		string _imie;
		string _nazwisko;
		int _wiek;
		string _szkola;
	
	public:
		dziecko();
		dziecko(string imie, string nazwisko, int wiek, string szkola);
		~dziecko();
		
	friend class rodzic;
}

class rodzic
{
	private:
		string _imie;
		string _nazwisko;
		int _wiek;
	
	public:
		rodzic();
		rodzic(string imie, string nazwisko, int wiek);
		~rodzic();
		void przepiszDoInnejSzkoly(dziecko &dziecko)
		{
			string nowa;
			cout << "podaj nowa szkole: " <<endl;
			cin >> dziecko._szkola;
		};	
}

dziecko::dziecko(string imie, string nazwisko, int wiek, string szkola)
{
	_imie = imie;
	_naziwsko = naziwkso;
	_wiek = wiek;
	_szkola = szkola;
}

rodzic:rodzic(string imie, string nazwisko, int wiek)
{
	_imie = imie;
	_nazwisko = nazwisko;
	_wiek = wiek;
}

dziecko:dziecko(){}
rodzic(){}

int main()
{
	
	return 0;
}
