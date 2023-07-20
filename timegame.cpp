#include <iostream>
using namespace std;

int main() {
	int hi,mi,hf,mf,horas,minutos;
	cin>>hi>>mi>>hf>>mf;

	if(hi<hf&&mi<mf){
	horas=hf-hi;
	minutos=mf-mi;}
	
    if(hi<hf&&mi>mf){
	horas=(hf-hi)-1;
	minutos=(60-mi)+mf;}
		
    if(hi<hf&&mf==mi){
	horas=hf-hi;
	minutos=0;}

	if(hi==hf&&mi==mf){
	horas=24;
	minutos=0;}

    if(hi==hf&&mf>mi){
	horas=0;
	minutos=mf-mi;}
	
	if(hi==hf&&mf<mi){
	horas=23;
	minutos=(60-mi)+mf;}
	
	if(hi>hf&&mf==mi){
	horas=(24-hi)+hf;
	minutos=0;}
		
	if(hi>hf&&mf>mi){
   	horas=(24-hi)+hf;
    minutos=mf-mi;}
	    
	if(hi>hf&&mf<mi){
	 horas=(24-hi)+hf-1;
	 minutos=(60-mi)+mf;}

	cout<< "O JOGO DUROU "<<horas<<" HORA(S)"<<" E "<<minutos<< " MINUTO(S)"<<endl;
	return 0;
}
