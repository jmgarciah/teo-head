// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

#ifndef __CVBOTTLE_HPP__
#define __CVBOTTLE_HPP__

#include "SegmentorThread.hpp"
#include <NiTE.h>

#define DEFAULT_CROP_SELECTOR 0  // 1=true
#define DEFAULT_KINECT_DEVICE "OpenNI2DeviceServer"
#define DEFAULT_KINECT_LOCAL "/cv1"
#define DEFAULT_KINECT_REMOTE "/OpenNI2"
#define DEFAULT_WATCHDOG    2       // [s]

using namespace yarp::os;
using namespace yarp::sig;

namespace teo
{

/**
 * @ingroup cvBottle
 *
 * @brief Computer Vision Bottle.
 */
class CvBottle : public RFModule {
  private:
    SegmentorThread segmentorThread;
    //
    PolyDriver dd;
    IOpenNI2DeviceDriver *kinect;

    BufferedPort<ImageOf<PixelRgb> > outImg;
    Port outPort;

    int cropSelector;
    BufferedPort<ImageOf<PixelRgb> > outCropSelectorImg;
    Port inCropSelectorPort;

    bool interruptModule();
    double getPeriod();
    bool updateModule();
    double watchdog;

  public:
    bool configure(ResourceFinder &rf);
};

}  // namespace teo

#endif  // __CVBOTTLE_HPP__

