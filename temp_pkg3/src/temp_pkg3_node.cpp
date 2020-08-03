#include <temp_pkg3/temp_pkg3.hpp>

using namespace ariitk::temp_pkg3;

int main(int argc, char** argv) {
    ros::init(argc, argv, "temp_pkg3_node");
    ros::NodeHandle nh;

    TemplatePkg obj;

    obj.init(nh);

    ros::Rate loop_rate(10);

    while(ros::ok()) {
        ros::spinOnce();
        obj.run();
        loop_rate.sleep();
    }

    return 0;
} 