#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void print(vector<T>& v){
	typename vector<T>::iterator i=v.begin();
	while(i!=v.end())
	cout<<*i++<<" ";
	cout<<endl;
}

int main(int argc, char** argv) {
	
	vector<int> v;
	vector<int> v1(4,10);
	vector<int> v2(10);
	vector<int> v4(&v2[5],&v2[8]);
	vector<int> v5(v1);
	
	print(v);
	print(v1);
	print(v2);
	print(v4);
	print(v5);
	
	/*vector<int>v6;
	v6.insert(v6.begin(),6);
	print(v6);
	cout<<v6.empty();*/
	
	
	return 0;
}
