#include <iostream>
using namespace std;
int display(int m[5]){
	cout<<"Displaying marks: "<<endl;
	for(int i=0;i<5;i++){
		cout<<"Student "<<i+1<< ":"<<m[i]<<endl;
	}
}
int main(){
	int marks[5]={88,76,90,61,69};
	int monitor=display(marks);
	cout<<monitor;
	return 0;
	
}

