#include "Utility.h"
#include "def.h"

#include <iostream>
#include <cstring>
#include <vector>



bool Utility::checkName(const char name[SIZE]) {
    int res = 0;
    for (int i = 0; name[i] != '\0'; ++i) {
        if (name[i] == ' ') {
            ++res;
        }
    }
    return res == 1;
}

bool Utility::checkYearsOfExperience(int num) {
    return (num <= 50 && num >= 1);
}

bool Utility::checkSpecialization(const char arr[SIZE]) {
    std::vector<const char*> sp = {"Cardiologist", 
                             "Psychiatrist", 
                             "Neurologist", 
                             "Surgeon",
                             "Dentist",};
    for (int i = 0; i < sp.size(); ++i) {
        if (strcmp(arr, sp[i]) == 0) {
            return true;
        }
    }
    return false;
}

bool Utility::checkGender(const char arr[SIZE]) {
    if ((strcmp(arr, "Male") == 0 || strcmp(arr, "Female") == 0)) {
        return true;
    }
    return false;
}


bool Utility::checkDateOfBirth(const char arr[SIZE]) {
    int count = 0;
    for (int i = 0; arr[i] != '\0'; ++i) {
        ++count;
    }
    if (count != 10) {
        return false;
    }
    if (arr[2] != '/' || arr[5] != '/') {
        return false;
    }
    char day[2] = {arr[0], arr[1]};
    int resultDay = (day[0] - '0') * 10 + (day[1] - '0');
    char month[2] = {arr[3], arr[4]};
    int resultMonth = (month[0] - '0') * 10 + (month[1] - '0');
    char year[4] = {arr[6], arr[7], arr[8], arr[9]};
    int resultYear = 0;
    for (int i = 0; i < 4; ++i) {
        resultYear = resultYear * 10 + (year[i] - '0');
    } 

    if (resultDay > 31 || resultDay <= 0 || 
        resultMonth > 12 || resultMonth <= 0 ||
        resultYear > 2023 || resultYear < 1923) {
        return false;
    }
    return true;
}






























