

all: NeuralNet
	
NeuralNet: Matrix.o
	gcc Matrix.o -o NeuralNet

Matrix.o: Matrix.c
	gcc -g -c Matrix.c 

clean: 
	rm -rf *.o NeuralNet
