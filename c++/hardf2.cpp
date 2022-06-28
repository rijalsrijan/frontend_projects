#include <iostream>
const double gravity{9.8};


double getHeight( )
{
	double height{};
	std::cout<<"Enter the height of the tower:";
	std::cin>>height;
	return height;
}

 double currentHeight(double tower_height,int time)
 {
 	double distanceCovered{(gravity*time*time)/2};
 	double particularHeight{tower_height-distanceCovered};
 }
int main()
{
const  double tower_height{getHeight( )};
std::cout<<tower_height;
double currentHeight(tower_height,watch)
return 0;
}
