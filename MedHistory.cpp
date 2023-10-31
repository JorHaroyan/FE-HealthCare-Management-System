#include "MedHistory.h"

#include <iostream>
#include <cstring>

int MedHistory::m_lastPatientID = 0;

MedHistory::MedHistory(Patient& patient, Doctor& doctor, const char diagnose[SIZE], const char threatment[100], const char medication[SIZE])
    : m_patientID(++m_lastPatientID),
      m_patient(&patient), 
      m_doctor(&doctor) {
      strncpy(m_diagnose, diagnose, SIZE);
        m_diagnose[SIZE - 1] = '\0';
      strncpy(m_threatment, threatment, SIZE);
        m_threatment[SIZE - 1] = '\0';
      strncpy(m_medication, medication, SIZE);
        m_medication[SIZE - 1] = '\0';
}

void MedHistory::displayAllInfo() const {
    m_patient->displayInfo();
    std::cout << std::endl;
    std::cout << "Diagnose:\t" << m_diagnose << std::endl;
    std::cout << "Threatment\t" << m_threatment << std::endl;
    std::cout << "Medication:\t" << m_medication << std::endl;
    std::cout << std::endl;
    m_doctor->displayInfo();
}


