#include <iostream>
/*float inputSymbol(float a, float b)
{
    if()
    
    
        
}*/
int main()
{
    float x{};
    float y{};
    float answer{};
    char sym{};
    std::cout<<"Enter a number:"<<std::endl;
    std::cin>>x;
    std::cout<<"Enter another number:"<<std::endl;
    std::cin>>y;
    std::cout<<"Enter a character(from +,-,*,/):"<<std::endl;
    std::cin>>sym;
  if(sym=='+')
  {
      answer=x+y;
      std::cout<<answer;
  }
  else if(sym=='-')
  {
      answer=x-y;
      std::cout<<answer;
  }
  else if (sym =='*')
  {
      answer = x * y;
      std::cout << answer;
  }
  else if (sym == '/')
  {
      answer = x / y;
      std::cout << answer;
  }
  else
  {
      std::cout<<"Invalid option!";
  }
  return 0;
}