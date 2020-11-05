// gemc headers
#include "flux_hitprocess.h"

map<string, double> flux_HitProcess :: integrateDgt(MHit* aHit, int hitn)
{
	map<string, double> dgtz;
	vector<identifier> identity = aHit->GetId();

	int id  = identity[0].id;
	
	if(verbosity>4)
		cout << log_msg << " flux detector id: " << id << endl;
	
	dgtz["hitn"] = hitn;
	dgtz["id"]   = id;
	
	return dgtz;
}

vector<identifier>  flux_HitProcess :: processID(vector<identifier> id, G4Step* aStep, detector Detector)
{
	id[id.size()-1].id_sharing = 1;
	return id;
}


// - electronicNoise: returns a vector of hits generated / by electronics.
vector<MHit*> flux_HitProcess :: electronicNoise()
{
	vector<MHit*> noiseHits;
	return noiseHits;
}



map< string, vector <int> >  flux_HitProcess :: multiDgt(MHit* aHit, int hitn)
{
	map< string, vector <int> > MH;
	
	return MH;
}



// - charge: returns charge/time digitized information / step
map< int, vector <double> > flux_HitProcess :: chargeTime(MHit* aHit, int hitn)
{
	map< int, vector <double> >  CT;

	return CT;
}

// - voltage: returns a voltage value for a given time. The inputs are:
// charge value (coming from chargeAtElectronics)
// time (coming from timeAtElectronics)
double flux_HitProcess :: voltage(double charge, double time, double forTime)
{
	return 0.0;
}












