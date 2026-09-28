#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP

class Obstacle{
    private:
        
        int id; // id of the obstacle
        double x_position; // x position of the bottom left corner
        double y_position; // y position of the bottom left corner
        double width; // width of obstacle in meters
        double length; // length of obstacle in meters

        static int next_id; // ID counter

    public:
        
        Obstacle(double x, double y, double w, double l);
        
        void print_info();

        int get_id(){
            return id;
        }

        double get_x_position(){
            return x_position;
        }
        double get_y_position(){
            return y_position;
        }
        double get_width(){
            return width;
        }
        double get_length(){
            return length;
        }
};


#endif