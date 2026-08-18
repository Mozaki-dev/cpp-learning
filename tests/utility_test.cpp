#include <cassert>

#include "embedded_cpp/utility.hpp"

int main()
{
    assert(EmbeddedCpp::clamp(50, 0, 100) == 50);
    assert(EmbeddedCpp::clamp(150, 0, 100) == 100);
    assert(EmbeddedCpp::clamp(-10, 0, 100) == 0);

    assert(EmbeddedCpp::validateRange(50, 0, 100) == EmbeddedCpp::ErrorCode::Ok);
    assert(EmbeddedCpp::validateRange(150, 0, 100) == EmbeddedCpp::ErrorCode::OutOfRange);
    assert(EmbeddedCpp::validateRange(50, 100, 0) == EmbeddedCpp::ErrorCode::InvalidArgument);

    return 0;
}