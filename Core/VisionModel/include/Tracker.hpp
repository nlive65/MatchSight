/*
/Interface that is a base component to the object trackers
*/
#pragma once
#include <opencv2/opencv.hpp>
#include <stdint.h>
#include <ObjectTypes.hpp>

namespace Core{
    namespace Tracking{
        template<size_t numObj, OBJECT_TYPES obj>
        class Tracker{
            protected:
            
            unsigned _numDetections[numObj] = 0;
            location _locations[numObj] = 0;
            

            public:

            Tracker<numObj,obj>() {};

            ~Tracker<numObj,obj>() = default;

            virtual location* getLocations() = 0;

            virtual size_t getNumDetect() = 0;

            virtual void parseFrame(cv::Mat frame);
        };


        //Forward declare interface used tracking constraints
        template class Tracker<6,OBJECT_TYPES::BALL>;
        template class Tracker<1,OBJECT_TYPES::COURT>;
        template class Tracker<2,OBJECT_TYPES::PLAYER>;
    }//Tracking
}//Core
