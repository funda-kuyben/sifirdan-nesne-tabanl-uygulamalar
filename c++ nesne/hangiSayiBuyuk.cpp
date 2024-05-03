#include <iostream>
using namespace std;
//hangi sayi daha buyuk

int main(int argc, char** argv) {
	int s1,s2;
	cout<<"sayilar:";
	cin>>s1;
	cin>>s2;
	if(s1==s2){
		cout<<"sayilar esit.";
	}
	else{
		if(s1>s2){
			cout<<"birinci buyuk"<<endl;
			}
			else{
				cout<<"ikinci buyuk";
			}
		}
	
	
	return 0;
}
