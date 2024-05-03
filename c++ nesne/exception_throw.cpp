#include <iostream>
using namespace std;

float divide(float f1,float f2){
	if(f2==0){
		throw 15;
	}
	else{return f1/f2;
	}
}

int main(int argc, char** argv) {
	float f1,f2;
	cin>>f1;
	cin>>f2;
	try{
		cout<<divide(f1,f2)<<endl;
	}catch(int e){
		if(e==15){
			cout<<"dkmkd"<<endl;
		}else{
			cout<<"error";
		}
	}
	cout<<"test";
	return 0;
}
