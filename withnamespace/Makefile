compile: main.o utlz.o
	g++ main.o utlz.o -o mainer

main.o: Sources/main.cpp
	g++ -c Sources/main.cpp

utlz.o: Sources/utlz.cpp
	g++ -c Sources/utlz.cpp

clean:
	rm *.o mainer
