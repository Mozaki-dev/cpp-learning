#include <iostream>
#include <array>

#include "embedded_cpp/utility.hpp"
#include "embedded_cpp/library_info.hpp"

int main()
{
    std::cout << "EmbeddedCppFramework v"
              << EmbeddedCpp::LibraryInfo::Major << "."
              << EmbeddedCpp::LibraryInfo::Minor << "."
              << EmbeddedCpp::LibraryInfo::Patch << '\n';

    int value{EmbeddedCpp::clamp(150, 0, 100)};

    std::cout << value << '\n';

    if (EmbeddedCpp::validateRange(150, 0, 100) == EmbeddedCpp::ErrorCode::OutOfRange)
    {
        std::cout << "Out of range\n";
    }

    std::array<int, 5> values{10, 50, 120, -10, 80};

    auto classify = [](int value)
    {
        if (value >= 80)
        {
            return "High";
        }
        else
        {
            return "Normal";
        }
    };

    for (const auto& value : values)
    {
        int clampedValue{EmbeddedCpp::clamp(value, 0, 100)};
        std::cout << clampedValue << "/" << classify(clampedValue) << '\n';
    }

    return 0;
}