#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP

class Obstacle{
    private:
        
        double x_position; // x position of the bottom left corner
        double y_position; // y position of the bottom left corner
        double width; // width of obstacle in meters
        double length; // length of obstacle in meters

        static int next_id; // ID counter

    public:
        int id; // id of the obstacle
        Obstacle(double x, double y, double w, double l);
        
        void print_info();
};


#endif