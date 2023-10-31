#ifndef HEALFCARESYSTEM
#define HEALTHCARESYSTEM

#include "def.h"
#include "Doctor.h"
#include "Patient.h"
#include "MedHistory.h"
#include "Utility.h"

#include <iostream>
#include <vector>

class HealthCareSystem 
{
public:
    void registerDoctor(const Doctor& newDoctor);
    void registerPatient(const Patient& newPatient);
    void registerMedHistory(const MedHistory& newMedHistory);
    void displayReport(size_t patientID) const;

private:
    std::vector<Doctor> m_doctors;
    std::vector<Patient> m_patients;
    std::vector<MedHistory> m_medHistories;
};


#endif
