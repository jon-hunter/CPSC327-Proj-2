#ifndef UTILS_H
#define UTILS_H

    #include <vector>
    #include "../includes/constants.h"

    //some data structures
    enum SORT_ORDER { PROCESS_NUMBER, CPU_TIME, START_TIME };
    struct process{	int process_number=UNINITIALIZED;
		            int cpu_time=UNINITIALIZED;
		            int start_time=UNINITIALIZED;};
    
    void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);
    process getNext(std::vector<process> &myProcesses);
    int getSize(std::vector<process> &myProcesses);
    int handleMissingData(std::vector<process> &myProcesses) ;
    
#endif
