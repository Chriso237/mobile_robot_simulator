#include "robot.hpp"
#include <cmath>
#include <iostream>
#include <iomanip>

Robot::Robot(double x, double y, double theta, double r, double L): x_position(x), y_position(y), theta_orientation(theta), wheel_radius(r), wheel_base(L){}

void Robot::update_pose( double omega_left, double omega_right, double dt){

    double x_dot = (wheel_radius/2) * (omega_left + omega_right) * cos(theta_orientation);
    double y_dot = (wheel_radius/2) * (omega_left + omega_right) * sin(theta_orientation);
    double theta_dot = (wheel_radius/wheel_base) * (omega_right - omega_left);

    x_position += x_dot * dt;
    y_position += y_dot * dt;
    theta_orientation += theta_dot * dt;
    
};

void Robot::print_state(){
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "(" << x_position << ", " << y_position <<", " <<(theta_orientation * 180) / M_PI << ")"<< std::endl;
}