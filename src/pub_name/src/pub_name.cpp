#include <pub_name.hpp>

namespace pub_name
{
    PubName::PubName()
    {
        pub_name_ = nh.advertise<std_msgs::String>("/my_name", 100);
    }

    PubName::~PubName()
    {

    }

    void PubName::run()
    {
        std_msgs::String ss;

        ss.data = "Oh Seungwon";

        pub_name_.publish(ss);
    }
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "pub_name");

    pub_name::PubName PN;

    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        PN.run();

        ros::spinOnce();
        loop_rate.sleep();
    }
}