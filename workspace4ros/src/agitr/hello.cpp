// "hello world" no ROS.
// Define as classes padrões do ROS.
#include <ros/ros.h>

int main(int argc, char **argv) 
{
	// Inicializa o sistema do ROS.
	// Ultimo parametro é o nome padrão do nó.
	ros::init(argc, argv, "hello_ros");

	// Estabelece esse programa como um nó do ROS.
	ros::NodeHandle nh;

	// Manda algo como menssagem de log.
	ROS_INFO_STREAM("Hello, ROS!");
}

