//============================================================================
// Name        : fileio
// Author      : Jon Hunter
// Version     :
// Copyright   : Steal this code!
// Description : fileio functions moved from main
//============================================================================
 
#include <string>
#include <vector>
#include "../includes/constants.h"
#include "../includes/utils.h"
#include "../includes/fileio.h"

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int loadData(const std::string &filename, std::vector<process> &myProcesses) {
	return UNIMPLEMENTED;
}

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const std::string &filename, std::vector<process> &myProcesses) {
	return UNIMPLEMENTED;
}
