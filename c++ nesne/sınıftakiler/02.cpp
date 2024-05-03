#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//sistematik rastgele örnekleme

int main(int argc, char** argv) {
	srand(time(NULL));
	int min,max,k,N,n,a,i;
	cin>>N;
	cin>>n;
	k=N/n;
	min=1;
	max=k;
	
	int rastgele=min+rand()%(max-min+1);
	a=rastgele;
	for(i=0;i<n;i++){
		
		cout<<a<<endl;
		a=a+k;
	}
	return 0;
}
