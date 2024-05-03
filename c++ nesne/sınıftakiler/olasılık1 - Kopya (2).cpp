#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    srand(time(NULL));

    int min, max, adet,i;
    int n,N,k,a;
    cout << "min: ";
    cin >> min;
    cout << "max: ";
    cin >> max;
    cout << "adet: ";
    cin >> adet;

    if ((max - min + 1) > adet) {
        vector<int> rastgeleler;

        while (rastgeleler.size() < adet) {
            int rastgele = min + rand() % (max - min + 1);

            bool varMi = false;
            for ( i = 0; i < rastgeleler.size(); ++i) {
                if (rastgeleler[i] == rastgele) {
                    varMi = true;
                    break;
                }
            }

            if (!varMi) {
                rastgeleler.push_back(rastgele);
            }
        }

        cout << "Üretilen rastgele sayýlar: ";
        for (i = 0; i < rastgeleler.size(); ++i) {
            cout << rastgeleler[i] << endl;
        }
        
    } 
    if((max-min+1)<adet){
    	
    	for(i=0;i<adet;i++){
    		int rastgele=min+rand()%(max-min+1);
    		cout<<rastgele<<endl;
		}
	}
	k=N/n;
	min=1;
	max=k;
	int rastgele=min+rand()%(max-min+1);
	a=rastgele;
	for(i=0;i<n;i++){
		cout<<a<<endl;
		a=a+k;
	}
	
	
	
    return 0;
}
