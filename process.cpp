#include "process.h"
#include <unistd.h>
#include <sys/wait.h>
#include <iostream>

using namespace std;

void executeExternalCommand(const vector<string>& args) {
    pid_t pid = fork();

    if (pid == 0) {
        vector<char*> cargs;
        for (const auto& arg : args) {
            cargs.push_back(const_cast<char*>(arg.c_str()));
        }
        cargs.push_back(nullptr);

        execvp(cargs[0], cargs.data());
        perror("command not found");
        exit(1);
    } else if (pid > 0) {
        wait(nullptr);
    } else {
        perror("fork failed");
    }
}
