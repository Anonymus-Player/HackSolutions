#include <Io.hpp>

struct upair
{
    hsd::u64 first;
    hsd::u64 second;
};

int main()
{
    constexpr hsd::f128 zero = -0.323f;
    constexpr auto res = __builtin_bit_cast(upair, zero);
    hsd_println("hsd::f128: {} upair: ({}, {})", zero, res.first, res.second >> 15);
}