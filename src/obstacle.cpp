#include "obstacle.hpp"
#include <iostream>

int Obstacle::next_id = 1;

Obstacle::Obstacle(double x, double y, double w, double l): id(next_id), x_position(x), y_position(y), width(w), length(l)
{
    next_id++;
}

void Obstacle::print_info(){
    std::cout << "obstacle_" << id << " = {\n"
            << "    id: " << id << "\n"
            << "    X position: " << x_position << "\n"
            << "    Y postion: " << y_position << "\n"
            << "    Width: " << width / 100 << " cm\n"
            << "    Length: " << length / 100 << " cm\n"
            << "}" << std::endl;
}