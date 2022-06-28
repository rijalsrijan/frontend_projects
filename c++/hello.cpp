#include<iostream>
int getValueFromUser()
{
	std::cout<<"Enter an integer:";
	int input{};
	std::cin>>input;
	return input;
}
int main()
{
	int num{getValueFromUser()} ;
	std::cout<<num<<" Is doubled:"<<num*2<<std::endl;
	return 0;
}

