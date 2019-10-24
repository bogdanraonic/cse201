CXX = g++

Base.o: Base.cpp Base.hpp
	$(CXX) -c Base.cpp
	
Derived.o: Derived.cpp Derived.hpp
	$(CXX) -c Derived.cpp
	
main.o: main.cpp
	$(CXX) -c main.cpp
	
testCode: Base.o Derived.o main.o
	$(CXX) Base.o Derived.o main.o -o testCode

clean: 
	rm -f testCode 
	rm -f *.o