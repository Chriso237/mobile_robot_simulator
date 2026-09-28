#include "environment.hpp"
#include "obstacle.hpp"
#include <vector>
#include <stdexcept>
#include <string>
#include <sstream>

std::stringstream ss;

Environment::Environment(double l, double w) : length(l), width(w){}

void Environment::add_obstacle(Obstacle& obstacle){

   if(( obstacle.get_x_position() < 0 || (obstacle.get_x_position() + obstacle.get_length() > length)) 
   || (obstacle.get_y_position() < 0 || (obstacle.get_y_position() + obstacle.get_width() > width))){

    ss << "obstacle with ID " << obstacle.get_id() << " Cannot be placed, check the width/length or its position ;)\n";
    
    std::string err = ss.str();

    throw std::runtime_error(err);


   }

   obstacles.push_back(obstacle);
}

void Environment::remove_obstacle(int obstacle_id){
    obstacles.erase(obstacles.begin() + ( obstacle_id - 1));
}