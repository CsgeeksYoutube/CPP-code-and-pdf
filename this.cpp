#include<iostream>    
using namespace std;
class Clock
{
private:
    int hours;
    int min;
public:
    Clock(int hours, int min)
    {
        this->hours = hours;
        this->min = min;
    }
};

int main()
{    
    Clock c1(12,45);  
    return 0;
}