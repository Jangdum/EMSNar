//
//  Questions.cpp
//  EMSNar
//
//  Created by Timmy Ference on 4/17/17.
//  Copyright © 2017 Timmy Ference. All rights reserved.
//

#include "Questions.hpp"
#include "VariableDataBase.hpp"
#include "Example.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void QuestionStuff();
void AskQuestions();
void Essay();

string chooser;
bool hasAnswered[20];
bool inerAnswered[2];

VariableDataBase varDaBase;

questions::questions()
{
    QuestionStuff();
}

void QuestionStuff()
{
        
    //
    //DISPLAY THE MAIN INTERFACE//
    //
    int intInput;
            
    //welcome
    cout << "                    ---Welcome EMT---\n\n";
            
    while (true)
    {
        cout << "Example (1)\n";
        cout << "Narritave (2)\n";
        cout << "Help (3)\n";
        cout << "> ";
            cin >> intInput;
        
        //go to the example questions
        if(intInput == 1)
        {
                    
            Example exam;
            break;		//get out of the loop
        }
                
        //go to the function to ask questions
        else if(intInput == 2)
        {
            AskQuestions();
                    
            break;		//get out of the loop
        }
        
        //help with the questions presented 
        else if(intInput == 3)
        {
        	cout << "Example:\n";
        	cout << "This will present an example essay and acceptable answers\n\n";
        	
        	cout << "Narritve:\n";
        	cout << "This will ask a series of questions and will create the narritive\n\n";
        	
        	system("pause");
        	
        	system("CLS");
        }
                
        //if the person does not input the specified numbers
        //loop back and say this
        else
        {
            cout << "Enter 1, 2, or 3\n\n";
            
            true;
        }
    }
}


//
//ASK QUESTIONS//
//

void AskQuestions()
{
    //Local Variables
    string strInput;
    string strInput2;
    char str[200];
    int intInput;
    
    system("CLS");
    
    //set the first has answered to true to access the first
    //question
    hasAnswered[0] = true;
    
    if(hasAnswered[0] == true)
    {
        //question and answer
        cout << "- What EMS Unit are you on: ";
            cin >> intInput;
        
        //set it in the question database
        varDaBase.SetEMSUnit(intInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[0] = false;
        hasAnswered[1] = true;
    }
    
    if(hasAnswered[1] == true)
    {
    	system("CLS");
        //question and answer
        cout << "- What kind of location is it: ";
            cin >> strInput;
        
        //set it in the question database
        varDaBase.SetLocation(strInput);
        
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[2] = false;
        hasAnswered[3] = true;
    }
    
    if(hasAnswered[3] == true)
    {
    	system("CLS");
        //question and answer
        cout << "- What kind of call was it dispached as: ";
        	cin.getline(str, 200);
        	getline(cin, strInput);
        
        //set it in the question database
        varDaBase.SetTypeCall(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[2] = false;
        hasAnswered[3] = true;
    }
    
    strInput = "";
    
    if(hasAnswered[3] == true)
    {
    	system("CLS");
    	
        while(true)
        {
            //question and answer
            cout << "- Was ALS called? (y)es (n)o: ";
                cin >> strInput;
            
            
            //if answered yes set it to the database along with
            //ask the next question
            if(strInput == "y" || strInput == "Y")
            {
                //set it in the question database
                varDaBase.SetALSCall(true);
                
                //set the inner to be true so it doesn't
                //go back and ask again
                inerAnswered[0] = true;
                
                //do when is equal to true
                if(inerAnswered[0] == true)
                {
                    //question and answer
                    cout << "- What ALS number: ";
                        cin >> intInput;
                    
                    //set it in the question database
                    varDaBase.SetALSNumber(intInput);
                }
                
                //set to false to not go back and set the
                //next one to be true
                inerAnswered[0] = false;
                intInput = 0;
                
                hasAnswered[3] = false;
                hasAnswered[4] = true;
                
                break;		//get out of the loop
            }
            
            //if answered no then set it to the database skip the follow
            //up question then go to the next question
            else if(strInput == "n" || strInput == "N")
            {
                //set it in the question database
                varDaBase.SetALSCall(false);
                
                //set to false to not go back and set the
                //next one to be true
                hasAnswered[3] = false;
                hasAnswered[4] = true;
                
                break;		//get out of the loop
            }
            
            else
            {
                cout << "   ---Not a (y) or a (n)---\n\n";
                
                true;
            }
        }
    }
    
    strInput = "";
    
    if(hasAnswered[4] == true)
    {
        system("CLS");
        
        //question and answer
        cout << "         		---Note Position / Type of room---\n";
        cout << "- Where was the patient found within the location: ";
          	cin.getline(str, 200);
        	getline(cin, strInput);
          	
        
        //set it in the question database
        varDaBase.SetLocationOfPatiant(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[4] = false;
        hasAnswered[5] = true;
    }
    
    if(hasAnswered[5] == true)
    {
      	system("CLS");
        
        //question and answer
        cout << "          		 ---ex. AMS, Crying, unconscious---\n";
        cout << "- What was the patient status when you got there: ";
            cin.getline(str, 200);
        	getline(cin, strInput);
        
        //set it in the question database
        varDaBase.SetPatiantStatus(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[5] = false;
        hasAnswered[6] = true;
    }
    
    strInput = "";
    
    if(hasAnswered[6] == true)
    {
    	system("CLS");
    	
        //question and answer
        cout << "- What was the patient mental staus: ";
            cin.getline(str, 200);
        	getline(cin, strInput);
        
        //set it in the question database
        varDaBase.SetPatiantMentalState(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[6] = false;
        hasAnswered[7] = true;
    }
    
    strInput = "";
    
    if(hasAnswered[7] == true)
    {
    	system("CLS");
    	
        //question and answer
        cout << "- What does the patient say is wrong with them?";
        cout << "  Any pertinent negatives?: ";
            cin.getline(str, 200);
        	getline(cin, strInput);
        
        //set it in the question database
        varDaBase.SetPatiantClame(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[7] = false;
        hasAnswered[8] = true;
    }
    
    strInput = "";
    
    if(hasAnswered[8] == true)
    {
    	system("CLS");
    	
        while(true)
        {
            //question and answer
            cout << "- Was Oxygen Used (y)es or (n)o: ";
            	cin >> strInput;
            
            if(strInput == "y" || strInput == "Y")
            {
                //set it in the question database
                varDaBase.SetOxygenUsed(true);
                
                inerAnswered[0] = true;
                
                if(inerAnswered[0] == true)
                {
                    cout << endl;		//give space between the questions
                    
                    //question and answer
                    cout << "             ---Must Be 0 Or Higher---\n";
                    cout << "- What liters where they put on: ";
                        cin >> intInput;
                    
                    //set it in the question database
                    varDaBase.SetAmountOfOxygen(intInput);
                    
                    //set to false to not go back and set the
                    //next one to be true
                    inerAnswered[0] = false;
                    inerAnswered[1] = true;
                }
                
                intInput = 0;
                
                if(inerAnswered[1] == true)
                {
                	system("CLS");
                    
                    while(true)
                    {
                        //question and answer
                        cout << "- Was PT Transferred to the room air: (y)es or (n)o: ";
                        	cin.getline(str, 200);
        					getline(cin, strInput);
                        
                        //if you answer yes to the question
                        if(strInput == "y" || strInput == "Y")
                        {
                            //set it in the question database
                            varDaBase.SetTransferToCO(true);
                            
                            inerAnswered[1] = false;
                            
                            //set to false to not go back and set the
                            //next one to be true
                            hasAnswered[8] = false;
                            hasAnswered[9] = true;
                            
                            break;		//get out of the loop
                        }
                        
                        //if you answer no to the question
                        else if(strInput == "n" || strInput == "N")
                        {
                            //set it in the question database
                            varDaBase.SetTransferToCO(false);
                            
                            inerAnswered[1] = false;
                            
                            //set to false to not go back and set the
                            //next one to be true
                            hasAnswered[8] = false;
                            hasAnswered[9] = true;
                            
                            break;		//get out of the loop
                        }
                        
                        //if answer is unknown
                        else
                        {
                            cout << "   ---Not a (y) or a (n)---\n";
                            cout << endl;
                        }
                    }
                    
                    break;
                }
            }
            else if(strInput == "n" || strInput == "N")
            {
                //set it in the question database
                varDaBase.SetOxygenUsed(false);
                
                //set to false to not go back and set the
                //next one to be true
                hasAnswered[8] = false;
                hasAnswered[9] = true;
                
                break;		//to get out of loop
            }
            
            else
            {
                cout << "   ---Not a (y) or a (n)---\n\n";
            }
        }
    }
    
    strInput = "";
    
    if(hasAnswered[9] == true)
    {
        system("CLS");
        
        //question and answer
        cout << "   			---stretcher, Reeves, Backboard Ambulance---\n";
        cout << "- Where was the patient transferred too: ";
            cin.getline(str, 200);
        	getline(cin, strInput);
        
        //set it in the question database
        varDaBase.SetPatientTransfer(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[9] = false;
        hasAnswered[10] = true;
    }
    
    strInput = "";
    
    if(hasAnswered[10] == true)
    {
        system("CLS");
        
        //question and answer
        cout << "    	 ---Sheet slide, walking, stand pivot, carry, slide, etc---\n";
        cout << "- How was the Patient transferred to the location previously stated: ";
        	cin.getline(str, 200);
        	getline(cin, strInput);
        
        //set it in the question database
        varDaBase.SetExplinPatientTransfer(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[10] = false;
        hasAnswered[11] = true;
    }
    
    strInput = "";
    
    if(hasAnswered[11] == true)
    {
        system("CLS");
        
        //question and answer
        cout << "   ---Backboard, stretcher, driver seat, bench seat, captins chair, car seat---\n";
        cout << "- What was the patient secured to: ";
            cin.getline(str, 200);
        	getline(cin, strInput);
        
        //set it in the question database
        varDaBase.SetPatientSecure(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[11] = false;
        hasAnswered[12] = true;
    }
    
    strInput = "";
    
    if(hasAnswered[12] == true)
    {
        system("CLS");
        
        //question and answer
        cout << "- Was PTS vitals taken (y)es or (n)o: ";
        	cin >> strInput;
        
        if(strInput == "y" || strInput == "Y")
        {
            //set it in the question database
            varDaBase.SetPTSVitals(true);
            
            //set to false to not go back and set the
            //next one to be true
            hasAnswered[12] = false;
            hasAnswered[13] = true;
        }
        else if(strInput == "n" || strInput == "N")
        {
            cout << endl;		//give space between the questions
            
            //question and answer
            cout << "    	 ---ALS, combative, refusal(start with becuase)---\n";
            cout << "- explain why: ";
            	cin.getline(str, 200);
        		getline(cin, strInput);
            
            //set it in the question database
            varDaBase.SetPTVitalExplentation(strInput);
            varDaBase.SetPTSVitals(false);
            
            //set to false to not go back and set the
            //next one to be true
            hasAnswered[12] = false;
            hasAnswered[13] = true;
        }
    }
    
    strInput = "";
    
    if(hasAnswered[13] == true)
    {
        system("CLS");
        
        //question and answer
        cout << "   		 ---Better, worse, same and why if known---\n";
        cout << "- note PT condition in Ambulance: ";
       		cin.getline(str, 200);
        	getline(cin, strInput);
        
        //set it in the question database
        varDaBase.SetConditionInAmbulance(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[13] = false;
        hasAnswered[14] = true;
    }
    
    strInput = "";
    
    if(hasAnswered[14] == true)
    {
        system("CLS");
        
        //question and answer
        cout << "   		 ---stretcher, walked, wheel chair ETC---\n";
        cout << "- note how the PT was brought inside the ER from the Ambulace: ";
        	cin >> strInput;
        
        //set it in the question database
        varDaBase.SetHowPTGotInToER(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[14] = false;
        hasAnswered[15] = true;
    }
    
    strInput = "";
    
    if(hasAnswered[15] == true)
    {
        system("CLS");
        
        //question and answer
        cout << "- note the department, secition, area the PT was brought once inside";
        cout << "  the ER: ";
        	cin >> strInput;
        
        //set it in the question database
        varDaBase.SetERArea(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[15] = false;
        hasAnswered[16] = true;
    }
    
    strInput = "";
    
    if(hasAnswered[16] == true)
    {
       system("CLS");
        
        //question and answer
        cout << "     		  ---Slide, Lift, Walked--\n";
        cout << "- note how the PT was moved to the bed in the ER: ";
        	cin >> strInput;
        
        //set it in the question database
        varDaBase.SetPTMovedToBedER(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[16] = false;
        hasAnswered[17] = true;
    }
    
    //reseting the variable
    strInput = "";
    
    //make a new line
    cout << endl;
    
    while(true)
    {
    	system("CLS");
        cout << endl;
        cout << "(e) enter to contine: ";
        	cin >> chooser;
        
        if(chooser == "e")
        {
           	Essay();
            
            break;
        }
        
        else
        {
            cout << "   ---THATS NOT E!!!---\n";
        }
    }
}

void Essay()
{
    cout << "Essay:";
    cout << endl;
    
    cout << "EMS " << varDaBase.GetEMSUnit() << " called to a " << varDaBase.GetLocation();
    cout << ", on a " << varDaBase.GetTypeCall() << endl;
    
    if(varDaBase.GetALSCall() == true)
    {
        cout << ". ALS " << varDaBase.GetALSNumber() << " was called";
    }
    else
    {
        cout << ". ALS was not called ";
    }
    cout << endl;
    cout << "upon arrival at the scene, pt was found " << varDaBase.GetLocationOfPatiant() << ".";
    cout << " PTS status on arrival was " << varDaBase.GetPatiantStatus() <<
                       " PTS mental status was ";
    cout << varDaBase.GetPatiantMentalState() << ". PTS reports that they are ";
    cout << varDaBase.GetPatiantClame() << ". PTS vitals were taken";
    cout << endl;
    
    if(varDaBase.GetOxygenUsed() == true)
    {
        cout << "and were recorded in the chart PT was on Oxygen, ";
        cout << "At " << varDaBase.GetAmountOfOxygen() << " Liters a minute.";
        cout << endl;
    }
    else
    {
        cout << "and were recorded in the chart PT was not on Oxygen. ";
    }
    
    cout << "Pt was transferred to the " << varDaBase.GetPatientTransfer();
    cout << " by way of " << varDaBase.GetExplinPatientTransfer();
    cout << ". Pt was secured to the " << varDaBase.GetPatientSecure();
    cout << "Using all straps necessary. Pt vitals ";
    
    if(varDaBase.GetPTSVitals() == true)
    {
        cout << "was ";
    }
    else
    {
        cout << "were not taken, ";
        cout << "and released in route to the Hospital ";
        cout << endl;
        cout << varDaBase.GetVitalExplentation();
    }
    
    cout << endl;
    cout << "Pt condition in the ambulance was ";
    cout << varDaBase.GetPTConditionAmb();
    
    cout << ". PT was brought into the ER by " << varDaBase.GetHowPTGotInToER() << ".";
    cout << endl;
    cout << " Pt care was transferred to the nurse in the " << varDaBase.GetERArea();
    cout << " section of the ER.";
    
    cout << endl;
    cout << "pt was " << varDaBase.GetPatientSecure();
    cout << " to the gurney and left in nurses care after a signature was obtained.";
    
    cout << endl;
    cout << "Pt oxygen was ";
    
    if(varDaBase.GetTransferAir() == true)
    {
        cout << " transferred. ";
    }
    else if(varDaBase.GetTransferAir() == false)
    {
        cout << " not used. ";
    }
    
    cout << "EMS " << varDaBase.GetEMSUnit();
    cout << " clear the following receipt of a face sheet from the ";
    cout << varDaBase.GetERArea() << ".";
    
    
    for(int i = 0; i <= 5; i++)
    {
        cout << endl;
    }
    
    cout << "Bullet Point: ";
    cout << endl;
    
    cout << "\n\u2022 EMS Unit " << varDaBase.GetEMSUnit();
    cout << "\n\u2022 Type of call was " << varDaBase.GetTypeCall();
    cout << "\n\u2022 Called to " << varDaBase.GetLocation();
    cout << "\n\u2022 PTS status on arrival " << varDaBase.GetPatiantStatus();
    cout << "\n\u2022 Mental Status was" << varDaBase.GetPatiantMentalState();
    
    if(varDaBase.GetALSCall() == true)
    {
        cout << "\n\u2022 ALS was called";
        cout << "\n\u2022 ALS number " << varDaBase.GetALSNumber();
    }
    else if(varDaBase.GetALSCall() == false)
    {
        cout << "\n\u2022 ALS was not called";
    }
    
    cout << "\n\u2022 PT was found " << varDaBase.GetLocationOfPatiant();
    cout << "\n\u2022 PT Status " << varDaBase.GetPatiantStatus();
    
    if(varDaBase.GetPTSVitals() == true)
    {
        cout << "\n\u2022 PT vitals were taken";
    }
    else if(varDaBase.GetPTSVitals() == false)
    {
        cout << "\n\u2022 were not taken";
    }
    
    if(varDaBase.GetOxygenUsed() == true)
    {
        cout << "\n\u2022 Oxygen was used";
        cout << "\n\u2022 Oxygen was at " << varDaBase.GetAmountOfOxygen();
    }
    else if(varDaBase.GetOxygenUsed() == false)
    {
        cout << "\n\u2022 Oxygen was not used";
    }
    
    cout << "\n\u2022 Pt was transferred to " << varDaBase.GetPatientTransfer();
    cout << "\n\u2022 by way of " << varDaBase.GetExplinPatientTransfer();
    cout << "\n\u2022 Pt Secured by " << varDaBase.GetPatientSecure();
    
    if(varDaBase.GetPTSVitals() == true)
    {
        cout << "\n\u2022 Vitals were taken";
    }
    else if(varDaBase.GetPTSVitals() == false)
    {
        cout << "\n\u2022 Vitals were not taken";
        cout << "\n\u2022 becuase" << varDaBase.GetVitalExplentation();
    }
    
    cout << "\n\u2022 Condition in the Ambulance " << varDaBase.GetPTConditionAmb();
    cout << "\n\u2022 brought into ER by " << varDaBase.GetHowPTGotInToER();
    cout << "\n\u2022 transferred to the nuse in the " << varDaBase.GetERArea();
    cout << "\n\u2022 Pt was secure to the gurny by " << varDaBase.GetPatientSecure();
    
    if(varDaBase.GetOxygenUsed() == true)
    {
        if(varDaBase.GetTransferAir() == true)
        {
            cout << "\n\u2022 was transferred";
        }
    }
    
    else if(varDaBase.GetOxygenUsed() == false)
    {
        if(varDaBase.GetTransferAir() == false)
        {
            cout << "\n\u2022 was not transftered";
        }
    }
    
    cout << "\n\u2022 EMS " << varDaBase.GetEMSUnit() << " Clear";

}
