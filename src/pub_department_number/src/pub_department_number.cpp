#include <pub_department_number.hpp>

namespace pub_department_number
{
    PubDepartmentNumber::PubDepartmentNumber()
    {
        pub_department_number_ = nh.advertise<std_msgs::String>("/my_department_number", 100);
    }

    PubDepartmentNumber::~PubDepartmentNumber()
    {

    }

    void PubDepartmentNumber::run()
    {
        std_msgs::String ss;

        ss.data = "20170375";

        pub_department_number_.publish(ss);
    }
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "pub_department_number");

    pub_department_number::PubDepartmentNumber PS;

    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        PS.run();

        ros::spinOnce();
        loop_rate.sleep();
    }
}