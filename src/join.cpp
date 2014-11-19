#include "../include/join.h"

namespace forge {
    std::string join(const std::string values[], const size_t n, const char* separator)
    {
        std::string result = "";
        for (size_t i = 0; i < n; ++i) {
            result += (values[i]);
            if (i != n-1) result += separator;
        }
        return result;
    }
}
