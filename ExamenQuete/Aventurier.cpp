#include "Aventurier.h"
Aventurier::Aventurier(int niv)
{
	niveau = niv;
}
Aventurier::~Aventurier(){}


void Aventurier::afficherQuete()
{
	for (Quete* quete : tabQuete)
	{
		std::cout << quete->to_string() << std::endl;
	}
}


void Aventurier::ajouterQuete(Quete* quest)
{
	tabQuete.push_back(quest);
}


int Aventurier::getNiv()
{
	return niveau;
}

//Suprimmer tous les quetes
void Aventurier::SupprimerQuete()
{
	for (auto quete : tabQuete)
	{
		delete quete;
	}
}