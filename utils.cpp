#include "utils.h"
#include <unistd.h>
#include <string.h>

std::string getCurrentDirName() {
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));

    char* last = strrchr(cwd, '/');
    return last ? last + 1 : cwd;
}
