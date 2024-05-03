#include <iostream>
using namespace std;

class deneme{
	int x;
	public:
		void* operator new(size_t size);
		void operator delete(void*);
		deneme(int a){
			x=a;
			cout<<"kurucu";
		}
		~deneme(){cout<<"yikici";	}
};

void* deneme::operator new(size_t size){
	void *storage=malloc(size);
	cout<<"new";
	return storage;
}

void deneme::operator delete(void *p){
	cout<<"delete";
	free(p);
}

int main(int argc, char** argv) {
	
	deneme* d = new deneme(5);
    delete d;
	
	//deneme d(5);
	//delete d;
	
	
	return 0;
}
