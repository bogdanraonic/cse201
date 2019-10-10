CXX = g++
testcomplex.o: testcomplex.cpp complex.hpp
	$(CXX) -c testcomplex.cpp
complex.o: complex.cpp complex.hpp
	$(CXX) -c complex.cpp
testcomplex: testcomplex.o complex.o
	$(CXX) complex.o testcomplex.o -o testcomplex
clean:
	rm -f testcomplex
	rm -f *.o
