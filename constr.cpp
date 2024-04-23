#include <iostream>
using namespace std;
class Clock
{
private:
    int hour;
    int *min;
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
            *min =m;
            }
            else {
                *min=0;
                }
                }
    void show_time()
    {
        cout << " The time is = " << hour
             << " Hours & " << *min
             << " minutes = " << endl;
        cout << " Address of min is " << min <<endl;
    }
    Clock(int h=0,int m=0){
        setHour(h);
        min= new int;
        setMinute(m);
        show_time();
    }
    Clock(Clock &c){
        hour=c.hour;
        // min= c.min;
        min=new int;
        *min= *(c.min);
        show_time();
    }
    ~Clock(){
        cout<<"\n Destructor executed";
        }
    
};

int main()
{
    Clock obj1(10,50);
    Clock obj2(obj1);       
    return 0;
}