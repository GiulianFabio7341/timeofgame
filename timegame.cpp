#include <iostream>
using namespace std;

int main() {
	int hi,hf,horas;
	cin>>hi>>hf;
	if(hi<hf){
	horas=hf-hi;
	}
	if(hi>hf){
	horas=(24-hi)+hf;
	}
	if(hi==hf){
	horas=24;
	}
	cout<<"O JOGO DUROU "<<horas<< " HORA(S)"<<endl;
	return 0;
}
