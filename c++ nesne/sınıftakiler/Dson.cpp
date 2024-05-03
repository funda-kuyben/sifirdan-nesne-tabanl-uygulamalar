#include <iostream>
#include <fstream>
using namespace std;

class kisi{
	public:
		string isim;
		int sicilno;
		float maas;
};
kisi bir;

int main(int argc, char** argv) {
	fstream f;
	f.open("liste.txt",ios::in|ios::out);
   //	cin>>bir.isim;
	getline(cin,bir.isim);
	cin>>bir.maas;
	cin>>bir.sicilno;
	/*f.write((char*)&bir,sizeof(bir));
	f.seekg(0,ios::beg);
//	bir.maas=6000;
	f.read((char*)&bir,sizeof(bir));
	cout<<" dosyayya yaizlip okunan kisim";
	cout<<bir.isim<<" "<<bir.maas<<" "<<bir.sicilno<<endl;*/
	
	f.write((char*)&bir,sizeof(bir));
	cin>>bir.maas;
	k=static_cast<int>sizeof(bir);
	f.seekp(-k,ios::cur);
	f.write((char*)&bir,sizeof(bir));
	f.read((char*)&bir,sizeof(bir));
	k=static_cast<int>sizeof(bir);
	f.seekg(-k,ios::cur);
	f.read((char*)&bir,sizeof(bir));

	cout<<"güncellenip dosyayya yaizlip okunan kisim";
	cout<<bir.isim<<" "<<bir.maas<<" "<<bir.sicilno<<endl;
	return 0;
}
