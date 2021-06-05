compile: main.o math_utils.o
	g++ main.o math_utils.o -o math

main.o: Sources/main.cpp
	g++ -c Sources/main.cpp

math_utils.o: Sources/math_utils.cpp
	g++ -c Sources/math_utils.cpp

clean:
	rm *.o math
