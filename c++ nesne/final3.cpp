#include <iostream>
using namespace std;

template<class T>
class deneme{
	private:
		T x;
	public:
	 static int y;
		deneme(){
			y++;
		}
};

template<class T>
int deneme<T>::y=0;

int main(int argc, char** argv) {
	
	deneme<int> a,b;
	deneme<double> c;
	cout<<b.y<<" ";
	cout<<c.y<<endl;

	
	return 0;
}
