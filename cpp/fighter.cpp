#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main (void) {
    int fighter1 = 60;
    int fighter2 = 60;
    int dmg = 0;
    srand(time(NULL)); // Seed rand

    while(fighter1 > 0 and fighter2 > 0) {// The fighter is still alive
        dmg = rand() % 6 + 1;
        cout << "Damage: " << dmg << "\r\n";
        fighter1 = fighter1 - dmg;

        dmg = rand() % 6 + 1;
        cout << "Damage: " << dmg << "\r\n";
        fighter2 = fighter2 - dmg;

        cout << "1: " << fighter1 << "\r\n";
        cout << "2: " << fighter2 << "\r\n";

        cout << "============="  << "\r\n";
    }
}