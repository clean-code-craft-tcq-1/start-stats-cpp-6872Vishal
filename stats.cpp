#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>&g ) {
    //Implement statistics here
    float Max,Min,avg = 0;
    int Maxsize = g.size();
    
    Max = Min = g.begin();
    for(auto i= g.begin();i != g.end(); i++)
    {
        if(Max < *i)
        {
            Max = *i;
        }
        if(Min > *i)
        {
            Min = *i;
        }
        avg = avg + *i;
    }
    
    avg = avg/Maxsize;
}
