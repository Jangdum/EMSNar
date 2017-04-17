//
//  Example.cpp
//  EMSNar
//
//  Created by Timmy Ference on 4/17/17.
//  Copyright © 2017 Timmy Ference. All rights reserved.
//

#include "Example.hpp"
#include <iostream>

wchar_t bullet = L'U+2022';

using namespace std;

void ExampleNarritive();

Example::Example()
{
    ExampleNarritive();
}

void ExampleNarritive()
{
    cout << "Follow the questions and answer them in " <<
                       " a simplistic";
    cout << "mannor.";
    
    cout << endl;
    
    cout << "- What EMS Unit are you on:  ";
    cout << " U+2022 You would put the number of what EMS you are on\n";
    cout << endl;
    cout << "   (Eample)\n";
    cout << "  - What EMS Unit are you on: 2\n";
    cout << "-----------------------------"
                     << "---------------------------\n";
    
    cout << endl;
    
    
    cout << "- What kind of location is it: ";
    cout << " U+2022 You would put the type of location the "
                       <<  "call was at");
    cout << endl;
    cout << "   (Example)");
    cout << "  -What kind of location is it: residental";
    cout << "------------------------------"
                     <<  "--------------------------";
    
    cout << endl;
    
    cout << "- What kind of call was it dispached as: ";
    cout << "  U+2022 You would put the type of call it was";
    cout << endl;
    cout << " (Eample)");
    cout << "- What kind of call was it dispached as: "
                       <<  "injured person";
    cout << "------------------------------------"
                     <<  "--------------------";
    
    cout << endl;
    
    cout << "- Was ALS called? (y)es (n)o: ";
    cout << " U+2022 Ok you can't possibly fuck this "
                       <<  "up but just incase,";
    cout << "  I'll show you";
    cout << endl;
    cout << " (Example)");
    cout << "- Was ALS called? (y)es (n)o: y";
    cout << " U+2022 If you say yes too this an "
                       <<  "extra question "
                       <<  "will appear";
    cout << endl;
    cout << "   (Example)";
    cout << " - what ALS number: 2";
    cout << " U+2022 If you say no then the question will not"
                       <<  " appear";
    cout << "  ....amazing right?";
    cout << "------------------------------------"
                       <<  "--------------------";
    
    cout << endl;
    
    cout << "       ---Note Position and Type of room---";
    cout << "- Where was the patient found within the location: ";
    cout << " U+2022 Follow the top do what it"
                       <<  " says and you'll be fine";
    cout << endl;
    cout << "   (Example)";
    cout << "       ---Note Position and Type of room---";
    cout << "- Where was the patient found within the location: laying on bed in bedroom";
    cout << "------------------------------------"
                       <<  "--------------------";
    
    cout << endl;
    
    cout << "          		 ---ex. AMS, Crying, unconcious---";
    cout << "- What was the patient status when you got there: ";
    cout << "U+2022 Ok don't over think this. Look at the top";
    cout << endl;
    cout << "   (Example)";
    cout << "          ---ex. AMS, Crying, unconscious---";
    cout << "- What was the patient status when you got there: unconcious");
    cout << "------------------------------------"
                       <<  "--------------------";
    
    cout << endl;
    
    cout << "- What was the patient mental staus: ";
    cout << "U+2022 Now one word this sereusly don't make "
                       <<  "a novole about";
    cout << "  Their mental staus";
    cout << endl;
    cout << "   (Example)";
    cout << "- What was the patient mental staus: Lethargy";
    cout << "------------------------------------"
                       <<  "--------------------");
    
    cout << endl;
    
    cout << "- What does the patient say is wrong with them?";
    cout << "  Any pertinent negatives?: ";
    cout << "U+2022 put down anything you see wrong with them";
    cout << "U+2022 seperating them with an and then put down the negative";
    cout << endl;
    cout << "   (Example)";
    cout << "- What does the patient say is wrong with them?";
    cout << "  Any pertinent negatives?: light headed and a broken bone";
    cout << "------------------------------------"
                       <<  "--------------------";
    
    
    cout << endl;
    
    cout << "- Was Oxygen Used (y)es or (n)o: ";
    cout << "U+2022 You just put y = yes or n = no";
    cout << "U+2022 if you say no then it would go to next question";
    cout << "U+2022 if you say yes then you will be taken to this question";
    cout << "- What liters where they put on: ";
    cout << "U+2022 You just put the leters it was set at";
    cout << "   (Example)";
    cout << "- Was Oxygen Used (y)es or (n)o: y";
    cout << "- What liters where they put on: 6";
    cout << ("------------------------------------"
                       <<  "--------------------";
    
    cout << endl;
    
    cout << "   			---Stretcher, Reeves, Backboard Ambulance---";
    cout << "- Where was the patient transferred to: ";
    cout << "U+2022 You just put the top";
    cout << "   (Example)";
    cout << endl;
    cout << "   			---Stretcher, Reeves, Backboard Ambulance---";
    cout << "- Where was the patient transferred too: backboard";
    cout << "------------------------------------"
                       <<  "--------------------";
    
    cout << endl;
    
    cout << "   ---Backboard, stretcher, driver seat, bench seat, captins chair, car seat---";
    cout << "- What was the patient secured to: ";
    cout << "U+2022 You just put the top";
    cout << "   (Example)";
    cout << endl;
    cout << "   ---Backboard, stretcher, driver seat, bench seat, captins chair, car seat---";
    cout << "- What was the patient secured to: stretcher";
    cout << "------------------------------------"
                       <<  "--------------------";
    
    cout << endl;
    
    cout << "- Was PTS vitals taken (y)es or (n)o: ";
    cout << "U+2022 You just put y = yes or n = no";
    cout << "U+2022 if answered yes then you would go to the next question";
    cout << "U+2022 if answered no then it would ask";
    cout << endl;
    cout << "    	 ---ALS, combative, refusal(start with becuase)---";
    cout << "- explain why: ";
    cout << "   (Example)";
    cout << endl;
    cout << "    	 ---ALS, combative, refusal(start with becuase)---";
    cout << "- explain why: combative because pt was hurting really bad";
    cout << "------------------------------------"
                       <<  "--------------------";
    
    cout << endl;
    
    cout << "   		 ---Better, worse, same and why if known---";
    cout << "- note PT condition in Ambulance: ";
    cout << "U+2022 follow the top";
    cout << "   (Example)";
    cout << endl;
    cout << "   		 ---Better, worse, same and why if known---";
    cout << "- note PT condition in Ambulance: Better because pain was easing";
    cout << "------------------------------------"
                       <<  "--------------------";
    
    cout << endl;
    
    cout << "   		 ---Streacher, walked, wheel chair ETC---";
    cout << "- note how the PT was brought inside the ER from the Ambulace: ";
    cout << "U+2022 follow the top";
    cout << "   (Example)";
    cout << endl;
    cout << "   		 ---Streacher, walked, wheel chair ETC---";
    cout << "- note how the PT was brought inside the ER from the Ambulace: walked";
    cout << "------------------------------------"
                       <<  "--------------------";
    
    cout << endl;
    
    cout << "- note the department, secition, area the PT was brought once inside";
    cout << "  the ER: ";
    cout << "U+2022 Just the department no explination";
    cout << "   (Example)";
    cout << endl;
    cout << "- note the department, secition, area the PT was brought once inside";
    cout << "  the ER: some er departement";
    cout << "------------------------------------"
                       <<  "--------------------";
    
    cout << endl;
    
    cout << "     		  ---Slide, Lift, Walked--";
    cout << "- note how the PT was moved to the bed in the ER: ";
    cout << "U+2022 Just one word it and follow the top";
    cout << "   (Example)";
    cout << endl;
    cout << "     		  ---Slide, Lift, Walked--";
    cout << "- note how the PT was moved to the bed in the ER: lifted";
    cout << "------------------------------------"
                       <<  "--------------------";
}
