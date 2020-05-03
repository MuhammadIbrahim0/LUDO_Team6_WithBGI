#include "graphics.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>                     // Provides exit
#include <ctype.h>                      // Provides toupper
using namespace std;

#include "Ludu.h"
int main()
{
	{
		Ludu myludu;
	}
	
	initwindow(500, 500, "First Sample");
	circle(getmaxx()/2, getmaxy()/2, getmaxx()/3);
	while (!kbhit())
	{
		delay(200);
	}
	return 0;
}


