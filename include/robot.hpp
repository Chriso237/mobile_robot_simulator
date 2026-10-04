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
        
        void update_pose(double omega_left, double omega_rigth, double dt);
        void print_state();
       

};

#endif