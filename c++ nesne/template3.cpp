#include <iostream>
using namespace std;

template <class Tur>
class Sinif{
	public:
		Sinif(){
			cout<<"tip char degil"<<endl;
		}
};

template<>
class Sinif <char>{
	public:
		Sinif(){
			cout<<"tip char"<<endl;
		}
};

int main(int argc, char** argv) {
	
	Sinif<int> a;
	Sinif<float> b;
	Sinif<char> c;
	
	return 0;
}
