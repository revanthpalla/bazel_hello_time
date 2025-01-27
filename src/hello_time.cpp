#include "hello_time.h"

long long get_epoch_time_ms()
{
    using namespace std::chrono;
    auto now = system_clock::now();
    auto duration = now.time_since_epoch();
    auto millis = duration_cast<milliseconds>(duration).count();
    return millis;
}

// int main()
// {
//     std::cout << get_epoch_time_ms() << std::endl;
//     return 0;
// }