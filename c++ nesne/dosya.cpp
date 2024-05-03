#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
	char data[100];
	int x;
	float t,y;
	
	ofstream outfile,o2;
	ifstream infile;
	
	outfile.open("file.txt");
	
	for(int i=0;i<5;i++){
		cout<<"no girin:";
		cin>>x;
		cout<<"not girin:";
		cin>>y;
		cout<<endl;
		outfile<<x<<" "<<y<<endl;
	}
	
	infile.open("file.txt");
	o2.open("file2.txt");
	
	cout<<"dosyadan okuma"<<endl;
	
	t=0;
	for(int i=0;i<5;i++){
		infile>>x>>y;
		cout<<y<<endl;
		o2<<x<<" "<<y<<endl;
		t+=y;
	}
	t/=5;
	cout<<endl<<"ortalama"<<t<<endl;
	
	return 0;
}








