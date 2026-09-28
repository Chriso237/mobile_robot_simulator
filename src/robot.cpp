#include "robot.hpp"
#include <cmath>
#include <iostream>
#include <iomanip>

Robot::Robot(double x, double y, double theta): x_position(x), y_position(y), theta_orientation(theta){}

void Robot::update_pose( double speed, double angular_velocity, double dt){

    x_position = x_position + (speed * cos(theta_orientation) * dt);
    y_position = y_position + (speed * sin(theta_orientation) * dt);
    theta_orientation = theta_orientation + (angular_velocity * dt) ;
};

void Robot::print_state(){
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "(" << x_position << ", " << y_position <<", " <<(theta_orientation * 180) / M_PI << ")"<< std::endl;
}