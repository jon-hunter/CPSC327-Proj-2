#ifndef CONSTANTS_H
#define CONSTANTS_H
    
    #include <string>
    
    //default return types
    const int 			EMPTY			 				=  0;
    const int 			SUCCESS			 				=  0;
    const int 			FAIL							=  SUCCESS - 1;
    const int 			COULD_NOT_OPEN_FILE				=  SUCCESS - 2;
    const int 			NO_DATA_TO_WORK_ON				=  SUCCESS - 3;
    const int			UNIMPLEMENTED					=  SUCCESS - 4;
    const int			UNINITIALIZED					=  SUCCESS - 5;
    
    //default files to read and write data
    const std::string SOURCE_FILE 	= "source_file.txt";
    const std::string RESULTS_FILE 	= "results_file.txt";

#endif
