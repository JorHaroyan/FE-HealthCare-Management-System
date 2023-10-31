#include "Doctor.h"
#include "Patient.h"
#include "MedHistory.h"
#include "def.h"
#include "File.h"
#include "Utility.h"
#include "HealthCareSystem.h"

#include <iostream>
#include <fstream>

int main() {
    Utility utility;
    Doctor d1("Dr. Tonoyan", "Cardiologist", "Doctor.Dr.111@gmail.com", 20);
    Patient p1("John Jones", "20/11/1999", "Male", "john.bones.1999@gmail.com", "is Ill");
    MedHistory mh1(p1, d1, "hipertonia 2", "once a day", "noliptren forte");
    mh1.displayAllInfo();
    File f(mh1);
    f.saveHistory();


    return 0;
}

