#ifndef PARTICLE_FACTORY_H
#define PARTICLE_FACTORY_H 1

// geant4 headers
#include "G4ThreeVector.hh"

// c++ headers
#include <string>
using namespace std;

/// \class gparticle
/// <b> gparticle </b>\n\n
/// Contains particle informations:
/// - vertex
/// - momentum
/// - pid (int)
/// - name (string)
/// - generated time

class gparticle
{
public:
	gparticle(G4ThreeVector vertex, G4ThreeVector mom, int id, G4ThreeVector polar);
	~gparticle(){;}
	
	G4ThreeVector v, vs;  // vertex and spread
	G4ThreeVector p, ps;  // momentum and spread
	G4ThreeVector polarization;
	
	int pid;
	string name;
	
	int multiplicity;
	
	double vtime;
	
	///< Overloaded "<<" for gparticle class. Dumps infos on screen.
	friend ostream &operator<<(ostream &stream, gparticle);
	
};




#endif