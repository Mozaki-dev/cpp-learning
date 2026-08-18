#include "embedded_cpp/utility.hpp"

namespace EmbeddedCpp
{

int clamp(int value, int min, int max)
{
    if (value < min)
    {
        return min;
    }
    else if (value > max)
    {
        return max;
    }
    else
    {
        return value;
    }
}

ErrorCode validateRange(int value, int min, int max)
{
    if (min > max)
    {
        return ErrorCode::InvalidArgument;
    }
    else if ((value < min) || (value > max))
    {
        return ErrorCode::OutOfRange;
    }
    else
    {
        return ErrorCode::Ok;
    }
}

}