#include <iostream>
using namespace std;

class deneme{
	int i;
	public:
		deneme(){cout<<"kurucu";	};
		~deneme(){cout<<"yikici";	};
};

int main(int argc, char** argv) {
	
	try{
		deneme bir;
		throw 100;
	}
	catch(deneme i){
		cout<<"hata"<<i<<endl;
	}
	
	return 0;
}
