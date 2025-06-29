/*
// Class That prints to console and writes to file
*/

#pragma once
#include <Ilogger.hpp>

namespace util{
    static const size_t MAXBUFFER_SIZE = 256;
    class MultiModalLogger: ILogger{
        private:
        const char* _fileName;
        
        using ESC_COLOR = const char *;

        ESC_COLOR _cDEBUG = "\195";
        ESC_COLOR _cINFO = "\040";
        ESC_COLOR _cWARN = "\190";
        ESC_COLOR _cERROR = "\196";
        ESC_COLOR _cFATAL = "\199";

    
        public:
        MultiModalLogger(const char* mode);
        
        ~MultiModalLogger() = default;

        void debug(const char* format,...) override;
        
        void info(const char* format,...) override;

        void warn(const char* format,...) override;

        void error(const char* format,...) override;

        void fatal(const char* format,...) override;
    };
}