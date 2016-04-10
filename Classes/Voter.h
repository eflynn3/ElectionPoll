#include <iostream> 
#include <string> 
#ifndef VOTER_H
#define VOTER_H
using namespace std; 

class Voter { 
	public: 
		Voter();
		void setAge(string ageVal);
		void setGender(string genderVal);
		void setCandidate(string candidateVal ); 
		void setDorm(string dormVal); 
	private: 
		string age; 
		string gender; 
		string candidate;
		string dorm; 
};

#endif 
		 
