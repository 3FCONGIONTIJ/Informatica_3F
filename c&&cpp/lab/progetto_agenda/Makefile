# Variabili
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Target principale (l'eseguibile)
agenda.exe: main.o funzioni.o
	$(CXX) -o agenda.exe main.o funzioni.o

# Regola per main.o
main.o: main.cpp agenda.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Regola per funzioni.o
funzioni.o: funzioni.cpp agenda.h
	$(CXX) $(CXXFLAGS) -c funzioni.cpp

# Regola per pulire i file
clean:
	rm -f *.o agenda.exe