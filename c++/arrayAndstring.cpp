#include<iostream>
int main()
{
    repeat:
    int n{};
    std::cout<<"Enter the number for finding factorial:"<<std::endl;
    std::cin>>n;
    int fact{1};
    if(n<0){
        std::cout<<"negative number!"<<std::endl;
        goto repeat;
    }
    else{
    for( int i{1};i<=n;i++){
        fact=i*fact;
    }
    }

    std::cout<<"the factorial of n is :"<<fact<<std::endl;
    return 0;
}
