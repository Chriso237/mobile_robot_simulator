#include <gtest/gtest.h>
#include <vector>
#include "environment.hpp"


TEST(EnvironmentBehavior, AddObstacle){
    Environment env(40.0, 40.0);
    Obstacle obstacle_1(0.0, 0.0, 20.0, 15.0);

    env.add_obstacle(obstacle_1);
    std::vector<Obstacle> obstacles = env.get_obstacles();
    
    EXPECT_EQ(env.get_obstacle_count(), 1);
    EXPECT_EQ(obstacles[0].get_id(), obstacle_1.get_id());
    
}

TEST(EnvironmentBehavior, RejectInvalidObstacles){
    Environment env(40.0, 40.0);
    Obstacle o(15.5, 5.2, 20.0, 38.0);

    env.add_obstacle(o);
    EXPECT_EQ(env.get_obstacle_count(), 0);
    
}