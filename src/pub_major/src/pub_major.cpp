#include <pub_major.hpp>

namespace pub_major
{
    PubMajor::PubMajor()
    {
        pub_major_ = nh.advertise<std_msgs::String>("/my_major", 100);
    }

    PubMajor::~PubMajor()
    {

    }

    void PubMajor::run()
    {
        std_msgs::String ss;

        ss.data = "AI Convergence";

        pub_major_.publish(ss);
    }
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "pub_major");

    pub_major::PubMajor PM;

    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        PM.run();

        ros::spinOnce();
        loop_rate.sleep();
    }
}