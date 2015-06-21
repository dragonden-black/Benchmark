cache: cache.o
	g++ -std=gnu++11 -std=c++11 -o Cache Cache.o main.cpp

cache.o: Cache.cpp
	g++ -std=gnu++11 -std=c++11 -c -o Cache.o Cache.cpp

clean:
	rm Cache Cache.o
