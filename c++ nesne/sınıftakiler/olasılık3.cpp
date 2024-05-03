#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cout<<"kac elemanli:";
	cin>>n;
	int dizi[n];
	
	cout<<"dizi elemanlari girin:";
	for(int i=0;i<n;i++){
		cout<<i+1<<".eleman:";
		cin>>dizi[i];
	}
	for(int i=0;i<n;i++){
		cout<<dizi[i]<<endl;
	}
	//basit seri
	
	return 0;
}
