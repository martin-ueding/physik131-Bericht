#include <fstream>

int main(int argc, char *argv[])
{
	std::ofstream outfile;
	outfile.open(argv[1]);

	for (int i = 2; i < argc; ++i) {
		outfile << argv[i] << std::endl;
	}

	outfile.close();
}
