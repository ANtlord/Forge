#ifndef JOIN_H
#define JOIN_H
#include <string>

namespace forge {
    /** \brief * Method joins array of strings to one string.
     * 
     * \param values[] const std::string&
     * \param n size_t
     * \param separator const char*
     * \return std::string
     */
    std::string join(const std::string values[], size_t n, const char* separator);
} /* forge */ 
#endif //JOIN_H
