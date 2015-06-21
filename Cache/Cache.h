#ifndef __CACHE_H_
#define __CACHE_H_

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stdlib.h>


using namespace std;

class Cache{
    public:
        Cache();
        ~Cache();
        bool RunTest();
        void DisplayResult();
        void ClearResult();
    private:
        vector<int8_t>    m_array;
        map<int32_t, double> m_result;
};

#endif
