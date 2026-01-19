#include <iostream>
#include <string>
#include <vector>

#include "parser.h"
#include "commands.h"
#include "process.h"
#include "utils.h"

using namespace std;

int main() {
    string input;

    cout << "==================== MiniShell ====================\n";
    cout << "Type 'exit' to quit the shell\n";

    while (true) {
        cout << "MiniShell>" << getCurrentDirName() << "> ";

        if (!getline(cin, input)) {
            cout << "\nExiting MiniShell...\n";
            break;
        }

        if (input.empty()) continue;

        vector<string> args = parseInput(input);
        if (args.empty()) continue;

        if (args[0] == "exit") {
            cout << "Exiting MiniShell...\n";
            break;
        } else if (args[0] == "pwd") {
            cmdPwd();
        } else if (args[0] == "cd") {
            cmdCd(args);
        } else if (args[0] == "ls") {
            cmdLs();
        } else if (args[0] == "mkdir") {
            cmdMkdir(args);
        } else if (args[0] == "rm") {
            cmdRm(args);
        } else {
            executeExternalCommand(args);
        }

        cout << "\n";
    }

    cout << "Thank you for using MiniShell!\n";
    return 0;
}
