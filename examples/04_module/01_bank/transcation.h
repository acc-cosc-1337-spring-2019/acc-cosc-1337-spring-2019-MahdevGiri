
#ifndef TRANSCATION_H
#define TRANSCATION_H
#include<string>

class Transcation
{
	Transcation(std::string t, double amt, double bal) :
		type(t),amount(amt),balance(bal) {}
	
	friend std::ostream & operator<<(std::ostream & out, const Transcation & t);

private:
	double balance;
	std::string type;  // Deposit or withdraw or inquiry
	double amount;
};



#endif  // !Transcation_h
