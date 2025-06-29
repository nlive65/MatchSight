

#include<multiModalLogger.hpp>
#include<stdarg.h>
#include<cstdio>
#include<iostream>
using namespace util;

MultiModalLogger::MultiModalLogger(const char* mode) : _fileName(mode){

};

void MultiModalLogger::debug(const char* format,...){
    char buffer[MAXBUFFER_SIZE];//Look into this for potential vuln
    va_list arg;
    va_start(arg,format);
    
    vsprintf(buffer,format,arg);
    
    std::cout << _cDEBUG << "[DEBUG] " << buffer << _cDEBUG << std::endl;

    va_end(arg);
};

void MultiModalLogger::info(const char* format,...){
    char buffer[MAXBUFFER_SIZE];//Look into this for potential vuln
    va_list arg;
    va_start(arg,format);
    
    vsprintf(buffer,format,arg);
    
    std::cout << _cINFO << "[INFO] " << buffer << _cINFO << std::endl;

    va_end(arg);
};

void MultiModalLogger::warn(const char* format,...){
    char buffer[MAXBUFFER_SIZE];//Look into this for potential vuln
    va_list arg;
    va_start(arg,format);
    
    vsprintf(buffer,format,arg);
    
    std::cout << _cWARN << "[WARN] " << buffer << _cWARN << std::endl;

    va_end(arg);
};

void MultiModalLogger::error(const char* format,...){
    char buffer[MAXBUFFER_SIZE];//Look into this for potential vuln
    va_list arg;
    va_start(arg,format);
    
    vsprintf(buffer,format,arg);
    
    std::cout << _cERROR << "[ERROR] " << buffer << _cERROR << std::endl;

    va_end(arg);
};

void MultiModalLogger::fatal(const char* format,...){
    char buffer[MAXBUFFER_SIZE];//Look into this for potential vuln
    va_list arg;
    va_start(arg,format);
    
    vsprintf(buffer,format,arg);
    
    std::cout << _cFATAL << "[FATAL] " << buffer << _cFATAL << std::endl;

    va_end(arg);
};

