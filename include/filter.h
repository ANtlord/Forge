#ifndef FILTER_H
#define FILTER_H
#include <functional>
#include <vector>

namespace forge {
    /**
        Methods filters specified vector by specified function and returns
        results.
     */
    template<typename T>
    std::vector<T> filter(std::function<bool (const T& value)> func,
        const std::vector<T>& array)
    {
        std::vector<T> items;
        for(uint32_t i=0; i<array.size(); ++i) {
            if (func(array.at(i))){
                items.push_back(array.at(i));
            }
        }
        return items;
    }

}

#endif //FILTER_H
