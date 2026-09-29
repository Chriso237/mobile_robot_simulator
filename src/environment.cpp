#include "environment.hpp"
#include "obstacle.hpp"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>



Environment::Environment(double l, double w) : length(l), width(w){}

void Environment::add_obstacle(const Obstacle& obstacle){
    std::stringstream ss;
    if((obstacle.get_x_position() < 0 || (obstacle.get_y_position() < 0)) 
    || ( (obstacle.get_x_position() + obstacle.get_length() > length) 
    || (obstacle.get_y_position() + obstacle.get_width() > width))){

        ss << "Wouha! obstcale with ID: " << obstacle.get_id() << " Cannot be placed wrong place/size maybe ? ;)\n";

    }else{
        obstacles.push_back(obstacle);
        ss << "Obstacle " << obstacle.get_id() << " succesfully added! :)\n";
    }

    std::string log_entry = ss.str();
    std::cout << log_entry;
    
}

void Environment::remove_obstacle(int obstacle_id){
    if( obstacle_id <= 0) {std::cout << "No Obstacle corresponding!\n"; return;}

    for(size_t i = 0; i < obstacles.size(); i++){
        if(obstacle_id == obstacles[i].get_id()){
            obstacles.erase(obstacles.begin() + i);
            std::cout << "Obstacle removed succesfully" << std::endl;
            return;

        }
    }

    std::cout << "No obstacle corresponding" << std::endl;

}