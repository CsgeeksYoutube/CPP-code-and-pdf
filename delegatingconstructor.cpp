#include <iostream>
using namespace std;
class Player
{
private:
   string name;
   int game;
   int point;
public:
    Player():Player{"None", 0, 0} {
        cout << "No argument constructor"<<endl;
    }
    Player(string name_val): Player{"name_val",0,0} {
        cout << "one argument constructor"<<endl;
    }
    Player(string name_val, int game_val, int point_val): name{name_val}, game{game_val}, point{point_val}{
        cout << "three argument constructor"<<endl;
    }
};
int main() {
    
    Player empty;
    Player vijay{"vijay"};
    Player ajay{"ajay", 100, 55};
    return 0;
}

