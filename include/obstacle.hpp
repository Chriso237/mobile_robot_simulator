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

        int get_id() const{
            return id;
        }

        double get_x_position() const{ // Const to ensure the getter is not going to modify the object 
                                       //so it can be used with the object if it's passed as const in another function
            return x_position;
        }
        double get_y_position() const{
            return y_position;
        }
        double get_width() const{
            return width;
        }
        double get_length() const{
            return length;
        }
};


#endif