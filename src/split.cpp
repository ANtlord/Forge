#include "../include/split.h"
#include <iostream>
using namespace std;

namespace forge {
    vector<string> split(const string &value, char delimeter)
    {
        vector<string> result;

        string::size_type oldPos = 0;
        string::size_type newPos = 0;

        int i = 0;
        bool flag = true;
        while ((newPos = value.find(delimeter, oldPos)) != string::npos) {
            result.push_back( value.substr(oldPos, (newPos - oldPos)) );
            oldPos = newPos+1;
        }
        result.push_back( value.substr(oldPos, (value.size() - oldPos)) );
        return result;
    }
}
