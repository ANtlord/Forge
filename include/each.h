#ifndef EACH_H
#define EACH_H

#include <iostream>
#include <functional>
#include <vector>

namespace forge {
    /** \brief Method run over specified vector, makes specified function,
     * saves result of this function to result vector and returns it.
     */
    template<typename T, typename ResType>
    std::vector<ResType> each(std::function<ResType (const T& value)> func,
        const std::vector<T>& array)
    {
        std::vector<ResType> items;
        for (auto it = array.begin(); it != array.end(); ++it) {
            items.push_back(func(*it));
        }
        return items;
    }

    /** \brief Method run over specified vector and makes specified function
     * without changing specified vector.
     */
    template<typename T>
    void each(std::function<void (const T& value)> func,
        const std::vector<T>& array)
    {
        for (auto it = array.begin(); it != array.end(); ++it) {
            func(*it);
        }
    }


    /** \brief Method run over specified vector and makes specified function
     * with changing specified vector.
     */
    template<typename T>
    void each(std::function<void (T& value)> func,
        std::vector<T>& array)
    {
        for (auto it = array.begin(); it != array.end(); ++it) {
            func((*it));
        }
    }

    /** \brief Method run over specified array and makes specified function
     * with changing specified vector.
     */
    template<typename T>
    void each(std::function<void (T& value)> func, T array[], uint32_t n)
    {
        for(uint32_t i=0; i<n; ++i) {
            func(array[i]);
        }
    }
}

#endif //EACH_H
