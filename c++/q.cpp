#include <iostream>

int getClassSize(bool inBigClassroom)
{
    if (inBigClassroom)
        return 30;

    return 20;
}

int main()
{
    const int classSize{getClassSize(false)};
    std::cout << "The class size is: " << classSize;

    return 0;
}