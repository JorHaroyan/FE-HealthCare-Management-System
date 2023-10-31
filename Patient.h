#pragma once
#include "def.h"
#include "Utility.h"

#include <iostream>
#include <cstring>

class Patient 
{
public:
    Utility utility;
    char* getPatientName() {return m_patientName;}
    char* getDateOfBirth() {return m_dateOfBirth;}
    char* getGender() {return m_gender;}
    char* getPatientsContactInfo() {return m_contactInfo;}
    char* getExistingMedCondition() {return m_existingMedCondition;}


    Patient(const char patientName[SIZE], const char dateOfBirth[SIZE], const char gender[SIZE], const char contactInfo[SIZE], const char existingMedCondition[SIZE]);
    void displayInfo();    
private:
    char m_patientName[SIZE];
    char m_dateOfBirth[SIZE];
    char m_gender[SIZE];
    char m_contactInfo[SIZE];
    char m_existingMedCondition[SIZE];
};






















