CC = g++
FLAGS = -std=c++17 -O2

A : Makefile A.cpp
	   $(CC) A.cpp -o Aa $(FLAGS)
	   ./Aa < A

B : Makefile B.cpp
	  $(CC) B.cpp -o Bb $(FLAGS)
	  ./Bb < B

C : Makefile C.cpp
	 $(CC) C.cpp -o Cc $(FLAGS)
	 ./Cc < C

clean:
	rm Aa Bb Cc
