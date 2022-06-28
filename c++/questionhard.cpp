#include <iostream>
int main()
{
    const double gravity{9.8};
    float distanceCovered{};
    float atheight;
    float height{};
    int time{};
    std::cout<<"Enter the height of the tower:";
    std::cin>>height;
    bool ball_start;
    std::cout<<"Has the ball moved?:(yes:true,no:false):";
    std::cin>>std::boolalpha;
    std::cin>>ball_start;
    std::cout<<ball_start<<std::endl;
    if(ball_start==0)
    {
        time=0;
        distanceCovered=(gravity*time*time)/2;
        atheight=height-distanceCovered;
        std::cout<<"The current position is:"<<atheight;
    }
    else if(ball_start==1)
    {
        time=1;
        distanceCovered=(gravity*time*time)/2;
        atheight=height-distanceCovered;
        std::cout<<"The current position is :"<<atheight;
    }
    else if (ball_start==1)
    {
    	time=2;
    	distanceCovered=(gravity*time*time)/2;
        atheight=height-distanceCovered;
        std::cout<<"The current position is :"<<atheight;
	}
	else if (ball_start==1)
    {
    	time=3;
    	distanceCovered=(gravity*time*time)/2;
        atheight=height-distanceCovered;
        std::cout<<"The current position is :"<<atheight;
	}
   else if (ball_start==1)
    {
    	time=4;
    	distanceCovered=(gravity*time*time)/2;
        atheight=height-distanceCovered;
        std::cout<<"The current position is :"<<atheight;
	}
	else if (ball_start==1)
    {
    	time=5;
    	distanceCovered=(gravity*time*time)/2;
        atheight=height-distanceCovered;
        std::cout<<"The current position is :"<<atheight;
	}
    return 0;
}
