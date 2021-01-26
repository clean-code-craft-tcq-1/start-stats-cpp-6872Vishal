#include <vector>

class Stats
{
public:
float average;
float min;
float max;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&g );
}
