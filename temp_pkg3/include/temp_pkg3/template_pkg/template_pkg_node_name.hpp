#pragma once 

#include <ros/ros.h>

namespace ariitk::template_pkg_name {
class TemplatePkg {
    private:
        /* data */
    public:
        TemplatePkg(/* args */);
        ~TemplatePkg();
        void run();
        void init(ros::NodeHandle& );
};
} // namespace ariitk::template_pkg_name