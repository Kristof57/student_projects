#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream plik;
	plik.open("dane.txt", ios::app);
	if(!plik.is_open()){
	cout<<"Blad w otwarciu pliku"<<endl;
	return 1;
}

	int x;
	int suma = 0;

	while(plik >> x){
	suma += x;
}




plik.close();
cout<<suma<<endl;
return 0;
}
