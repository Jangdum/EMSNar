//
//  EssayFormat.cpp
//  EMSNar
//
//  Created by Timmy Ference on 4/17/17.
//  Copyright © 2017 Timmy Ference. All rights reserved.
//

#include "EssayFormat.hpp"
#include "VariableDataBase.hpp"
#include <iostream>

using namespace std;

VariableDataBase varBase;

void Format();

EssayFormat::EssayFormat()
{
    Format();
}

void Format()
{
    cout << "Essay:";
    cout << endl;
    
    cout << "EMS " << varBase.GetEMSUnit() << " called to a " << varBase.GetLocation();
    cout << ", on a " << varBase.GetTypeCall();
    
    if(varBase.GetALSCall() == true)
    {
        cout << ". ALS " << varBase.GetALSNumber() << " was called";
    }
    else
    {
        cout << ". ALS was not called ";
    }
    cout << endl;
    cout << "upon arrival at the scene, pt was found " << varBase.GetLocationOfPatiant() << ".";
    cout << " PTS status on arrival was " << varBase.GetPatiantStatus() <<
                       " PTS mental status was ";
    cout << varBase.GetPatiantMentalState() << ". PTS reports that they are ";
    cout << varBase.GetPatiantClame() << ". PTS vitals were taken";
    cout << endl;
    
    if(varBase.GetOxygenUsed() == true)
    {
        cout << "and were recorded in the chart PT was on Oxygen, ";
        cout << "At " << varBase.GetAmountOfOxygen() << " Liters a minute.";
        cout << endl;
    }
    else
    {
        cout << "and were recorded in the chart PT was not on Oxygen. ";
    }
    
    cout << "Pt was transferred to the " << varBase.GetPatientTransfer();
    cout << " by way of " << varBase.GetExplinPatientTransfer();
    cout << ". Pt was secured to the " << varBase.GetPatientSecure();
    cout << "Using all straps necessary. Pt vitals ";
    
    if(varBase.GetPTSVitals() == true)
    {
        cout << "was ";
    }
    else
    {
        cout << "were not taken, ";
        cout << "and released in route to the Hospital ";
        cout << endl;
        cout << varBase.GetVitalExplentation();
    }
    
    cout << endl;
    cout << "Pt condition in the ambulance was ";
    cout << varBase.GetPTConditionAmb();
    
    cout << ". PT was brought into the ER by " << varBase.GetHowPTGotInToER() << ".";
    cout << endl;
    cout << " Pt care was transferred to the nurse in the " << varBase.GetERArea();
    cout << " section of the ER.";
    
    cout << endl;
    cout << "pt was " << varBase.GetPatientSecure();
    cout << " to the gurney and left in nurses care after a signature was obtained.";
    
    cout << endl;
    cout << "Pt oxygen was ";
    
    if(varBase.GetTransferAir() == true)
    {
        cout << " transferred. ";
    }
    else if(varBase.GetTransferAir() == false)
    {
        cout << " not used. ";
    }
    
    cout << "EMS " << varBase.GetEMSUnit();
    cout << " clear the following receipt of a face sheet from the ";
    cout << varBase.GetERArea() << ".";
    
    
    for(int i = 0; i <= 5; i++)
    {
        cout << endl;
    }
    
    cout << "Bullet Point: ";
    cout << endl;
    
    cout << "\n\u2022 EMS Unit " << varBase.GetEMSUnit();
    cout << "\n\u2022 Type of call was " << varBase.GetTypeCall();
    cout << "\n\u2022 Called to " << varBase.GetLocation();
    cout << "\n\u2022 PTS status on arrival " << varBase.GetPatiantStatus();
    cout << "\n\u2022 Mental Status was" << varBase.GetPatiantMentalState();
    
    if(varBase.GetALSCall() == true)
    {
        cout << "\n\u2022 ALS was called";
        cout << "\n\u2022 ALS number " << varBase.GetALSNumber();
    }
    else if(varBase.GetALSCall() == false)
    {
        cout << "\n\u2022 ALS was not called";
    }
    
    cout << "\n\u2022 PT was found " << varBase.GetLocationOfPatiant();
    cout << "\n\u2022 PT Status " << varBase.GetPatiantStatus();
    
    if(varBase.GetPTSVitals() == true)
    {
        cout << "\n\u2022 PT vitals were taken";
    }
    else if(varBase.GetPTSVitals() == false)
    {
        cout << "\n\u2022 were not taken";
    }
    
    if(varBase.GetOxygenUsed() == true)
    {
        cout << "\n\u2022 Oxygen was used";
        cout << "\n\u2022 Oxygen was at " << varBase.GetAmountOfOxygen();
    }
    else if(varBase.GetOxygenUsed() == false)
    {
        cout << "\n\u2022 Oxygen was not used";
    }
    
    cout << "\n\u2022 Pt was transferred to " << varBase.GetPatientTransfer();
    cout << "\n\u2022 by way of " << varBase.GetExplinPatientTransfer();
    cout << "\n\u2022 Pt Secured by " << varBase.GetPatientSecure();
    
    if(varBase.GetPTSVitals() == true)
    {
        cout << "\n\u2022 Vitals were taken";
    }
    else if(varBase.GetPTSVitals() == false)
    {
        cout << "\n\u2022 Vitals were not taken";
        cout << "\n\u2022 becuase" << varBase.GetVitalExplentation();
    }
    
    cout << "\n\u2022 Condition in the Ambulance " << varBase.GetPTConditionAmb();
    cout << "\n\u2022 brought into ER by " << varBase.GetHowPTGotInToER();
    cout << "\n\u2022 transferred to the nuse in the " << varBase.GetERArea();
    cout << "\n\u2022 Pt was secure to the gurny by " << varBase.GetPatientSecure();
    
    if(varBase.GetOxygenUsed() == true)
    {
        if(varBase.GetTransferAir() == true)
        {
            cout << "\n\u2022 was transferred";
        }
    }
    
    else if(varBase.GetOxygenUsed() == false)
    {
        if(varBase.GetTransferAir() == false)
        {
            cout << "\n\u2022 was not transftered";
        }
    }
    
    cout << "\n\u2022 EMS " << varBase.GetEMSUnit() << " Clear";
    
}

