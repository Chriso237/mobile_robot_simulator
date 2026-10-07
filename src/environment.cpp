#include "environment.hpp"
#include "obstacle.hpp"
#include <vector>
#include <iostream>

Environment::Environment(double l, double w): length(l), width(w){};

void Environment::add_obstacle(const Obstacle& obstacle) {
    const double x = obstacle.get_x_position();
    const double y = obstacle.get_y_position();
    const double obstacle_width = obstacle.get_width();
    const double obstacle_length = obstacle.get_length();

    // Check that the obstacle has positive dimensions and fits in the environment.
    if (x < 0 || y < 0 ||
        obstacle_width <= 0 || obstacle_length <= 0 ||
        x + obstacle_width > length ||
        y + obstacle_length > width) {
        std::cout << "Obstacle " << obstacle.get_id()
                  << " cannot be placed: invalid size or outside the environment.\n";
        return;
    }

    for (const Obstacle& existing : obstacles) {
        const bool overlap_x =
            x < existing.get_x_position() + existing.get_width() &&
            x + obstacle_width > existing.get_x_position();

        const bool overlap_y =
            y < existing.get_y_position() + existing.get_length() &&
            y + obstacle_length > existing.get_y_position();

        if (overlap_x && overlap_y) {
            std::cout << "Obstacle " << obstacle.get_id()
                      << " cannot be placed: it overlaps obstacle "
                      << existing.get_id() << ".\n";
            return;
        }
    }

    obstacles.push_back(obstacle);
    std::cout << "Obstacle " << obstacle.get_id() << " successfully added.\n";
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

double Environment::get_length() const {
    return length;
}
double Environment::get_width() const {
    return width;
}

size_t Environment::get_obstacle_count() const{
    return obstacles.size();
}

const std::vector<Obstacle>& Environment::get_obstacles() const {
    return obstacles;
}