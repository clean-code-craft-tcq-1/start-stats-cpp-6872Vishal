#include <vector>

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
    bool emailSent = 0;
    void alretsystem()
    {
        //Send email
        emailSent = 1;
    }
};

class LEDAlert:public IAlerter
{
    public:
     bool ledGlows = 0;
     void alretsystem()
    {
        //Turn On LED
        ledGlows = 1;
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
    void alretsystem() = 0;
    void checkAndAlert(const std::vector<float>& );
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&g );
}
