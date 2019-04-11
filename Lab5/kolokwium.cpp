//aaa () konstruktor posiada ka¿da klasa jest odpowiedzialny za inicjalizacjê klasy, wype³nia pole pocz¹tkowymi wartoœciami
//~aaa() destruktor zwalnia pamiec kiedy przestaje byæ ju¿ u¿ywana
//auto - zastêpczy typ zmiennej, który zostaniew wydedukowany za pomoc¹ zainicjalizowanej wartoœci np auto x = 7 (wiadomo, ¿e to bêdzie int)

#include <iostream>
using namespace std;
class jakas
{
	int _a; //domyslnie private
	private:  // dostêp zabroniony z poza klasy
		int _k ;
	protected: //dostêp do sk³adników klasy jest dozwolony tylko z klasy(tak jak private) oraz w klasach pochodnych klasy bazowej
		int _b;	
	public:  //dostêp jest wszêdzie nawet poza klas¹
		jakas();
		~jakas();
}

jakas::jakas(int a, int k, int b)
{
	_a = a;
	_k = k;
	_b = b;
}

jakas::jakas(){}
jakas::~jakas(){}

int main()
{
	jakas cos1(5, 3, 7);
	return 0;
}


