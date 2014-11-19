#ifndef JOIN_H
#define JOIN_H
#include <string>
#include <vector>
#include <list>
namespace forge {
        
    /** \brief * Method joins array of strings to one string.
     * 
     * \param values[] std::string
     * \param n size_t
     * \return std::string
     */
    std::string join(std::string values[], size_t n);
} /* forge */ 
#endif //JOIN_H
