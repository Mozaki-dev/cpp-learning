#pragma once

#include "error_code.hpp"

namespace EmbeddedCpp
{


int clamp(int value, int min, int max);
ErrorCode validateRange(int value, int min, int max);

}
