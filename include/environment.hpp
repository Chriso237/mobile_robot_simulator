#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

#include "obstacle.hpp"
#include <vector>


class Environment{

    private:

        double length; // length of the environment in meters
        double width; // width of the environment in meters
        std::vector<Obstacle> obstacles; // vector containing all the obstacles in the environment
        
    public:
        
        Environment(double l, double w);

        void add_obstacle(const Obstacle& obstacle); // add obstacle in the environment
        void remove_obstacle(int obstacle_id); // removes the obstacle from the environment

        double get_length() const;
        double get_width() const;
        size_t get_obstacle_count() const;
        const std::vector<Obstacle>& get_obstacles() const;
        
};


#endif