#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	char data[100];
	int x;
	float t,y;
	
	ofstream o1,o2;
	ifstream i1;
	
	o1.open("file.txt");
	
	for(int i=0;i<5;i++){
		cout<<"no girin:";
		cin>>x;
		cout<<"notu girin:";
		cin>>y;
		cout<<endl;
		o1<<x<<" "<<y<<endl;
	}
	
	i1.open("file.txt");
	o2.open("file2.txt");
	
	cout<<"dosyadan okuma"<<endl;
	
	t=0;
	for(int i=0;i<5;i++){
		i1>>x>>y;
		cout<<y<<endl;
		o2<<x<<" "<<y<<endl;
		t+=y;
	}
	t/=5;
	cout<<endl<<"ort:"<<t<<endl;
	
	i1.close();
	o1.close();
	o2.close();
	
	return 0;
}
