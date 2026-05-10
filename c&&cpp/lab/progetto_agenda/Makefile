CXX = g++
CXXFLAGS = -std=c++17 -Wall

agenda.exe: main.o gestore_contatti.o contatto.o
	$(CXX) -o agenda.exe main.o gestore_contatti.o contatto.o

main.o: main.cpp gestore_contatti.h
	$(CXX) $(CXXFLAGS) -c main.cpp

gestore_contatti.o: gestore_contatti.cpp gestore_contatti.h contatto.h
	$(CXX) $(CXXFLAGS) -c gestore_contatti.cpp

contatto.o: contatto.cpp contatto.h
	$(CXX) $(CXXFLAGS) -c contatto.cpp

clean:
	rm -f *.o agenda.exe