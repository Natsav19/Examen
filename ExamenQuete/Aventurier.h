#pragma once
#include  "Quete.h"
#include  "FactoryQuete.h"
#include <vector>
class Aventurier
{
private:
	int niveau;
	std::vector<Quete*> tabQuete;
public:
	Aventurier(int niv);
	~Aventurier();

	void afficherQuete();
	void ajouterQuete(Quete* quete);
	int getNiv();

	//Suprimmer
	void SupprimerQuete();
};

