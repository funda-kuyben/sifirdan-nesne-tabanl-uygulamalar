#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	int max,min,adet,i;
	cout<<"min:";
	cin>>min;
	cout<<"max:";
	cin>>max;
	cout<<"adet:";
	cin>>adet;

	
	if((max-min+1)>adet){
		vector<int> dizi;//dinamik dizi
		while(dizi.size()<adet){
			int rastgele=min+rand()%(max-min+1);
			bool ayniMi=false;
			for(i=0;i<dizi.size();i++){
				if(rastgele==dizi[i]){
					ayniMi=true;
					break;
				}
			}
			if(ayniMi!=true){
				dizi.push_back(rastgele);
			}
		}
		for(i=0;i<dizi.size();i++){
			cout<<dizi[i]<<endl;
		}
		
	}
	if((max-min+1)<adet){
    	
    	for(i=0;i<adet;i++){
    		int rastgele=min+rand()%(max-min+1);
    		cout<<rastgele<<endl;
		}
	}
	return 0;
}
