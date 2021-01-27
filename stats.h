#include <vector>

class Stats
{
public:
float average;
float min;
float max;
};

class IAlerter{};

class EmailAlert
{
    public:
    bool emailSent;
};

class LEDAlert
{
    public:
    bool ledGlows;
};

class StatsAlerter
{
    private :
    float Max_value;
 public:
    StatsAlerter(const float Max_value,const std::vector<IAlerter**> Alert);
    void checkAndAlert(const std::vector<float>&value);
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&g );
}
