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
    auto emailSent;
};

class LEDAlert
{
    public:
    auto ledGlows;
};

class StatsAlerter
{
 public:
    StatsAlerter(int x,const std::vector<IAlerter> Alert);
    checkAndAlert(const std::vector<float>&value);
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&g );
}
