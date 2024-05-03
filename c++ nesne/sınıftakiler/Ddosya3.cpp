#include <iostream>
#include <fstream>
using namespace std;
//finalde belki sorar:listede 100 girdi var 20 si silinecek.100 deger daha girilmedi kac =>100*20 sanýrým

class nokta{ 
	public:
		int x,y;
};
int main(int argc, char** argv) {
	fstream f("nokta.txt",ios::in);
	fstream f2("noktakopya.txt",ios::out);
	nokta bir;
	int n;
	cout<<"x degerini girin:";
	cin>>n;
	bool k=false;
	/*char c='d';
	bir.x=5;
	bir.y=6;
	for(;c=='d';){
		cout<<"cikis icin c ye devam icin d"<<endl;
		cin>>c;
		if(c=='c')
		goto x;
		cout<<"x noktasini girin:";
		cin>>bir.x;
		cout<<"y noktasini girin:";
		cin>>bir.y;
		f<<bir.x<<" "<<bir.y<<" "<<endl;
	}
	x:cout<<"cikis yapiliyor"<<endl;
	
	f.seekp(0,ios::beg);*/
	
	while(f>>bir.x>>bir.y){
		if(n!=bir.x)
		f2<<bir.x<<" "<<bir.y<<" "<<endl;
		else
		k=true;
	}
	if(!k)
	cout<<"veri silindi"<<endl;
	else
	cout<<"veri bulunamadi"<<endl;
	f.close();
	f2.close();
	remove("nokta.txt");
	rename("noktakopya.txt","nokta.txt");
	
	
	
	return 0;
}
