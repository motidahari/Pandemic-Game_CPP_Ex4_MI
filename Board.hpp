#pragma once
#include "City.hpp"
#include "Color.hpp"
// #include "Board.cpp"
#include <map>
#include <set>
#include <iostream>

namespace pandemic{
    struct Node {

        City city;
        Color color;
        std::map<City,Node> neighbors;
        int disease_level;
        bool research_station;

    };
    class Board {
        // protected:
        private:
            // std::map<City, Node> nodes; // nodes[city].color == Cure_disc[nodes[city2].color]
            std::map<City, std::map<City,Node>> Neighbors_graph;
            std::map<City, int> Disease_level;
            // std::set<City> Research_station;
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