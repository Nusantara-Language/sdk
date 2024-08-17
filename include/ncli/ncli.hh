/**
 * @file ncli.hh
 * @brief Definition of the NCli class for handling command line arguments.
 */

#pragma once

#include <string>
#include <vector>

/**
 * @class NCli
 * @brief Class for managing and processing command line arguments.
 */
class NCli {

    private:
        /**
         * @brief Vector to store command line arguments.
         */
        std::vector<std::string> arguments;

    public:
        /**
         * @brief Constructor to create an NCli object.
         * @param argc Number of command line arguments.
         * @param argv Array of command line argument strings.
         */
        NCli(const int& argc, const char**& argv);
        
};