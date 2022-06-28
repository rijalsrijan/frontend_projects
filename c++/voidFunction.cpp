#include<iostream>
#include <string>
int main()
{
	std::cout<<"Enter full name:";
	std::string name{};
	std::getline(std::cin>>std::ws,name);
	std::cout<<"Enter your age:";
	std::string age{};
	std::getline(std::cin>>std::ws,age);

	std::cout<<"your name is "<<name<<" and your age is "<<age<<std::endl;
	std::cout<<"Your age+length of name is:"<<static_cast<int>(name.length())+age.length();
	return 0;
}