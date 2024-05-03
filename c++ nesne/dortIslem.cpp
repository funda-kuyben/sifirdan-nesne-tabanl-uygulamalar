#include <iostream>

using namespace std;
//dört iþlem

int main(int argc, char** argv) {
	int s1,s2,sonuc;
	char c,k;
	
	
	a:
	cout<<"hangi islem:";
	cin>>c;
	
	
	switch(c){
		case '+':
			cout<<"ilk sayi:";
	        cin>>s1;
	        cout<<"ikinci sayi:";
	        cin>>s2;
			sonuc=s1+s2;
			cout<<s1<<c<<s2<<"="<<sonuc<<endl;
			cout<<"isleme devam ise d cikis icin c ye basiniz";
			cin>>k;
			if(k=='d'){
			goto a;
			}
			else{
				break;
			}
		
		case '-':
			cout<<"ilk sayi:";
			cin>>s1;
			cout<<"ikinci sayi:";
			cin>>s2;
			sonuc=s1-s2;
			cout<<s1<<c<<s2<<"="<<sonuc<<endl;
			cout<<"isleme devam ise d cikis icin c ye basiniz";
			cin>>k;
			if(k=='d'){
				goto a;
			}
			else{break;
			}
		case '*':
			cout<<"ilk sayi:";
			cin>>s1;
			cout<<"ikinci sayi:";
			cin>>s2;
			sonuc=s1*s2;
			cout<<s1<<c<<s2<<"="<<sonuc<<endl;
			cout<<"isleme devam ise d cikis icin c ye basiniz";
			cin>>k;
			if(k=='d'){
				goto a;
			}
			else{
				break;
			}
		case '/':
			cout<<"ilk sayi:";
			cin>>s1;
			cout<<"ikinci sayi:";
			cin>>s2;
			sonuc=s1/s2;
			cout<<s1<<c<<s2<<"="<<sonuc<<endl;
			cout<<"isleme devam ise d cikis icin c ye basiniz";
			cin>>k;
			if(k=='d'){
				goto a;
			}
			else{
				break;
			}
			default:
			cout<<"isleminiz gerceklesmedi.";
			cout<<"isleme devam ise d cikis icin c ye basiniz";
			cin>>k;
			if(k=='d'){
				goto a;
			}
			else{break;
			}
	}
	cout<<"isleminiz sonlandirilmistir,iyi gunler."<<endl;

	//kodda d haric herhangi karakterde de break olur cikis yapilir.
	
	
	return 0;
}
