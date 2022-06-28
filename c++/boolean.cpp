#include <iostream>
int main()
{
	bool start{};
	std::cout<<"enter value of start:";
	std::cin>>std::boolalpha;
	std::cin>>start;
	std::cout<<start<<std::endl;
	int a=start;
	   
	std::cout<<a;
	if(a==1)
	{
		std::cout<<"potato";
	}
	return 0;
}
