#include <iostream>

using namespace std;

int main(){
	char x = 'g';
	int a = 0;
	int b = 0;
	while(x != 'n'){
	cout<<"Czy podac ostatnia liczbe: "<<endl;
	cin>>x;
	if(x < 0){
	cout<<"Podaj dodatnia liczbe: "<<endl;
continue;}
	cout<<"Podaj nastepna liczbe: "<<endl;
	cin>>a;
	b += a;
};
	cout<<b<<endl;
	return 0;
}
