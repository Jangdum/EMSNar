//
//  VariableDataBase.hpp
//  EMSNar
//
//  Created by Timmy Ference on 4/17/17.
//  Copyright © 2017 Timmy Ference. All rights reserved.
//

#ifndef VariableDataBase_hpp
#define VariableDataBase_hpp

#include <iostream>
#include <string>

using namespace std;

#include <stdio.h>

class VariableDataBase
{
public:
    //
    //LOCATION//
    //
    void SetLocation(string x)
    {
        location = x;
    }
    
    //
    //ALS NUMBER//
    //
    void SetALSNumber(int x)
    {
        ALSNumber = x;
    }
    
    //
    //EMS UNIT//
    //
    void SetEMSUnit(int x)
    {
        EMSUnit = x;
    }
    
    //
    //TYPE OF CALL//
    //
    void SetTypeCall(string x)
    {
        typeCall = x;
    }
    
    //
    //WAS ALS CALLED//
    //
    void SetALSCall(bool x)
    {
        ALSCalled = x;
    }
    
    //
    //OXEGEN//
    //
    void SetOxygenUsed(bool x)
    {
        oxygenUsed = x;
    }
    
    //
    //PATIANT LOCATION//
    //
    void SetLocationOfPatiant(string x)
    {
        patiantLocation = x;
    }
    
    //
    //STATUS OF PATIANT//
    //
    void SetPatiantStatus(string x)
    {
        patiantStatus = x;
    }
    
    //
    //PATIANT MENTAL STATUS//
    //
    void SetPatiantMentalState(string x)
    {
        patiantMentalStat = x;
    }
    
    //
    //PATIANT CLAME//
    //
    void SetPatiantClame(string x)
    {
        patiantClame = x;
    }
    
    //
    //AMOUNT OF OXYGEN USED//
    //
    void SetAmountOfOxygen(int x)
    {
        oxygenLiters = x;
    }
    
    //
    //PATIENT TRANS//
    //
    void SetPatientTransfer(string x)
    {
        patientTrans = x;
    }
    
    //
    //HOW WAS THE TRANSFER//
    //
    void SetExplinPatientTransfer(string x)
    {
        patientTransExpl = x;
    }
    
    //
    //WHAT WAS THE PATIENT SECURE TO//
    //
    void SetPatientSecure(string x)
    {
        patientSecure = x;
    }
    
    //
    //TO SEE IF PTS VITALS WHERE USED//
    //
    void SetPTSVitals(bool x)
    {
        PTSVitals = x;
    }
    
    //
    //WHEN THE PT VITAL NOT TAKEN
    //
    void SetPTVitalExplentation(string x)
    {
        VitalNotTakenExplentation = x;
    }
    
    //
    //PT CONDITION IN AMBULANCE
    //
    void SetConditionInAmbulance(string x)
    {
        PTConditionAmb = x;
    }
    
    //
    //HOW GOT INTO ER//
    //
    void SetHowPTGotInToER(string x)
    {
        PTERTransport = x;
    }
    
    //
    //AREA IN THE ER//
    //
    void SetERArea(string x)
    {
        PTERArea = x;
    }
    
    //
    //HOW THE PT WAS MOVED TO THE BED IN ER//
    //
    void SetPTMovedToBedER(string x)
    {
        PTMoveToBed = x;
    }
    
    //
    //the transfer of CO2//
    //
    void SetTransferToCO(bool x)
    {
        transferAir = x;
    }
    
    //
    //STRINGS//
    //
    string GetMoveERBed()
    {
        return PTMoveToBed;
    }
    
    string GetERArea()
    {
        return PTERArea;
    }
    
    string GetHowPTGotInToER()
    {
        return PTERTransport;
    }
    
    string GetPTConditionAmb()
    {
        return PTConditionAmb;
    }
    
    string GetVitalExplentation()
    {
        return VitalNotTakenExplentation;
    }
    
    string GetPatientSecure()
    {
        return patientSecure;
    }
    
    string GetExplinPatientTransfer()
    {
        return patientTransExpl;
    }
    
    string GetPatientTransfer()
    {
        return patientTrans;
    }
    
    string GetPatiantClame()
    {
        return patiantClame;
    }
    
    string GetPatiantMentalState()
    {
        return patiantMentalStat;
    }
    
    string GetPatiantStatus()
    {
        return patiantStatus;
    }
    
    string GetLocationOfPatiant()
    {
        return patiantLocation;
    }
    
    string GetTypeCall()
    {
        return typeCall;
    }
    
    string GetLocation()
    {
        return location;
    }
    
    //
    //BOOLS//
    //
    
    bool GetPTSVitals()
    {
        return PTSVitals;
    }
    
    bool GetOxygenUsed()
    {
        return oxygenUsed;
    }
    
    bool GetALSCall()
    {
        return ALSCalled;
    }
    
    bool GetTransferAir()
    {
        return transferAir;
    }
    
    //
    //INTS//
    //
    
    int GetALSNumber()
    {
        return ALSNumber;
    }
    
    int GetAmountOfOxygen()
    {
        return oxygenLiters;
    }
    
    int GetEMSUnit()
    {
        return EMSUnit;
    }
    
private:
    
    //INTEGERS
    int EMSUnit;
    int ALSNumber;
    int oxygenLiters;
    
    //STRINGS
    string location;
    string typeCall;
    string patiantLocation;
    string patiantStatus;
    string patiantMentalStat;
    string patiantClame;
    string patientTrans;
    string patientTransExpl;
    string patientSecure;
    string VitalNotTakenExplentation;
    string PTConditionAmb;
    string PTERTransport;
    string PTERArea;
    string PTMoveToBed;
    
    //BOOLS
    bool ALSCalled = false;
    bool oxygenUsed = false;
    bool PTSVitals = false;
    bool transferAir = false;
};

#endif /* VariableDataBase_hpp */
