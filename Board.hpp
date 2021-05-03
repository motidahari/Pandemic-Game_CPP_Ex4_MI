#pragma once
#include "City.hpp"
#include "Color.hpp"
// #include "Board.cpp"
#include <map>
#include <set>
#include <iostream>

namespace pandemic{
    class Board {
        // protected:
        private:
            std::map<City, std::set<City>> Neighbors_graph;
            std::map<City, int> Disease_level;
            std::set<City> Research_station;
            std::map<Color, bool> Cure_discovered;

            int x; // 
        public:
            Board(){
                x = 5;
            }
            // ~Board(){}
            // const int operator[](City city) const ;
            int& operator[](City city);
            // int operator[](City city);
            bool is_clean();
            void remove_cures();
            friend std::ostream& operator<<(std::ostream&,const Board&);
            

    };
}