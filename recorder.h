#include <cmath>
using namespace std;

class Recorder{
	public:
		Recorder();
		void setK(int k);
		int getK();
		int setRA(float Sa);
		int getRA();
		void setRB(int RA_old, float Sb);
		int getRB();
		int cal(int R1, int R2, float S1);
	private:
		int K;
		int RA;
		int RB;
};
