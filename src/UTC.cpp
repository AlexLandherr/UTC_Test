#include "include/UTC.h"
#include <chrono>
#include <string>
#include <format>

namespace UTC {
    std::string UTC_string() {
        std::chrono::utc_clock::time_point UTC_now = std::chrono::utc_clock::now();
        /*Use the below to floor the seconds component to integer seconds:
        std::chrono::utc_clock::time_point UTC_now = std::chrono::floor<std::chrono::seconds>(std::chrono::utc_clock::now())
        */
        std::string utc_string = std::format("{:%F %T %Z}", UTC_now);
        return utc_string;
    }
}