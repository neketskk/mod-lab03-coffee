#include "Automata.h"
using namespace std;

void Automata::on()
{
    if (state == OFF)
    {
        state = WAIT;
    }
}

void Automata::off() 
{
	if (state == WAIT)
	{
		state = OFF;
	}
}

void Automata::coin(int m) 
{
	if (state == WAIT) state = ACCEPT;
	cash = cash + m;
}
