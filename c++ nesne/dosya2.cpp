#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	string s;
	ifstream okuma;
	ofstream yazma;
	
	okuma.open("giris.txt");
	yazma.open("cikis.txt");
	
	while(getline(okuma,s)){
		cout<<s<<" "<<endl;
		yazma<<s<<endl;
	}
	okuma.close();
	yazma.close();
	
	getchar();
	getchar();
	return 0;
}
