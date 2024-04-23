#include <iostream>
using namespace std;
class Clock
{
private:
    int hour;
    int min;
public:
    void setHour(int h){
        if(h >= 0 && h < 24){
            hour =h;
            }
            else{
                hour=0;
                }
                }
    void setMinute(int m){
        if(m >= 0 && m < 60){
            min =m;
            }
            else {
                min=0;
                }
                }
    int getHour(){
        return hour;
    } 
    int getMinute(){
        return min;
    }
};

int main()
{
    Clock obj1;       
    obj1.setHour(15);
    obj1.setMinute(36);
    cout << "The Time is " << obj1.getHour() << " Hours & " << obj1.getMinute() << " Minute";
    return 0;
}