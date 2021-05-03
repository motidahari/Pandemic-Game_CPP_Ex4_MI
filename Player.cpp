#include "Player.hpp"
using namespace std;
namespace pandemic {

        Player::Player(Board& board, City city):b(board), curr_city(city){}
        Player& Player::build(){ cout << "build\n";return *this;}
        Player& Player::fly_charter(City city) { cout << "fly_charter\n"; return *this;}
        Player& Player::drive(City city){ cout << "drive\n";return *this;}
        Player& Player::fly_shuttle(City city){ cout << "fly_shuttle\n";return *this;}
        Player& Player::take_card(City c){ cout << "take_card\n";return *this;}
        std::string Player::role() {cout << "role() base Player\n"; return "Base Player"; }
        Player& Player::fly_direct(City city){ cout << "fly_direct\n";return *this;}
        Player& Player::discover_cure(Color color){ cout << "discover_cure\n";return *this;}
        Player& Player::treat(City c){ cout << "treat\n";return *this;}	
}









