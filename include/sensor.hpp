#ifndef SENSOR_HPP
#define SENSOR_HPP

#include "robot.hpp"

typedef struct{
    double x;
    double y;
} Point;

class Sensor{
    private:
        double sensor_angle;
        double range;

    public:
        Sensor(double angle, double max_range);
        
        Point get_ray_point(const Robot& robot, double distance) const; 
        /* The ray is considered as a straight line that has the following parametric representation:
        
        x(t) = x_robot + t * cos(ray_angle)
        y(t) = y_robot + t * sin(ray_angle)

        where t is the distance performed by the ray.

        so the detectionn is based on which point intersects with the ray.
        
        */
};

#endif