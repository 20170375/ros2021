#include <pub_subject.hpp>

namespace pub_subject
{
    PubSubject::PubSubject()
    {
        pub_subject_ = nh.advertise<std_msgs::String>("/my_subject", 100);
    }

    PubSubject::~PubSubject()
    {

    }

    void PubSubject::run()
    {
        std_msgs::String ss;

        ss.data = "sensor_motion_robot_engineering";

        pub_subject_.publish(ss);
    }
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "pub_subject");

    pub_subject::PubSubject PS;

    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        PS.run();

        ros::spinOnce();
        loop_rate.sleep();
    }
}