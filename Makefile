all: 

walk.o: walk.cpp
	g++ -Wall walk.cpp 
	

useWalker.o: useWalker.cpp
	g++ -Wall useWalker.cpp

Walker.o: Walker.cpp
	g++ -Wall Walker.cpp




clean:
	rm