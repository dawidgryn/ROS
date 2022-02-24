#pragma once

#include <ros/ros.h>

namespace smb_highlevel_controller {

/*!
 * Class containing the Husky Highlevel Controller
 */
class SmbHighlevelController {
public:
	/*!
	 * Constructor.
	 */
	SmbHighlevelController(ros::NodeHandle& nodeHandle)
	{
		nodeHandle_getParam(topic_name, this->topic)
		nodeHandle_getParam(queue, this->qs)
		this->subscriber = this->nodeHandle_.subscribe(this ->topic, this ->qs, &SmbHighlevelController::Callback, this);
	};

	/*!
	 * Destructor.
	 */
	virtual ~SmbHighlevelController();
	void Callback()
	{


	}; input message print distance

	ros::Subscriber
	 	
private:
	std::string topic;
	int: qs;
	ros::NodeHandle nodeHandle_;
	ros::Subscriber subscriber;
};

} /* namespace */
