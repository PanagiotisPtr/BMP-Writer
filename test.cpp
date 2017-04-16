#include "BMP_Writer.h"

using namespace std;

// Test

int main(){
	vector<vector<Color> > test(1024, vector<Color>(1024, Color(255, 0, 255)));
	write_bmp("test.bmp", 72, test);
}