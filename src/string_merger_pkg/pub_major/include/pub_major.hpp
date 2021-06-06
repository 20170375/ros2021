#include <ros/ros.h>
#include <iostream>
#include <std_msgs/String.h>

namespace pub_major
{
    class PubMajor
    {
        public:
            PubMajor();
            ~PubMajor();

            void run();

        private:
            ros::NodeHandle nh;

            ros::Publisher pub_major_;
    };
}