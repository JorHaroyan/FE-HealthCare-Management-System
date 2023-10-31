#include "Patient.h"
#include "def.h"


#include <iostream>
#include <cstring>

Patient::Patient(const char patientName[SIZE], const char dateOfBirth[SIZE], const char gender[SIZE], const char contactInfo[SIZE], const char existingMedCondition[SIZE]) 
{
      
    if (!utility.checkName(patientName)) {
        throw std::logic_error("error: the name you have wrote is invalid. Please write name as (Name Lastname)");
    }  else {
        strncpy(m_patientName, patientName, SIZE);
        m_patientName[SIZE - 1] = '\0';
    }

    if (!utility.checkDateOfBirth(dateOfBirth)) {
        throw std::logic_error("error: the day of birth is invalid");
    } else {
        strncpy(m_dateOfBirth, dateOfBirth, SIZE);
        m_dateOfBirth[SIZE - 1] = '\0';
    }
    if (!utility.checkGender(gender)) {
        throw std::logic_error("error: invalid gender");
    } else {
        strncpy(m_gender, gender, SIZE);
        m_gender[SIZE - 1] = '\0';
    }
      strncpy(m_contactInfo, contactInfo, SIZE);
        m_contactInfo[SIZE - 1] = '\0';
      strncpy(m_existingMedCondition, existingMedCondition, SIZE);
        m_existingMedCondition[SIZE - 1] = '\0';
    
}


void Patient::displayInfo() {
    std::cout << "PatientName:\t" << m_patientName << std::endl;
    std::cout << "DateOfBirth:\t" << m_dateOfBirth << std::endl;
    std::cout << "Gender:\t" << m_gender << std::endl;
    std::cout << "ContactInfo:\t" << m_contactInfo << std::endl;
    std::cout << "ExistingMedCondition:\t" << m_existingMedCondition << std::endl;
}



