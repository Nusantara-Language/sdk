/**
 * @file main.cc
 * @brief Main file for the NCli application
 * 
 * This file contains the main function that initializes and runs
 * the NCli (Command Line Interface) application.
 */

#include "ncli/ncli.hh"

/**
 * @brief Main function of the program
 * 
 * This function is the main entry point of the program. It initializes
 * the NCli object with command line arguments and runs the application.
 * 
 * @param argc Number of command line arguments
 * @param argv Array of command line argument strings
 * @return int Program status code (0 for success)
*/
int main(int argc, const char** argv) {
    NCli cli(argc, argv);
    return 0;
}