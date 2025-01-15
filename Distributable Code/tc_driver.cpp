/*
* File 			: tc_driver.cpp
* Description 	: Central Source file of Typing Counter v3
* Author 		: AIM
* Created on 	: 12/02/2017
*/

#include "TypingCounter"

int main(){
	
	try{
		TypingCounter *TypingCounterObject = new TypingCounter();	/* make a instance */
		TypingCounterObject->please_execute_further();				/* call to auto execute all futher operation will be handled by tyoing counter class itself */
		delete TypingCounterObject;									/* remove garbage on exiting */
	}
	catch(...){														/* if found unexpected exception */
		cerr << "\t\t\t\tTyping Counter\n\n\n\n" 
			 << "OPSS!! look like something very bad, may some system files are missing,\n``"
			 << "try to Restart or reinstall! and Please Report to provider.";	
	}
	
	return 0;
}
