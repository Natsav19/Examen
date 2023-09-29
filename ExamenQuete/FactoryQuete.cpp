#include "FactoryQuete.h"
#include "Utilitaire.h"
#include "Quete.h"

Quete* FactoryQuete::getRandomQuete()
{
	Quete* quest;

	int chance = Utilitaire::genererNb(1,100);
	if (chance <= 75)
	{
		quest = new Quete(Difficulte(Facile));
	}
	else if (chance <= 90 && chance > 75)
	{
		quest = new Quete(Difficulte(Moyen));
	}
	else
	{
		quest = new Quete(Difficulte(Diffcile));
	}
	return quest;

}
