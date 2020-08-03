#include <temp_pkg1/temp_pkg1.hpp>

using namespace ariitk::temp_pkg1;

int main(int argc, char** argv) {
    ros::init(argc, argv, "temp_pkg1_node");
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