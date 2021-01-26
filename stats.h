#include <vector>

class Stats
{
public:
float average;
float min;
float max;
};

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

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&g );
}
