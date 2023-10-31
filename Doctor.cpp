#include "Doctor.h"
#include "def.h"

#include <iostream>
#include <cstring>



Doctor::Doctor(const char doctorName[SIZE], const char specialization[SIZE], const char contactInfo[SIZE], int yearsOfExperience) {
    if (!utility.checkYearsOfExperience(yearsOfExperience)) {
        throw std::logic_error("error: your number is not valid");
    } else { 
        m_yearsOfExperience = yearsOfExperience;
    }

    if (!utility.checkName(doctorName)) {
        throw std::logic_error("error: Your name is invalid. Please write (Name Lastname)");
    } else {
        strncpy(m_doctorName, doctorName, SIZE);
        m_doctorName[SIZE - 1] = '\0';
    }

    if (!utility.checkSpecialization(specialization)) {
        throw std::logic_error("error: there is not specialization you have wrote");
    } else {
        strncpy(m_specialization, specialization, SIZE);
        m_specialization[SIZE - 1] = '\0';
    }

      strncpy(m_contactInfo, contactInfo, SIZE);
        m_contactInfo[SIZE - 1] = '\0';
}

void Doctor::displayInfo() {
    std::cout << "Doctors name:\t" << m_doctorName << std::endl;
    std::cout << "Specialization:\t" << m_specialization << std::endl;
    std::cout << "ContactInfo:\t" << m_contactInfo << std::endl;
    std::cout << "Years of experience:\t" << m_yearsOfExperience << std::endl;
}




