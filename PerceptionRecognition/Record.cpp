

#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

#include <GRT/GRT.h>

#include "PerceptionRecognition.h"

using namespace GRT;
using namespace std;

// Call with:
// record classification_type dir/to/save/data/to
// ...
// File loaded
// Hit any key to start
// ...
// waiting
// Class X
// waiting
// Class Y
// waiting
// Class Y
// Class X
// waiting
// Finished
// Keep (y/n): y 
// write comment: Ok, that worked well

void usage() {
	cerr << "Usage: record path/to/data/dir classification_type" << endl;
}

// From https://stackoverflow.com/a/10467633/3304125
// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d_%X", &tstruct);

    return buf;
}

int main(int argc, const char * argv[])
{
	if (argc != 3) {
		usage()
		cerr << "Expected 2 arguments, got " << argc - 1 << endl;
		return EXIT_FAILURE;
	}

	auto recognition = PerceptionRecognition(argv[1]);
	string output_dir = argv[2];

	string notes;
	cout << "Finished Collection" << endl;
	cout << "Add notes: ";
	getline(cin, notes);
  data.setInfoText(notes);

  data.save(output_dir + "_" + name + currentDateTime() + string(".grt"));

  return EXIT_SUCCESS;
}
