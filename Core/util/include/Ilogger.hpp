/*
//Class definitions for logging capabilities 
*/

#pragma once

namespace util
{
    class ILogger{
        public:
        ILogger(){};
        ILogger(const char* mode){};
        ~ILogger() = default;
        virtual void debug(const char* format,...) = 0;

        virtual void info(const char* format,...) = 0;

        virtual void warn(const char* format,...) = 0;

        virtual void error(const char* format,...) = 0;

        virtual void fatal(const char* format,...) = 0;
        
    };
} // namespace util
