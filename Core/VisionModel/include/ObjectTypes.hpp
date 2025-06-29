/*
//File with enumerable type for object classifications
*/
#pragma once
namespace Core{
    using location = double[2]; //Look into how to get the bounce logic

    namespace Tracking{
        enum OBJECT_TYPES{
            PLAYER,
            BALL,
            COURT
        };

        typedef struct{
            bool didBounce;
            location position;
            bool isFocus;
            
        }ballData;
    }//Tracking
}//Core