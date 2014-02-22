all: sumt

sumt: Sum.cpp Main.cpp Sum.hpp
	rm -f *.o sumt
	g++ Sum.cpp Main.cpp -o sumt -std=c++11 -g

clean:
	rm -f *.o sumt

