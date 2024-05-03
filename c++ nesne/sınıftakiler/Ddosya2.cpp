#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ofstream f("bir.txt",ios::out);
	ifstream f2;
	int sayi1,sayi2,sayi3;
	char k;
	while(true){
		cout<<"yataysa 1 dikeyse 2 girin:";
		cin>>sayi1;
		f<<sayi<<endl;
		cout<<"kacinci nokta:";
		cin>>sayi2;
		f<<sayi2<<endl;
		cout<<"hangi cizgi:";
		cin>>sayi3;
		f<<sayi3<<endl;
		cout<<"cikis icin c ye basiniz d diye basiniz"<<endl;
		cin>>k;
		if(k=='c')
		break;
	}
	f.close();
	f2.open("bir.txt",ios::in);
	
	while(f>>sayi1>>sayi2>>sayi3){
	
	}
	f.close();

	
	
	
	return 0;
}
