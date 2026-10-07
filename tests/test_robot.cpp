#include <gtest/gtest.h>
#include "robot.hpp"

TEST(RobotMotion, StraightLineMotion){
    Robot robot(0.0, 0.0, 0.0, 1.0, 2.0);

    robot.update_pose(1.0, 1.0, 0.5);

    EXPECT_NEAR(robot.get_x_position(), 0.5, 1e-6);
    EXPECT_NEAR(robot.get_y_position(), 0.0, 1e-6);
    EXPECT_NEAR(robot.get_theta_orientation(), 0.0, 1e-6);
}

TEST(RobotMotion, CombinedTranslationAndRotation){
    Robot robot(0.0, 0.0, 0.0, 1.0, 2.0);

    robot.update_pose(2.0,1.0, 0.5);

    EXPECT_GT(robot.get_x_position(), 0.0);
    EXPECT_NEAR(robot.get_y_position(), 0.0, 1e-5);
    EXPECT_NEAR(robot.get_theta_orientation(), -0.25, 1e-6);
}