#include "Board.hpp"
using namespace std ;


namespace pandemic {

    int& Board::operator[](City city) {
        return x;
    }

    bool Board::is_clean() {
        return false;
    }
    std::ostream& operator<<(std::ostream& os,const Board& b) {
        return os;
    }
    void Board::remove_cures(){
        std::cout << "remove_cures()\n";
    }

}