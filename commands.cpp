#include "commands.h"
#include <iostream>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

using namespace std;

void cmdPwd() {
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    cout << cwd;
}

void cmdCd(const vector<string>& args) {
    if (args.size() < 2) {
        cerr << "cd: missing argument";
        return;
    }
    if (chdir(args[1].c_str()) != 0) {
        perror("cd");
    }
}

void cmdLs() {
    DIR* dir = opendir(".");
    if (!dir) {
        perror("ls");
        return;
    }

    dirent* entry;
    while ((entry = readdir(dir)) != nullptr) {
        cout << entry->d_name << "\t";
    }
    closedir(dir);
}

void cmdMkdir(const vector<string>& args) {
    if (args.size() < 2) {
        cerr << "mkdir: missing argument";
        return;
    }
    if (mkdir(args[1].c_str(), 0755) != 0) {
        perror("mkdir");
    }
}

void cmdRm(const vector<string>& args) {
    if (args.size() < 2) {
        cerr << "rm: missing argument";
        return;
    }
    if (remove(args[1].c_str()) != 0) {
        perror("rm");
    }
}
