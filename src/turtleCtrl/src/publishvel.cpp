#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

int main(int argc,char **argv) {

    ros::init(argc, argv, "turtleCtrl");
    ros::NodeHandle nh;

    double velocity_ = 0.0;

    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 1000);

    ros::Rate loop_rate(10);

    while(ros::ok()) {
        nh.getParam("turtleVelocity", velocity_);
        
        geometry_msgs::Twist msg;
        msg.linear.x = velocity_;
        msg.angular.z = 1.0;
        
        pub.publish(msg);

        loop_rate.sleep();
    }
}