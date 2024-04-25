/* Wordlist source file
*
*	This file will contain the function definitions you will implement.
*	The function signatures may NOT be changed.  You may create your own
*	helper functions and include them in this file.
*
*	In addition to the specific instructions for each function, no function
*	should cause any memory leaks or alias list in any way that would result
*	in undefined behavior. 
*
*	Topics: Multilevel Pointers, Dynamic Allocation, Classes
*
*/
// MS VS does not like cstring functions, this is to tell it to chill out.
#ifdef _MSC_VER  //  Microsoft Visual C++

#define _CRT_SECURE_NO_DEPRECATE

#else  // not Microsoft Visual C++, so assume UNIX interface

#endif
#define WORDLIST_H

#ifdef ONLINE_HELP
#define CLASS_PROJECT
#include"self_sabotage.h"
#else
// Do not include any other libraries
#include"wordlist.h"
#include<iostream>
#include<cstring>
using std::cout;
using std::endl;
using std::strcat;
using std::strcmp;
using std::strcpy;
using std::strlen;
#endif

// Function:  resize
int Wordlist::resize(int amt) {

	// --- TODO --- 
	int dummyreturnval = -9000;
	return dummyreturnval;

}

// Function: Wordlist Constructor
Wordlist::Wordlist(const int cap) {

	// --- TODO --- 

}

// Function: Wordlist Copy Constructor
Wordlist::Wordlist(const Wordlist &other) {
    
	// --- TODO --- 

}

// Funtion: Assignment Operator
Wordlist& Wordlist::operator=(const Wordlist &other) {

	// --- TODO --- 
	return *this;

}

// Function: Wordlist Destructor.
Wordlist::~Wordlist() {
   
	// --- TODO --- 

}

// Function: display
int	Wordlist::display() const {

	// --- TODO --- 
	int dummyreturnval = -9000;
	return dummyreturnval;

}

// Function: at
const char* Wordlist::at(const int index) const {

	// --- TODO --- 
	return nullptr;

}

// Function: stored
int	Wordlist::stored() const {

	// --- TODO --- 
	int dummyreturnval = -9000;
	return dummyreturnval;
}

// Function: space
int	Wordlist::space() const {
	
	// --- TODO --- 
	int dummyreturnval = -9000;
	return dummyreturnval;

}

// Function: insert
int	Wordlist::insert(const int index, const char word[]) {
    
	// --- TODO --- 
	int dummyreturnval = -9000;
	return dummyreturnval;

}

// Funtion: erase
int	Wordlist::erase(const char word[]) {

	// --- TODO --- 
	int dummyreturnval = -9000;
	return dummyreturnval;

}

// Function: interleave
int	Wordlist::interleave(const Wordlist &other){

	return 0;
}

// Function: search
int Wordlist::search(const char word[]) const {

	// --- TODO --- 
	int dummyreturnval = -9000;
	return dummyreturnval;

}

// Funtion: sort
int	Wordlist::sort(const int mode) {
  
	// --- TODO --- 
	int dummyreturnval = -9000;
	return dummyreturnval;

}
// Funtion: yoink
int	Wordlist::yoink(const char word[], Wordlist &other) {
	
	// --- TODO --- 
	int dummyreturnval = -9000;
	return dummyreturnval;

}
