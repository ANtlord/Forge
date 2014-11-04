#ifndef EACH_H
#define EACH_H

#include <functional>
#include <vector>

namespace forge {
    template<typename T, typename ResType>
    std::vector<ResType> each(std::function<ResType (const T& value)> func,
        const std::vector<T>& array)
    {
        std::vector<ResType> items;
        for(uint32_t i=0; i<array.size(); ++i) {
            items.push_back(func(array.at(i)));
        }
        return items;
    }

    template<typename T>
    void each(std::function<void (const T& value)> func,
        const std::vector<T>& array)
    {
        for(uint32_t i=0; i<array.size(); ++i) {
            func(array.at(i));
        }
    }


    template<typename T>
    void each(std::function<void (T& value)> func,
        std::vector<T>& array)
    {
        for(uint32_t i=0; i<array.size(); ++i) {
            func(array.at(i));
        }
    }

}

#endif //EACH_H
