#include "environment.hpp"
#include "obstacle.hpp"
#include <vector>

Environment::Environment(double l, double w) : length(l), width(w){}

void Environment::add_obstacle(const Obstacle& obstacle){
    obstacles.push_back(obstacle);
}

void Environment::remove_obstacle(int obstacle_id){
    obstacles.erase(obstacles.begin() + ( obstacle_id - 1));
}