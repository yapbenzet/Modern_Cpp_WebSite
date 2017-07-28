#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec(5);
    for(int i=0;i<5;i++)
    {
        vec.push_back(i+2);
    }
    std::cout<<"Size:"<<vec.size()<<std::endl;
    std::cout<<"Kapasite"<<vec.capacity()<<std::endl;
    std::cout<<"Max_size:"<<vec.max_size()<<std::endl;
    return 0;
}

