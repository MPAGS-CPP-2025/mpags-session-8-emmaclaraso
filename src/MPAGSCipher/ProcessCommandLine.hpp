#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

/**
 * \file ProcessCommandLine.hpp
 * \brief Contains the declaration of the function for processing the command-line arguments
 */

/**
 * \brief Processes the command-line arguments and modifies accordingly the program settings
 *
 * \param ProgramSettings Struct that holds all the command-line information
 * \return true if the arguments could be successfully parsed, false otherwise
 */

struct ProgramSettings{
    bool helpRequested{false};
    bool versionRequested{false};
    std::string inputFile{}; 
    std::string outputFile{};
    std::string cipherKey{};
    bool encrypt{true};
}; 

bool processCommandLine(const std::vector<std::string>& cmdLineArgs,
                        ProgramSettings);

#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
