#ifndef ROBOT_HPP
#define ROBOT_HPP


class Robot{
    private:
        double x_position; // meters
        double y_position; // meters
        double theta_orientation; // radians

    public:
        Robot(double x, double y, double theta);
        
        void update_pose(double speed, double angular_velocity, double dt);
        void print_state();
       

};

#endif