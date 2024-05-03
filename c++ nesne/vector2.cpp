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
	
	vector<int> v6;
	v6.insert(v6.begin(),5);
	v6.insert(v6.end(),10);
	v6.insert(v6.begin(),7);
	v6.push_back(88);
	print(v6);
	v6.pop_back();
	print(v6);
	//cout<<v6.empty();
	cout<<*v6.begin()<<endl;
	cout<<*v6.end()<<endl;
	cout<<v6.front()<<endl;
	cout<<v6.back()<<endl;
	v6.erase(v6.begin()+1,v6.end()-1);
	print(v6);
	//v6.clear();
	v6.push_back(65);
	v6.push_back(56);
	v6.push_back(11);
	print(v6);
	cout<<v6.size()<<endl;
	cout<<v6.capacity()<<endl;//kendi büyür geçerse,dinamik büyüme
	
	v6.insert(v6.begin(),&v7[2],&v7[5]);
	print(v6);
	
	return 0;
}
