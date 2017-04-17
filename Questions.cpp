//
//  Questions.cpp
//  EMSNar
//
//  Created by Timmy Ference on 4/17/17.
//  Copyright © 2017 Timmy Ference. All rights reserved.
//

#include "Questions.hpp"
#include "VariableDataBase.hpp"
#include "EssayFormat.hpp"
#include <iostream>

using namespace std;

void QuestionStuff();
void AskQuestions();

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
        cout << "> ";
            cin >> intInput;
        
        //go to the example questions
        if(intInput == 1)
        {
                    
            //Put Example class here
            break;		//get out of the loop
        }
                
        //go to the function to ask questions
        else if(intInput == 2)
        {
            AskQuestions();
                    
            break;		//get out of the loop
        }
                
        //if the person does not input the specified numbers
        //loop back and say this
        else
        {
            cout << "Enter 1 or 2\n\n";
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
    int intInput;
    
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
        //question and answer
        cout << "- What kind of call was it dispached as: ";
            cin >> strInput;
        
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
            }
        }
    }
    
    strInput = "";
    
    if(hasAnswered[4] == true)
    {
        
        //question and answer
        cout << "         		---Note Position / Type of room---\n";
        cout << "- Where was the patient found within the location: ";
            cin >> strInput;
        
        //set it in the question database
        varDaBase.SetLocationOfPatiant(strInput);
        
        //set to false to not go back and set the
        //next one to be true
        hasAnswered[4] = false;
        hasAnswered[5] = true;
    }
    
    if(hasAnswered[5] == true)
    {
        cout << endl;		//give a space between the questions
        
        //question and answer
        cout << "          		 ---ex. AMS, Crying, unconscious---\n";
        cout << "- What was the patient status when you got there: ";
            cin >> strInput;
        
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
        //question and answer
        cout << "- What was the patient mental staus: ";
            cin >> strInput;
        
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
        //question and answer
        cout << "- What does the patient say is wrong with them?";
        cout << "  Any pertinent negatives?: ";
            cin >> strInput;
        
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
                    cout << endl;		//give space between the questions
                    
                    while(true)
                    {
                        //question and answer
                        cout << "- Was PT Transferred to the room air: (y)es or (n)o: ";
                        cin >> strInput;
                        
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
        cout << endl;		//give space between the questions
        
        //question and answer
        cout << "   			---stretcher, Reeves, Backboard Ambulance---\n";
        cout << "- Where was the patient transferred too: ";
            cin >> strInput;
        
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
        cout << endl;		//give space between questions
        
        //question and answer
        cout << "    	 ---Sheet slide, walking, stand pivot, carry, slide, etc---\n";
        cout << "- How was the Patient transferred to the location previously stated: ";
        cin >> strInput;
        
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
        cout << endl;		//give space between questions
        
        //question and answer
        cout << "   ---Backboard, stretcher, driver seat, bench seat, captins chair, car seat---\n";
        cout << "- What was the patient secured to: ";
            cin >> strInput;
        
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
        cout << endl;		//give space between the questions
        
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
            cin >> strInput;
            
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
        cout << endl;		//give space between the questions
        
        //question and answer
        cout << "   		 ---Better, worse, same and why if known---\n";
        cout << "- note PT condition in Ambulance: ";
        cin >> strInput;
        
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
        cout << endl;		//give space between the questions
        
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
        cout << endl;		//give space between the questions
        
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
        cout << endl;		//give space between the questions
        
        //question and answer
        cout << "     		  ---Slide, Lift, Walked--";
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
        cout << endl;
        cout << "(e) enter to contine: ";
        
        if(chooser == "e")
        {
            EssayFormat essay;
        }
        
        else
        {
            cout << "   ---THATS NOT E!!!---\n";
            cout << endl;
        }
    }
}
