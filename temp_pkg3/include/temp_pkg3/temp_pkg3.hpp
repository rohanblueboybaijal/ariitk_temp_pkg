#pragma once 

#include <ros/ros.h>

namespace ariitk::temp_pkg3 {
class TemplatePkg {
    private:
        /* data */
    public:
        TemplatePkg(/* args */);
        ~TemplatePkg();
        void run();
        void init(ros::NodeHandle& );
};
} // namespace ariitk::temp_pkg3