#include "File.h"


#include <iostream>
#include <fstream>

File::File(MedHistory& medHistory) 
    : m_medHistory(medHistory)
{} 

void File::saveHistory() {
    std::string fileName = "data.txt";
    std::ofstream file(fileName);

    if (file.is_open()) {
        file << "Patient's Medical Repord" << std::endl;
        file << "Patient's name:\t" << m_medHistory.getPatient().getPatientName() << std::endl;
        file << "Date of Birth:\t" << m_medHistory.getPatient().getDateOfBirth() << std::endl;
        file << "contactInfo:\t" << m_medHistory.getPatient().getPatientsContactInfo() << std::endl;
        file << "Existing MedCondition:\t" << m_medHistory.getPatient().getExistingMedCondition() << std::endl << std::endl;
        
        file << "History" << std::endl;
        file << "Diagnose:\t" << m_medHistory.getDiagnose() << std::endl;
        file << "Threatment:\t" << m_medHistory.getThreatment() << std::endl;
        file << "Medication:\t" << m_medHistory.getMedication() << std::endl << std::endl;

    
        file << "Your doctor" << std::endl;
        file << "Doctor's name:\t" << m_medHistory.getDoctor().getDoctorName() << std::endl;
        file << "Specialization:\t" << m_medHistory.getDoctor().getSpecialization() << std::endl;
        file << "ContactInfo:\t" << m_medHistory.getDoctor().getDoctorsContactInfo() << std::endl;
        file << "Years Of Experience:\t" << m_medHistory.getDoctor().getYearOfExperience() << std::endl;
        file.close();
    } 
    else {
        std::cerr << "File doesn't exist" << std::endl;
    }
}

