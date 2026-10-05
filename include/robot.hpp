#ifndef ROBOT_HPP
#define ROBOT_HPP


class Robot{
    private:
        double x_position; // meters
        double y_position; // meters
        double theta_orientation; // radians

        double wheel_radius;
        double wheel_base;

    public:
        Robot(double x, double y, double theta, double r, double L);
        
        void update_pose(double omega_left, double omega_right, double dt);
        void print_state();

        double get_x_position() const{
            return x_position;
        }

        double get_y_position() const{
            return y_position;
        }

        double get_theta_orientation() const{
            return theta_orientation;
        }
       

};

#endif