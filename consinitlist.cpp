#include <iostream>
using namespace std;
class Player
{
private:
   string name;
   int game;
   int point;
public:
    Player(): name{"None"}, game{0}, point{0} {
        cout << "name= " << name << "\n game =" <<game<< "\npoint ="<<point <<endl;
    }
    Player(string name_val): name{name_val}, game{0}, point{0} {
        cout << "name= " << name << "\n game =" <<game<< "\npoint ="<<point <<endl;
    }
    Player(string name_val, int game_val, int point_val): name{name_val}, game{game_val}, point{point_val}{
        cout << "name= " << name << "\n game =" <<game<< "\npoint ="<<point <<endl;
    }
};
int main() {
    
    Player empty;
    Player vijay{"vijay"};
    Player ajay{"ajay", 100, 55};
    return 0;
}

