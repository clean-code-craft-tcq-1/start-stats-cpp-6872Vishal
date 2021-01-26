#include <vector>

Class Stats
{
Public:
float average;
float min;
float max;
}

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&g );
}
