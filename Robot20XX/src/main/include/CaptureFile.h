/*
 * Team 3229
 * CaptureFile.h
 */

#pragma once

#include "Debug.h"
#include <stdio.h>
#include <string>

class CaptureFile {

private:
    const int CHARSIZE = sizeof(char);
    const char* fileName;
    std::string str_filePath;
    FILE* fileHandle;
    bool isWrite;

public:
    CaptureFile();
    ~CaptureFile();
    void Open(std::string name, bool forWrite);
    void Close();
    void Read(void* buffer, int bufsize);
    void Write(void* buffer, int bufsize);
};
