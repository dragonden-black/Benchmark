#include "Cache.h"
#include <sys/time.h>

#include "../Common/Constants.h"


Cache::Cache()
{
}

Cache::~Cache()
{
}

bool Cache::RunTest()
{
    int32_t array_size  = 1;
    struct timeval start_time;
    struct timeval end_time;
    m_array.resize(MAX_ARRAY_SIZE);
    while (array_size <= MAX_ARRAY_SIZE){
        gettimeofday(&start_time, nullptr);
        for (auto it = 0; it <= TOTAL_ITERATIONS; it++){
            for (auto it_size = 0; it_size <= array_size; it_size++){
                m_array[it_size] = it_size%(2^8);
                int temp = m_array[it_size];
            }
        }
        gettimeofday(&end_time, nullptr);
        m_result[array_size] = (double)(end_time.tv_usec - start_time.tv_usec)/1000000 + (double)(end_time.tv_sec - start_time.tv_sec);
        array_size *= 2;
    }
}

void Cache::DisplayResult()
{
    for (auto it = m_result.begin(); it!= m_result.end(); it++){
        cout << "Data Size: " << it->first << " bytes and time taken: " << it->second << endl;
    }
}

void Cache::ClearResult()
{
}
