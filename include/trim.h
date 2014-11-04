#ifndef TRIM_H
#define TRIM_H
#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>

namespace forge {
    std::string &ltrim(std::string &s);
    std::string &rtrim(std::string &s);
    std::string &trim(std::string &s);
}
#endif //TRIM_H
