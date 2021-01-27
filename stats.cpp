#include "stats.h"
#include <math.h>

Stats Statistics::ComputeStatistics(const std::vector<float>&g ) {
    //Implement statistics here
    Stats tempstats;
    float Max,Min,avg = 0;
    int Maxsize = g.size();
    
    if(Maxsize != NULL)
    {
    Max = Min = g[0];
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
    tempstats.average = avg;
    tempstats.min = Min;
    tempstats.max = Max;
    
    return tempstats;
    }
    else
    {
    tempstats.average = NAN;
    tempstats.min = NAN;
    tempstats.max = NAN;
    }
}

void StatsAlerter::checkAndAlert(const std::vector<float>&InputValues)
{
    for(auto i = InputValues.begin();i != InputValues.end();i++)
    {
        if(*i >= Max_value)
        {
           Alert[0]->alertsystem();
           Alert[1]->alertsystem();
            break;
        }
    }
}
