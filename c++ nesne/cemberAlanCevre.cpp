#include <iostream>
using namespace std;
const double pi=3.14;
//cemberin alan ve cevresini bulan

int main(int argc, char** argv) {
	int r;
	double cevre,alan;
	cout<<"yaricapi girin:";
	cin>>r;
	cevre=2*pi*r;
	alan=pi*r*r;
	cout<<"cevre:"<<cevre<<endl;
	cout<<"alan:"<<alan<<endl;
	
	
	
	return 0;
}
