#ifndef SPLIT_H
#define SPLIT_H
#include <string>
#include <vector>

namespace forge {
    std::vector<std::string> split(const std::string &value, char delimeter = ' ');
}
#endif //SPLIT_H
