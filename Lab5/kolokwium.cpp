//aaa () konstruktor posiada ka�da klasa jest odpowiedzialny za inicjalizacj� klasy, wype�nia pole pocz�tkowymi warto�ciami
//~aaa() destruktor zwalnia pamiec kiedy przestaje by� ju� u�ywana
//auto - zast�pczy typ zmiennej, kt�ry zostaniew wydedukowany za pomoc� zainicjalizowanej warto�ci np auto x = 7 (wiadomo, �e to b�dzie int)

#include <iostream>
using namespace std;
class jakas
{
	int _a; //domyslnie private
	private:  // dost�p zabroniony z poza klasy
		int _k ;
	protected: //dost�p do sk�adnik�w klasy jest dozwolony tylko z klasy(tak jak private) oraz w klasach pochodnych klasy bazowej
		int _b;	
	public:  //dost�p jest wsz�dzie nawet poza klas�
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


