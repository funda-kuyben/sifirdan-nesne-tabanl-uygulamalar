#include <iostream>
#include <fstream>
using namespace std;

class ogrenci{
	public:
		int no;
		char isim[20];
		void yaz(){cout<<no;	}
}bir;

int main(int argc, char** argv) {
	
	ifstream f;
	f.open("ogrenci.txt",ios::in);
	if(!f){
		cout<<"dosya yok";
	}
	else{
		while(1){
			f>>bir.no;
			if(f.eof())
			break;
			bir.yaz();
		}
	}
	
	return 0;
}
