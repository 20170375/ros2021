#include <ros/ros.h>
#include <iostream>
#include <std_msgs/String.h>

namespace pub_department_number
{
    class PubDepartmentNumber
    {
        public:
            PubDepartmentNumber();
            ~PubDepartmentNumber();

            void run();

        private:
            ros::NodeHandle nh;

            ros::Publisher pub_department_number_;
    };
}