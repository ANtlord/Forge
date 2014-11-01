#ifndef TRIM_H
#define TRIM_H
#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>

namespace forge {
    inline std::string &ltrim(std::string &s);
    inline std::string &rtrim(std::string &s);
    inline std::string &trim(std::string &s);
}
#endif //TRIM_H
