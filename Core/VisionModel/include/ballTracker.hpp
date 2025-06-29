/*
//Class to track the ball in play
*/
#pragma once
#include <Tracker.hpp>
#include <ObjectTypes.hpp>
namespace Core{
    namespace Tracking{
        class BallTracker : Tracker<6,OBJECT_TYPES::BALL>{
            private:
            
            bool _didBounce = false;
            unsigned _bounceCountSinceUpdate = 0;
            size_t _focusId;
            ballData _frame;
            ballData _prevFrameBuf[10];

            public:

            BallTracker();
            ~BallTracker() = default;
            ballData getFocusData();
            bool getDidBounce();
            location* getLocations() override;
            size_t getNumDetect() override;
            void parseFrame(cv::Mat frame) override;
            bool isActiveInFOV();
        };
    }
}