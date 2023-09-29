#include "Utilitaire.h"
#include <iostream>

int Utilitaire::genererNb(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}