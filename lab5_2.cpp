#include<iostream>
#include<string>
using namespace std;


string mixText(string s1, string s2){
 int x=s1.size(),y=s2.size(),i=0;
 string a="";
 if (x==y){
	 while (i<x)
	 {
		a=a+s1[i]+s2[i];
		i++;
	 
	 }
	 return a;
	 }
	 else {
		 return "E";
		 }
	 


 }

int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
