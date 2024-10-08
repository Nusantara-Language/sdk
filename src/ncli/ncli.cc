/**
 * @file ncli.cc
 * @brief Implementation of Nusantara Command Line Interface (NCli)
 *
 * This file contains the implementation of the NCli class that handles the command-line interface
 * for the Nusantara program. This class processes command-line arguments and
 * displays program information.
 */

#include <iostream>
#include <span>

#include "ncli/ncli.hh"
#include "configs/app.hh"

/**
 * @brief NCli Constructor
 * @param argc Number of command-line arguments
 * @param argv Array of pointers to command-line argument strings
 *
 * This constructor initializes the NCli object, processes command-line arguments,
 * and displays program information and received arguments.
 */
NCli::NCli(const int& argc, const char**& argv) {

    std::cout << "Program now running with Nusantara command-line interface..." << "\n\n";

    auto args = std::span(argv, size_t(argc));

    // Store arguments in a vector
    for(size_t i = 0; i < size_t(argc); ++i) {
        this->arguments.emplace_back(args[i]);
    }

    // Display program information
    std::cout << "Name: " << PROGRAM_NAME << "\n";
    std::cout << "Version: " << PROGRAM_VERSION << "\n";
    std::cout << "Creator: " << PROGRAM_CREATOR << "\n\n";

    // Display argument count and list
    std::cout << "Argument Count: " << this->arguments.size() << "\n";
    if(this->arguments.size() > 0) {
        std::cout << "Arguments:\n";
        for(const auto& argument : this->arguments) {
            std::cout << " - " << argument << "\n";
        }
    }

    std::cout << "\n";
}