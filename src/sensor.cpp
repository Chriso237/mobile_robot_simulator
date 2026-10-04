#include "sensor.hpp"
#include "robot.hpp"
#include <cmath>
#include <iostream>

Sensor::Sensor(double angle,double max_range):sensor_angle(angle), range(max_range){}

Point Sensor::get_ray_point(const Robot& robot, double distance) const{

    
    Point p;

   if(distance > range){

    p.x = 0;
    p.y = 0;
    std::cout << "The position asked is out of range!" << std::endl;

   }else{

    double ray_angle = robot.get_theta_orientation() + sensor_angle;

    p.x = robot.get_x_postion() + distance * cos(ray_angle);
    p.y = robot.get_y_position() + distance * sin(ray_angle);
   }

   
    return p;
}