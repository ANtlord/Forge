#include "../include/filter.h"
#include <iostream>
using std::string;
namespace forge {
    void filter(std::function<bool (char &value)> func, string &value)
    {
        for (auto it = value.begin(); it != value.end(); ++it) {
            if (!func(*it)) {
                value.erase(it);
                --it;
            }
        }
    }
}
