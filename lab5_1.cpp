#include<iostream>
#include<string>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	int counter = 0;
	string name[N];
	int age[N];
	
	while (counter <= N-1)
	{
		cout << "Name of student "<< counter+1 << " = " ;
		cin >> name[counter];
		cout << "Age of student "<< counter+1 << " = ";
		cin >> age[counter];
		 counter++;
	}
	
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	   int counter2=0;
	   while (counter2<N)
	   {
		   if (key==age[counter2])
		   {
			   
			   cout << name[counter2] <<endl ;
		   }
		  counter2++;
	   }
	   

	
	cout << "--------------------------------------\n";
	
	
	return 0;
}
