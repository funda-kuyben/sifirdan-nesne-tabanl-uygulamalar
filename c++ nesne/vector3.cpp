#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	vector<int> v1;
	cout<<v1.size()<<endl;
	
	v1.push_back(7);
	cout<<v1.size()<<endl;
	
	v1.push_back(8);
	cout<<v1.size()<<endl;
	cout<<v1[1]<<endl;
	
	vector<float>v2;
	float b=0;
	while(b!=-1){
		cout<<"sayi:durdurmak icin -1 e";
		cin>>b;
		v2.push_back(b);
	}
	v2.pop_back();
	int toplam=0,c;
	while(!v5.empty()){
		c=v2.back();
		toplam=toplam+c;
		v2.pop_back();	}
		cout<<toplam<<endl;
	
	
	
	return 0;
}
