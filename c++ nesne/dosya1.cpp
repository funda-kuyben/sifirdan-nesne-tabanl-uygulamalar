#include <iostream>
#include <fstream>
using namespace std;
//kullan�c�dan sayi grip dosyay yazd�rp ort unu alma
    

int main(int argc, char** argv) {
	
	ofstream f("bir.txt",ios::out);
	ifstream f2;
	int sayi;
	char k;
    while(true){
    cout<<"sayi giriniz:"
	cin>>sayi;
	f<<sayi<<endl;
    cout<<"cikis icin c ye basiniz d diye basiniz"<<endl;
    cin>>k;
    if(k=='c')
    break;
}
f.close();
f2.open("bir.txt",ios::in);
   
   while(f>>sayi){
	cout<<sayi;
}

	
	f.close();
	
	return 0;
}
