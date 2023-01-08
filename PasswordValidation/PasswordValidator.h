#pragma once

#include <string>
#include <regex>


namespace PasswordValidator {

    bool verifySize(std::string password)
    {
        if (password.size() < 8)
        {
            // std::cout << "The password is too short!\nPlease try again.\n";
            return false;
        }
        return true;
    }

    namespace CustomPasswordValidation {

        bool verifyUpperCase(std::string password, bool ok)
        {
            for (int i = 0; i < password.size(); i++)
            {
                if (isupper(password[i]))
                    ok = true;
            }
            if (ok == false) return false;
        }

        bool verifyLowerCase(std::string password, bool ok)
        {
            for (int i = 0; i < password.size(); i++)
            {
                if (islower(password[i]))
                    ok = 1;
            }
            if (ok == 0) return false;
        }

        bool verifyIsDigit(std::string password, bool ok)
        {
            for (int i = 0; i < password.size(); i++)
            {
                if (isdigit(password[i]))
                    ok = 1;
            }
            if (ok == 0) return false;
        }

        bool passwordValidation(std::string password)
        {
            if (PasswordValidator::verifySize(password) == false) return false;
            
            bool ok = 0;

            if (verifyUpperCase(password,ok) == false) return false;

            if (verifyLowerCase(password,ok) == false) return false;

            if (verifyIsDigit(password,ok) == false) return false;

            // std::cout << "The password is valid!\n";
            return true;
            
        }
    }

    
}
