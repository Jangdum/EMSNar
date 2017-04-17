//
//  Example.cpp
//  EMSNar
//
//  Created by Timmy Ference on 4/17/17.
//  Copyright © 2017 Timmy Ference. All rights reserved.
//

#include "Example.hpp"
#include <iostream>

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
    
    
    cout << "- What kind of location is it: \n";
    cout << " U+2022 You would put the type of location the "
                       <<  "call was at\n";
    cout << endl;
    cout << "   (Example)\n";
    cout << "  -What kind of location is it: residental\n";
    cout << "------------------------------"
                     <<  "--------------------------\n\n";
    
    cout << endl;
    
    cout << "- What kind of call was it dispached as: \n";
    cout << "  U+2022 You would put the type of call it was\n";
    cout << endl;
    cout << " (Eample)\n";
    cout << "- What kind of call was it dispached as: "
                       <<  "injured person\n";
    cout << "------------------------------------"
                     <<  "--------------------\n\n";
    
    cout << endl;
    
    cout << "- Was ALS called? (y)es (n)o: \n";
    cout << " U+2022 Ok you can't possibly fuck this "
                       <<  "up but just incase,";
    cout << "  I'll show you\n";
    cout << endl;
    cout << " (Example)\n";
    cout << "- Was ALS called? (y)es (n)o: y\n";
    cout << " U+2022 If you say yes too this an "
                       <<  "extra question "
                       <<  "will appear\n";
    cout << endl;
    cout << "   (Example)";
    cout << " - what ALS number: 2";
    cout << " U+2022 If you say no then the question will not"
                       <<  " appear";
    cout << "  ....amazing right?";
    cout << "------------------------------------"
                       <<  "--------------------\n\n";
    
    cout << endl;
    
    cout << "       ---Note Position and Type of room---\n";
    cout << "- Where was the patient found within the location: \n";
    cout << " U+2022 Follow the top do what it\n"
                       <<  " says and you'll be fine\n";
    cout << endl;
    cout << "   (Example)";
    cout << "       ---Note Position and Type of room---\n";
    cout << "- Where was the patient found within the location: laying on bed in bedroom\n";
    cout << "-----------------------------------"
                       <<  "--------------------\n\n";
    
    cout << endl;
    
    cout << "          		 ---ex. AMS, Crying, unconcious---\n";
    cout << "- What was the patient status when you got there: \n";
    cout << "U+2022 Ok don't over think this. Look at the top\n";
    cout << endl;
    cout << "   (Example)\n";
    cout << "          ---ex. AMS, Crying, unconscious---\n";
    cout << "- What was the patient status when you got there: unconcious\n";
    cout << "------------------------------------"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "- What was the patient mental staus: ";
    cout << "U+2022 Now one word this sereusly don't make "
                       <<  "a novole about";
    cout << "  Their mental staus";
    cout << endl;
    cout << "   (Example)";
    cout << "- What was the patient mental staus: Lethargy";
    cout << "------------------------------------\n"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "- What does the patient say is wrong with them?";
    cout << "  Any pertinent negatives?: ";
    cout << "U+2022 put down anything you see wrong with them";
    cout << "U+2022 seperating them with an and then put down the negative";
    cout << endl;
    cout << "   (Example)";
    cout << "- What does the patient say is wrong with them?";
    cout << "  Any pertinent negatives?: light headed and a broken bone";
    cout << "------------------------------------\n"
                       <<  "--------------------\n";
    
    
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
    cout << ("------------------------------------\n"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "   			---Stretcher, Reeves, Backboard Ambulance---\n";
    cout << "- Where was the patient transferred to: ";
    cout << "U+2022 You just put the top";
    cout << "   (Example)";
    cout << endl;
    cout << "   			---Stretcher, Reeves, Backboard Ambulance---\n";
    cout << "- Where was the patient transferred too: backboard";
    cout << "------------------------------------\n"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "   ---Backboard, stretcher, driver seat, bench seat, captins chair, car seat---\n";
    cout << "- What was the patient secured to: ";
    cout << "U+2022 You just put the top";
    cout << "   (Example)";
    cout << endl;
    cout << "   ---Backboard, stretcher, driver seat, bench seat, captins chair, car seat---\n";
    cout << "- What was the patient secured to: stretcher";
    cout << "------------------------------------\n"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "- Was PTS vitals taken (y)es or (n)o: ";
    cout << "U+2022 You just put y = yes or n = no";
    cout << "U+2022 if answered yes then you would go to the next question";
    cout << "U+2022 if answered no then it would ask";
    cout << endl;
    cout << "    	 ---ALS, combative, refusal(start with becuase)---\n";
    cout << "- explain why: ";
    cout << "   (Example)";
    cout << endl;
    cout << "    	 ---ALS, combative, refusal(start with becuase)---\n";
    cout << "- explain why: combative because pt was hurting really bad";
    cout << "------------------------------------\n"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "   		 ---Better, worse, same and why if known---\n";
    cout << "- note PT condition in Ambulance: ";
    cout << "U+2022 follow the top";
    cout << "   (Example)";
    cout << endl;
    cout << "   		 ---Better, worse, same and why if known---\n";
    cout << "- note PT condition in Ambulance: Better because pain was easing";
    cout << "------------------------------------\n"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "   		 ---Streacher, walked, wheel chair ETC---\n";
    cout << "- note how the PT was brought inside the ER from the Ambulace: ";
    cout << "U+2022 follow the top";
    cout << "   (Example)";
    cout << endl;
    cout << "   		 ---Streacher, walked, wheel chair ETC---\n";
    cout << "- note how the PT was brought inside the ER from the Ambulace: walked";
    cout << "------------------------------------\n"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "- note the department, secition, area the PT was brought once inside";
    cout << "  the ER: ";
    cout << "U+2022 Just the department no explination";
    cout << "   (Example)";
    cout << endl;
    cout << "- note the department, secition, area the PT was brought once inside";
    cout << "  the ER: some er departement";
    cout << "------------------------------------\n"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "     		  ---Slide, Lift, Walked--";
    cout << "- note how the PT was moved to the bed in the ER: ";
    cout << "U+2022 Just one word it and follow the top";
    cout << "   (Example)";
    cout << endl;
    cout << "     		  ---Slide, Lift, Walked--";
    cout << "- note how the PT was moved to the bed in the ER: lifted";
    cout << "------------------------------------\n"
                       <<  "--------------------\n";
}
