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
    cout << "------------------------------";
    
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
    cout << "------------------------------------"
                       <<  "--------------------\n\n";
    
    
    cout << "- What does the patient say is wrong with them?\n";
    cout << "  Any pertinent negatives?: \n";
    cout << "U+2022 put down anything you see wrong with them\n";
    cout << "U+2022 seperating them with an and then put down the negative\n";
    cout << endl;
    cout << "   (Example)\n";
    cout << "- What does the patient say is wrong with them?\n";
    cout << "  Any pertinent negatives?: light headed and a broken bone\n";
    cout << "------------------------------------"
                       <<  "--------------------\n";
    
    
    cout << endl;
    
    cout << "- Was Oxygen Used (y)es or (n)o: \n";
    cout << "U+2022 You just put y = yes or n = no\n";
    cout << "U+2022 if you say no then it would go to next question\n";
    cout << "U+2022 if you say yes then you will be taken to this question\n";
    cout << "- What liters where they put on: \n";
    cout << "U+2022 You just put the leters it was set at\n";
    cout << "   (Example)\n";
    cout << "- Was Oxygen Used (y)es or (n)o: y\n";
    cout << "- What liters where they put on: 6\n";
    cout << "------------------------------------\n";
             
             cout << endl;
    
    cout << "   			---Stretcher, Reeves, Backboard Ambulance---\n";
    cout << "- Where was the patient transferred to: \n";
    cout << "U+2022 You just put the top\n";
    cout << "   (Example)\n";
    cout << endl;
    cout << "   			---Stretcher, Reeves, Backboard Ambulance---\n";
    cout << "- Where was the patient transferred too: backboard\n";
    cout << "------------------------------------"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "   ---Backboard, stretcher, driver seat, bench seat, captins chair, car seat---\n";
    cout << "- What was the patient secured to: \n";
    cout << "U+2022 You just put the top\n";
    cout << "   (Example)\n";
    cout << endl;
    cout << "   ---Backboard, stretcher, driver seat, bench seat, captins chair, car seat---\n";
    cout << "- What was the patient secured to: stretcher\n";
    cout << "------------------------------------"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "- Was PTS vitals taken (y)es or (n)o: \n";
    cout << "U+2022 You just put y = yes or n = no\n";
    cout << "U+2022 if answered yes then you would go to the next question\n";
    cout << "U+2022 if answered no then it would ask\n";
    cout << endl;
    cout << "    	 ---ALS, combative, refusal(start with becuase)---\n";
    cout << "- explain why: \n";
    cout << "   (Example)\n";
    cout << endl;
    cout << "    	 ---ALS, combative, refusal(start with becuase)---\n";
    cout << "- explain why: combative because pt was hurting really bad\n";
    cout << "------------------------------------"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "   		 ---Better, worse, same and why if known---\n";
    cout << "- note PT condition in Ambulance: \n";
    cout << "U+2022 follow the top";
    cout << "   (Example)\n";
    cout << endl;
    cout << "   		 ---Better, worse, same and why if known---\n";
    cout << "- note PT condition in Ambulance: Better because pain was easing\n";
    cout << "------------------------------------"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "   		 ---Streacher, walked, wheel chair ETC---\n";
    cout << "- note how the PT was brought inside the ER from the Ambulace: \n";
    cout << "U+2022 follow the top\n";
    cout << "   (Example)";
    cout << endl;
    cout << "   		 ---Streacher, walked, wheel chair ETC---\n";
    cout << "- note how the PT was brought inside the ER from the Ambulace: walked\n";
    cout << "------------------------------------"
                       <<  "--------------------\n";
    
    cout << endl;
    
    cout << "- note the department, secition, area the PT was brought once inside\n";
    cout << "  the ER: ";
    cout << "U+2022 Just the department no explination\n";
    cout << "   (Example)\n";
    cout << endl;
    cout << "- note the department, secition, area the PT was brought once inside\n";
    cout << "  the ER: some er departement\n";
    cout << "------------------------------------"
                       <<  "--------------------\n\n";
    
    cout << endl;
    
    cout << "     		  ---Slide, Lift, Walked--\n";
    cout << "- note how the PT was moved to the bed in the ER: \n";
    cout << "U+2022 Just one word it and follow the top\n";
    cout << "   (Example)\n";
    cout << endl;
    cout << "     		  ---Slide, Lift, Walked--\n";
    cout << "- note how the PT was moved to the bed in the ER: lifted\n";
    cout << "------------------------------------"
                       <<  "--------------------\n";
}
