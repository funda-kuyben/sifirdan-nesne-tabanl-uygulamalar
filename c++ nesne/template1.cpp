#include <iostream>
using namespace std;

template <typename Tur>
Tur topla(Tur d1,Tur d2){
	return d1+d2;
}

int main(int argc, char** argv) {
	
	int s1=11,s2=9;
	cout<<topla(s1,s2)<<endl;
	
	float f1=3.3,f2=2.8;
	cout<<topla(f1,f2);
	
	return 0;
}
