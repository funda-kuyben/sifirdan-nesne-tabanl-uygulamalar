#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	
	int min,,max,adet;
	cout<<"min:";
	cin>>min;
	cout<<"max";
	cin>>max;
	cout<<"adet";
	cin>>adet;
	
	if((max-min+1)>adet){
		int rastgele=min+rand()%(max-min+1);
		cout<<"rastgele:"<<rastgele;
	}
	return 0;
}
