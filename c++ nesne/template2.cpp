#include <iostream>
using namespace std;

template <class Tur>
class Sayi{
	public:
	Tur deger1,deger2;
	Sayi(Tur d1,Tur d2){
		this->deger1=d1;
		(*this).deger2=d2;
	}
	Tur topla();
};

template<class Tur>
Tur Sayi<Tur>::topla(){
	return this->deger1+this->deger2;
}

int main(int argc, char** argv) {
	
	Sayi<int> tamSayi(11,22);
	Sayi<double> kesirliSayi(22.3,44.5);
	
	cout<<tamSayi.topla()<<endl;
	cout<<kesirliSayi.topla();
	
	return 0;
}
