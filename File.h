#ifndef FILE_H
#define FILE_H

#include <string>
#include <iostream>
#include "Date.h"

using namespace std;

class File{
    private:
        string name;
        string content;
        Date date;

    public:
        File(string name, string content, Date& date);

        bool lessThan(Date& date);
        void print();
        void printContents();

    

};

#endif