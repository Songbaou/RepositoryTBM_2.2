#include <iostream>
using namespace std;
main()
{
	
	for(int I=1;I<=10;I++)
	{		
		for(int i=10;i>=11-I;i--){
			cout <<"*";}
			
		for(int i=1;i<=11-I;i++){ 
			cout <<" ";}
			
		cout <<"\t";

		for(int i=1;i<=11-I;i++ ){
			cout <<"*";}
			
		for(int i=10;i>11-I;i--){ 
			cout <<" ";}
			 
		cout <<"\t";
			
		for(int i=10;i>11-I;i--){
			cout <<" ";}
			
		for(int i=1;i<=11-I;i++){
			cout <<"*";}
			
		cout <<"\t";
			
		for(int i=1;i<=11-I;i++){
			cout <<" ";}
			
		for(int i=10;i>=11-I;i--){
			cout <<"*";}
				
		cout<<endl;
	}
	
}
