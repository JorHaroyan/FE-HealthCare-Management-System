#pragma once

#include "Doctor.h"
#include "Patient.h"
#include "MedHistory.h"
#include "Doctor.h"
#include "Patient.h"
#include "def.h"
#include "MedHistory.h"

#include <iostream>
#include <fstream>

class File 
{
public:
    File(MedHistory& medHistory);
    void saveHistory();    

private:
    MedHistory& m_medHistory;
};








