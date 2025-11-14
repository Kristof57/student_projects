#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string imie;
       	string nazwisko;
       cout<<"Podaj imie"<<endl;
       cin>>imie;
       cout<<"Podaj nazwisko"<<endl;
       cin>>nazwisko;
	fstream plik;
	plik.open("dane.txt", ios::app);
	if(!plik.is_open()){
	cout<<"Blad w otwarciu pliku"<<endl;
	return 1;
}
	plik<<imie + " " + nazwisko + "\n";
	cout<<imie + " " + nazwisko + "\n"<<endl;
	cout<<"Czy dopisac cos jeszcze?"<<endl;
	char x = 't';
	cin>>x;

	string cos;
	if(x == 't'){
	cin>>cos;
	plik<<cos + "\n";
} else { 
cout<<"OK"<<endl;}
plik.close();
return 0;
}
