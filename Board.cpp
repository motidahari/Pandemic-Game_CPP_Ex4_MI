#include "Board.hpp"
using namespace std ;


namespace pandemic {

    int& Board::operator[](City city) {
        return Disease_level[city];
    }

    bool Board::is_clean() {
        for(auto &x : Disease_level){
            if(x.second > 0) {
                return false;
            }
        }
        return true;
    }
    std::ostream& operator<<(std::ostream& os,const Board& b) {
        return os;
    }
    void Board::remove_cures(){
        std::cout << "remove_cures()\n";
    }

}