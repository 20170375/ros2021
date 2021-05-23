#include <string_merger.hpp>

namespace string_merger
{
    StringMerger::StringMerger()
    {
        //todo
        pub_string_merger_ = nh.advertise<std_msgs::String>("/my_information", 100);
        
        sub_major_ = nh.subscribe("/my_major", 100, &StringMerger::callbackMajor, this);
        sub_subject_ = nh.subscribe("/my_subject", 100, &StringMerger::callbackSubject, this);
        sub_department_number_ = nh.subscribe("/my_department_number", 100, &StringMerger::callbackDepartmentNumber, this);
        sub_name_ = nh.subscribe("/my_name", 100, &StringMerger::callbackName, this);

        major_ok_ = false;
        subject_ok_ = false;
        department_number_ok_ = false;
        name_ok_ = false;
    }

    StringMerger::~StringMerger()
    {   

    }

    void StringMerger::callbackDepartmentNumber(const std_msgs::String::ConstPtr &ptr)
    {
        //todo
        department_number_ok_ = true;
        department_number_ = ptr->data;
    }

    void StringMerger::callbackMajor(const std_msgs::String::ConstPtr &ptr)
    {
        //todo
        major_ok_ = true;
        major_ = ptr->data;
    }

    void StringMerger::callbackName(const std_msgs::String::ConstPtr &ptr)
    {
        //todo
        name_ok_ = true;
        name_ = ptr->data;
    }

    void StringMerger::callbackSubject(const std_msgs::String::ConstPtr &ptr)
    {
        //todo
        subject_ok_ = true;
        subject_ = ptr->data;
    }

    void StringMerger::run()
    {
        if( !(department_number_ok_ && major_ok_ && name_ok_ && subject_ok_) ) return;

        //todo
        major_ok_ = false;
        subject_ok_ = false;
        department_number_ok_ = false;
        name_ok_ = false;

        std_msgs::String ss;

        ss.data = major_ + " / " + subject_ + " / " + department_number_ + " / " + name_;
        std::cout << ss.data << std::endl;

        pub_string_merger_.publish(ss);
    }
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "string_merger");

    string_merger::StringMerger SM;

    ros::Rate loop_rate(10);

    //todo
    while(ros::ok())
    {
        SM.run();

        ros::spinOnce();
        loop_rate.sleep();
    }
}