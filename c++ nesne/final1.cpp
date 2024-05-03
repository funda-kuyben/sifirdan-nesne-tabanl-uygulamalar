#include <iostream>
#include <vector>
using namespace std;

class A{
	public:
		virtual void gezgin()=0;
};

class B:public A{
	int deger;
	public:
		B(int x){
			deger=x;
		}
		void gezgin(){
			cout<<deger;
		}
};

class C:public A{
	vector<A *> liste;
	public:
		void fonk(A *eleman){
			liste.push_back(eleman);
		}
		void gezgin(){
			for(int i=0;i<liste.size();i++)
			liste[i]->gezgin();
		}
};

int main(int argc, char** argv) {
	
	C dizi[4];
	for(int i=0;i<4;i++)
	for(int j=0;j<3;j++)
	dizi[i].fonk(new B(i *3+j));
	
	for(int k=0; k<4; k++)
	dizi[k].gezgin();
	
	return 0;
}
