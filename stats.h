#include <vector>
#include <stdbool.h>

class Stats
{
public:
float average;
float min;
float max;
};

class IAlerter{
public:
    virtual void alretsystem() = 0;
};

class EmailAlert:public IAlerter
{
   public:
    bool emailSent;
    void alretsystem()
    {
        //Send email
        emailSent = TRUE;
    }
};

class LEDAlert:public IAlerter
{
    public:
     bool ledGlows;
     void alretsystem()
    {
        //Turn On LED
        ledGlows = TRUE;
    }
};

class StatsAlerter:public IAlerter
{
   public:
    float Max_value;
    std::vector<IAlerter*> Alert;
    StatsAlerter(const float &M,std::vector<IAlerter*> &A)
    {
    Max_value = M;
    Alert = A;
    }
    void checkAndAlert(const std::vector<float>& );
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&g );
}
