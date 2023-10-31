#pragma once
#include "def.h"
#include "Utility.h"

#include <iostream>
#include <cstring>


class Doctor 
{
public:
    Utility utility;
    const char* getDoctorName() const {return m_doctorName;}
    const char* getSpecialization() const {return m_specialization;}
    const char* getDoctorsContactInfo() const {return m_contactInfo;} 
    int getYearOfExperience() const {return m_yearsOfExperience;}

    Doctor(const char doctorName[SIZE], const char specialization[SIZE], const char contactInfo[SIZE], int yearsOfExperience);
    void displayInfo();
private:
    char m_doctorName[SIZE];
    char m_specialization[SIZE];
    char m_contactInfo[SIZE];
    int m_yearsOfExperience;
};




















