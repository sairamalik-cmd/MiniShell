#include "parser.h"
#include <sstream>

std::vector<std::string> parseInput(const std::string& input) {
    std::vector<std::string> args;
    std::stringstream ss(input);
    std::string token;

    while (ss >> token) {
        args.push_back(token);
    }

    return args;
}
