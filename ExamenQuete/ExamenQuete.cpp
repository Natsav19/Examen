#include <iostream>
#include <ctime>
#include "Quete.h"
#include "Aventurier.h"
#include "FactoryQuete.h"
#include "Utilitaire.h"

int main()
{
	srand(time(NULL));
	Aventurier* monperso = new Aventurier(10);
	for (int i = 0; i != 12; i++)
	{
		Quete* quete = FactoryQuete::getRandomQuete();
		if (quete->getNivMin() <= monperso->getNiv())
		{
			monperso->ajouterQuete(quete);
		}
		else
		{
			delete quete;
		}
	}
	monperso->afficherQuete();

	monperso->SupprimerQuete();
	delete monperso;
}

