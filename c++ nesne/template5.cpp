#include <iostream>
using namespace std;

template <typename T>
class MyTemplate{
	public:
		T add(T a,T b){
			return a+b;
		}
		
		void display(T value){
			cout<<"value:"<<value<<endl;
		}
};

int main(int argc, char** argv) {
	
	MyTemplate<int> intTemplate;
	
	int result=intTemplate.add(5,10);
	intTemplate.display(result);
	
	MyTemplate<double> doubleTemplate;
	
	double doubleResult=doubleTemplate.add(3.5,5.7);
	doubleTemplate.display(doubleResult);
	
	return 0;
}
