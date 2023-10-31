#pragma once
#include "def.h"
#include "Doctor.h"
#include "Patient.h"


#include <iostream>
#include <cstring>
#include <fstream>


class MedHistory 
{
public:
    
    int getPatientID() const {return m_patientID;}
    Patient& getPatient() {return *m_patient;}
    Doctor& getDoctor() {return *m_doctor;}
    char* getDiagnose() {return m_diagnose;}
    char* getThreatment() {return m_threatment;}
    char* getMedication() {return m_medication;}
    MedHistory(Patient& patient, Doctor& doctor, const char displayInfo[SIZE], const char threatment[SIZE], const char medication[SIZE]);  
    void displayAllInfo() const;
  
private:
    Patient* m_patient;
    Doctor* m_doctor;
    char m_diagnose[SIZE];
    char m_threatment[SIZE];
    char m_medication[SIZE];

    const int m_patientID;
    static int m_lastPatientID;
};


















