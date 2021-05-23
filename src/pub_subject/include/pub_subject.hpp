#include <ros/ros.h>
#include <iostream>
#include <std_msgs/String.h>

namespace pub_subject
{
    class PubSubject
    {
        public:
            PubSubject();
            ~PubSubject();

            void run();

        private:
            ros::NodeHandle nh;

            ros::Publisher pub_subject_;
    };
}