#include <iostream>
using namespace std;

template <typename Tur1,typename Tur2>
Tur1 topla(Tur1 d1,Tur2 d2){
	return d1+d2;
}

int main(int argc, char** argv) {
	
	int s1=7;
	double s2=2.75;
	cout<<topla(s1,s2)<<endl;
	cout<<topla(s2,s1);
	
	return 0;
}
