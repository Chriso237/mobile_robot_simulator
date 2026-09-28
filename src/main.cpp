#include "robot.hpp"
#include "obstacle.hpp"
#include "environment.hpp"
#include <iostream>
#include <iomanip>

// Simulation by a simulation loop

int main(){

    std::cout << std::fixed << std::setprecision(2);

   
    /*double speed = 1.0; // meters per second
    double angular_velocity = 0.0; // radians per second

    double simulation_time = 10.0; // in seconds
    double dt = 0.1; // time interval measure in seconds

    int step_numbers = simulation_time / dt ;
    
    Robot my_robot(0.0, 0.0, 0.0);
    std::cout << "Start pose : " ;
    my_robot.print_state();

    double time = 0.0;

    

    for(int i=0; i < step_numbers; i++){

        my_robot.update_pose(speed, angular_velocity,dt);

        time+=dt;
        
        std::cout << "At t = " << time << " | Pose is: ";
        my_robot.print_state();

    }*/

    
    return 0;
}