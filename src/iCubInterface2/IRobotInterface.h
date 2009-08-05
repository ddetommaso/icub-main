// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

#ifndef __IROBOTINTERFACE__
#define __IROBOTINTERFACE__

#include <yarp/os/Property.h>

class IRobotInterface
{
public:
    virtual ~IRobotInterface(){};
    virtual bool initialize(yarp::os::Property& options)=0;

    /**
    * Closes all robot devices.
    */
    virtual bool finalize()=0;

    /**
    * Park the robot. This function can be blocking or not depending on 
    * the value of the parameter wait.
    * @param wait if true the function blocks and returns only when parking is finished
    */
    virtual void park(bool wait=true)=0;

    virtual void abort()=0;
};

#endif
