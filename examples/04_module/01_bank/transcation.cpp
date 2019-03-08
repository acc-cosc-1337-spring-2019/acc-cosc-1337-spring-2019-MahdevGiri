#include"transcation.h"

std::ostream & operator<<(std::ostream & out, const Transcation & t)
{
	out << "Type: " << "Amount " << "Balance ";
	out << t.type <<"  "<< t.amount <<"  "<< t.balance;
	return out;
}