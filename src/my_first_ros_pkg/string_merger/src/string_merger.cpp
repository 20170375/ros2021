#include <string_merger.hpp>

namespace string_merger
{
    StringMerger::StringMerger()
    {
        //todo

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
    }

    void StringMerger::callbackMajor(const std_msgs::String::ConstPtr &ptr)
    {
        //todo
        major_ok_ = true;
    }

    void StringMerger::callbackName(const std_msgs::String::ConstPtr &ptr)
    {
        //todo
        name_ok_ = true;
    }

    void StringMerger::callbackSubject(const std_msgs::String::ConstPtr &ptr)
    {
        //todo
        subject_ok_ = true;
    }

    void StringMerger::run()
    {
        if( !(department_number_ok_ && major_ok_ && name_ok_ && subject_ok_) ) return;

        //todo
    }
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "string_merger");

    string_merger::StringMerger SM;

    ros::Rate loop_rate(10);

    //todo
}