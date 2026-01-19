#ifndef COMMANDS_H
#define COMMANDS_H

#include <vector>
#include <string>

void cmdPwd();
void cmdCd(const std::vector<std::string>& args);
void cmdLs();
void cmdMkdir(const std::vector<std::string>& args);
void cmdRm(const std::vector<std::string>& args);

#endif
