//take inputs from user and store them in an array
#include <iostream>
using namespace std;
int main()
{
	int numbers[5];
	cout<<"Enter 5 numbers:"<<endl;
	//store input from user array
	for(int i=0;i<5;i++){
		cin>>numbers[i];
	}
	cout<<"The numbers are:";
	//print array elements
	for(int n=0;n<5;n++){
		cout<<numbers[n]<<" ";
	}
	return 0;
}
