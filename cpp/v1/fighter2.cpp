#include <iostream>
#include <random>
#include <time.h>

using namespace std;

class Fighter {
    private:
        int hitpoints;
        char player_name[32]; // TODO make this a linked list instead
    public:
        Fighter() { // This is the constructor - it runs the when the object is created from this class
            hitpoints = 60;
        }
        int attack (void) {
            int attack_hp = (rand() %6 + 1);
            if ((hitpoints - attack_hp) < 0) {
                cout << player_name << " has been knocked out!\r\n";
                return(5);
            }
            else {
                cout << player_name << " has been hit for " << attack_hp << " points!\r\n" ; 
            }
            hitpoints = (hitpoints - attack_hp);
            cout << player_name << " has " << hitpoints << " HP left!\r\n";
            return(1);
        }
        void set_name (void) {
            cout << "Enter the name of the character: ";
            cin >> player_name; // TODO check for contents / length
        }
        int get_hp (void) {
            return hitpoints;
        }
};

int coinflip (void) {
    int coin = (rand() %2 + 1);
    return coin;
};

int main (void) {

    srand(time(NULL)); // Seed the random functions

    Fighter Bob;
    Fighter Alice;

    Bob.set_name();
    Alice.set_name();

    while (Bob.get_hp() > 0 and Alice.get_hp() > 0) { // potentially change to looking for the '5' return code.  TBD
        int coin = coinflip();
        if (coin == 1) {
            Bob.attack();
            Alice.attack();
        } else {
            Alice.attack();
            Bob.attack();
        }
    }
    return(0);
}