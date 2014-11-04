#ifndef EACH_H
#define EACH_H

#include <functional>
#include <vector>

namespace forge {
    /**
        Method run over specified vector, makes specified function, saves
        result of this function to result vector and returns it.
     */
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

    /**
        Method run over specified vector and makes specified function without
        changing specified vector.
     */
    template<typename T>
    void each(std::function<void (const T& value)> func,
        const std::vector<T>& array)
    {
        for(uint32_t i=0; i<array.size(); ++i) {
            func(array.at(i));
        }
    }


    /**
        Method run over specified vector and makes specified function with
        changing specified vector.
     */
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
