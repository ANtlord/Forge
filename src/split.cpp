#include "../include/split.h"

using namespace std;

namespace forge {
    vector<string> split(const string &value, char delimeter = ' ')
    {
        vector<string> result;

        uint32_t oldPos = 0;
        uint32_t newPos = 0;

        while ((newPos = value.find(delimeter), oldPos) != string::npos) {
            result.push_back( value.substr(oldPos, (newPos - oldPos)) );
            oldPos = newPos;
        }
        return result;
    }
}
