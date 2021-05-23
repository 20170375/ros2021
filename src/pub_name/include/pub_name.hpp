#include <ros/ros.h>
#include <iostream>
#include <std_msgs/String.h>

namespace pub_name
{
    class PubName
    {
        public:
            PubName();
            ~PubName();

            void run();

        private:
            ros::NodeHandle nh;

            ros::Publisher pub_name_;
    };
}