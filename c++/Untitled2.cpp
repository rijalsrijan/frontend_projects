#include <iostream>
using namespace std;
int main(){
	double numbers[6]={7,6,5,12,35,27};
	double n=sizeof(numbers)/sizeof(double);
	cout<<n<<endl;
	double sum{0},average{0};
	cout<<"The sum is : " ;
	for(int i=0;i<n;i++)
	{
		sum=sum+numbers[i];
		
	}
	cout<<sum<<endl;
	 average = sum/n;
	cout<<"The average is :"<<average;
}
