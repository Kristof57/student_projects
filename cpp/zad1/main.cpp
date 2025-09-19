#include <iostream>

using namespace std;

int main(){
 	int x;
	int y;
	cout<<"Podaj wiek:"<<endl;
        cin>>x;
	cout<<"Podaj wiek nastepnej osoby:"<<endl;
 	cin>>y;
  	cout<<"W sumie macie lat:"<<x + y <<endl;
	if(x + y > 100){
	cout<<"Macie więcej niż sto lat"<<endl;
		}
	else{ cout<<"Macie mniej lub 100 lat"<<endl;
		}
	if(x > y){
	cout<<"Osoba pierwsza jest starsza"<<endl;
		}
	else if(y > x){
	cout<<"Osoba druga jest starsza"<<endl;
		}
	else{
	cout<<"Maja tyle samo lat"<<endl;
		}
	return 0;
}
