CFLAGS = -Wall
TARGET = myexe


#link (-o) all object files into the executable myexe
all: fileio.o utils.o proj_refactor_file.o
	g++ $(CFLAGS) -o $(TARGET) proj_refactor_file.o fileio.o utils.o
	
	
#rebuild object file if fileio.cpp, or fileio.h or constants.h changes
#compile the .cpp file to an object file (-c)
fileio.o: ../fileio/fileio.cpp ../includes/fileio.h ../includes/constants.h
	g++ $(CFLAGS) -c ../fileio/fileio.cpp
	
utils.o: ../utils/utils.cpp ../includes/utils.h ../includes/constants.h
	g++ $(CFLAGS) -c ../utils/utils.cpp
	
proj_refactor_file.o: proj_refactor_file.cpp
	g++ $(CFLAGS) -c proj_refactor_file.cpp
	

#type 'make clean' to remove myexe and all .o files	
clean:
	rm $(TARGET) *.o
# I saw this online, it runs clean and then all, to rebuild project.
re: clean all
