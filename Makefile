main_A:recorder.o main.o
	g++ -o main_A recorder.o main.o

main.o: main.cpp recorder.h
	g++ -c main.cpp recorder.h

recorder.o: recorder.cpp recorder.h
	g++ -c recorder.cpp recorder.h

clean:
	rm main_A *.o *.gch
