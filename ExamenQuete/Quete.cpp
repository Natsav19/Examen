#include "Quete.h"
#include "Utilitaire.h"
#include <string>

Quete::Quete(Difficulte nivDifficulte)
{
	if (nivDifficulte == Difficulte(Facile))
	{
		nom = "Quete Facile";
		nivMin = Utilitaire::genererNb(1, 10);
		recompenseOr = Utilitaire::genererNb(100, 1000);
		expRecu = Utilitaire::genererNb(100, 2000);
	}
	else if (nivDifficulte == Difficulte(Moyen))
	{
		nom = "Quete Moyenne";
		nivMin = Utilitaire::genererNb(10,25);
		recompenseOr = Utilitaire::genererNb(1000,5000);
		expRecu = Utilitaire::genererNb(2000,4000);
	}
	else
	{
		nom = "Quete Difficile";
		nivMin = Utilitaire::genererNb(25,99);
		recompenseOr = Utilitaire::genererNb(5000,35000);
		expRecu = Utilitaire::genererNb(4000,14000);
	}
}
Quete::~Quete() {}

std::string Quete::to_string()
{
	std::string info;
	info.append("Nom :" + nom + "\n");
	info.append("Niveau Min :" + std::to_string(this->getNivMin()) + "\n");
	info.append("Recompense :" + std::to_string(this->getRecompense()) + "\n");
	info.append("EXP:" + std::to_string(this->getEXP()) + "\n");

	return info;
}



//Les Fonctions Get
Difficulte Quete::getDifficulte()
{
	return nivDifficulte;
}

int Quete::getNivMin()
{
	return nivMin;
}

int Quete::getRecompense()
{
	return recompenseOr;
}

int Quete::getEXP()
{
	return expRecu;
}