#ifndef FIND_H
#define FIND_H
#include <list>
#include <functional>

namespace forge {
    template<typename T>
    std::list<size_t> find(std::function<bool (const T& value)> func,
            const T values[], size_t N)
    {
        std::list<size_t> res;
        for (size_t i = 0; i < N; ++i)
            if (func(values[i]))
                res.push_back(i);

        return res;
    }

    template<typename T>
    size_t findFirst(std::function<bool (const T& value)> func,
            const T values[], size_t N)
    {
        for (size_t i = 0; i < N; ++i)
            if (func(values[i]))
                return i;
    }
}

#endif //FIND_H
