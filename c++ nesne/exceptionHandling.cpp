#include <iostream>
using namespace std;

double bolme(int a,int b){
	try{if(a<0|| b<0)throw 5;
		if(b==0)throw 1;
		else
		return a/b;
	}
/*	catch(int deger){
		if(deger==1)
		cout<<"sifira bolme hatasi";
		if(deger==5)
		cout<<"neg.sayilari bolmeyin";
	}*/
	catch(...){
		cout<<"hatali islem";
	}
}

int main(int argc, char** argv) {
	bolme(6,4);
	return 0;
}
