#pragma once
#include "App.h"
#include "MoviePage.h"
#include "Instrumentor.h"
#include "PasswordValidator.h"
#include <iostream>

void analyzePasswUpperCaseCustom(const std::vector<User>& users);
void analyzePasswUpperCaseRegex(const std::vector<User>& users);
void analyzePasswLowerCaseCustom(const std::vector<User>& users);
void analyzePasswLowerCaseRegex(const std::vector<User>& users);
void analyzePasswDigitCustom(const std::vector<User>& users);
void analyzePasswDigitRegex(const std::vector<User>& users);

int main()
{
    App app;
    return 0;
}

