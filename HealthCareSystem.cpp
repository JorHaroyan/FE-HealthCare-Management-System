#include "HealthCareSystem.h"
#include "MedHistory.h"

#include <iostream>


void HealthCareSystem::registerDoctor(const Doctor& newDoctor) {
    m_doctors.push_back(newDoctor);
}

void HealthCareSystem::registerPatient(const Patient& newPatient) {
    m_patients.push_back(newPatient);
}

void HealthCareSystem::registerMedHistory(const MedHistory& newMedHistory) {
    m_medHistories.push_back(newMedHistory);
}

void HealthCareSystem::displayReport(size_t patientID) const {
    bool flag = false;
    for (const auto& history : m_medHistories) {
        if (history.getPatientID() == patientID) {
            history.displayAllInfo();
            flag = true;
        }
    }
    if (!flag) {
        std::cout << "There is not history you are looking for" << std::endl;
    }
}



























