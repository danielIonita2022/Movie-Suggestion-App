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
    {
        Storages::DB tableUser = Storages::getStorage();
        using namespace sqlite_orm;
        const std::vector<User> users = tableUser.get_all<User>();
        Instrumentor::Get().BeginSession("Profiling");
        analyzePasswUpperCaseCustom(users);
        analyzePasswUpperCaseRegex(users);
        analyzePasswLowerCaseCustom(users);
        analyzePasswLowerCaseRegex(users);
        analyzePasswDigitCustom(users);
        analyzePasswDigitRegex(users);
        Instrumentor::Get().EndSession();
    }
    App app;
    return 0;
}

//mergem pe cazul in care parola are nr corect de caractere si verificam doar uppercase, lowercase si isdigit

//uppercase basic
void analyzePasswUpperCaseCustom(const std::vector<User>& users)
{
    PROFILE_FUNCTION();
    uint16_t corecte = 0;
    uint16_t gresite = 0;
    for (size_t i = 0; i < users.size(); ++i)
    {
        if (PasswordValidator::CustomPasswordValidation::verifyUpperCase(users[i].GetPassword()))
        {
            corecte++;
        }
        else
        {
            gresite++;
        }
    }
    std::cout << "The number of correct passwords regarding upper case letter is " << corecte << "\n";
    std::cout << "The number of incorrect passwords regarding upper case letter is " << gresite << "\n";
}

//uppercase regex
void analyzePasswUpperCaseRegex(const std::vector<User>& users)
{
    PROFILE_FUNCTION();
    uint16_t corecte = 0;
    uint16_t gresite = 0;
    for (size_t i = 0; i < users.size(); ++i)
    {
        if (PasswordValidator::RegexPasswordValidation::verifyUpperCase(users[i].GetPassword()))
        {
            corecte++;
        }
        else
        {
            gresite++;
        }
    }
    std::cout << "The number of correct passwords regarding upper case letter is " << corecte << "\n";
    std::cout << "The number of incorrect passwords regarding upper case letter is " << gresite << "\n";
}

//lowercase basic
void analyzePasswLowerCaseCustom(const std::vector<User>& users)
{
    PROFILE_FUNCTION();
    uint16_t corecte = 0;
    uint16_t gresite = 0;
    for (size_t i = 0; i < users.size(); ++i)
    {
        if (PasswordValidator::CustomPasswordValidation::verifyLowerCase(users[i].GetPassword()))
        {
            corecte++;
        }
        else
        {
            gresite++;
        }
    }
    std::cout << "The number of correct passwords regarding lower case letter is " << corecte << "\n";
    std::cout << "The number of incorrect passwords regarding lower case letter is " << gresite << "\n";
}

//lowercase regex
void analyzePasswLowerCaseRegex(const std::vector<User>& users)
{
    PROFILE_FUNCTION();
    uint16_t corecte = 0;
    uint16_t gresite = 0;
    for (size_t i = 0; i < users.size(); ++i)
    {
        if (PasswordValidator::RegexPasswordValidation::verifyLowerCase(users[i].GetPassword()))
        {
            corecte++;
        }
        else
        {
            gresite++;
        }
    }
    std::cout << "The number of correct passwords regarding lower case letter is " << corecte << "\n";
    std::cout << "The number of incorrect passwords regarding lower case letter is " << gresite << "\n";
}

//isdigit basic
void analyzePasswDigitCustom(const std::vector<User>& users)
{
    PROFILE_FUNCTION();
    uint16_t corecte = 0;
    uint16_t gresite = 0;
    for (size_t i = 0; i < users.size(); ++i)
    {
        if (PasswordValidator::CustomPasswordValidation::verifyIsDigit(users[i].GetPassword()))
        {
            corecte++;
        }
        else
        {
            gresite++;
        }
    }
    std::cout << "The number of correct passwords regarding the digit is " << corecte << "\n";
    std::cout << "The number of incorrect passwords regarding the digit is " << gresite << "\n";
}

//isdigit regex
void analyzePasswDigitRegex(const std::vector<User>& users)
{
    PROFILE_FUNCTION();
    uint16_t corecte = 0;
    uint16_t gresite = 0;
    for (size_t i = 0; i < users.size(); ++i)
    {
        if (PasswordValidator::RegexPasswordValidation::verifyIsDigit(users[i].GetPassword()))
        {
            corecte++;
        }
        else
        {
            gresite++;
        }
    }
    std::cout << "The number of correct passwords regarding the digit is " << corecte << "\n";
    std::cout << "The number of incorrect passwords regarding the digit is " << gresite << "\n";
}
