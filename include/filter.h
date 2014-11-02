#ifndef FILTER_H
#define FILTER_H
#include <functional>
#include <vector>
#include <string>

namespace forge {
    template<typename T>
    std::vector<T> filter(std::function<bool (const T& value)> func,
        const std::vector<T>& array)
    {
        std::vector<T> items;
        for(T item: array) {
            if (func(item)){
                items.push_back(item);
            }
        }
        return items;
    }

}

#endif //FILTER_H
