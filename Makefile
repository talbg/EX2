all: main.o myBank.o mains maind myBanks myBankd output


output: main.o myBank.o
	gcc -Wall -g main.o myBank.o -o output

main.o: main.c
	gcc -Wall -g -fPIC -c main.c

myBank.o: myBank.c myBank.h
	gcc -Wall -fPIC -c myBank.c

myBanks: myBank.o myBank.o
	ar -rcs libmyBank.a myBank.o

myBankd: myBank.o myBank.o
	gcc -shared -o libmyBank.so myBank.o

mains: main.o myBanks
	gcc -Wall -g -o mains main.o libmyBank.a

maind: main.o myBankd
	gcc -Wall -g -o maind main.o ./libmyBank.so
.PHONY: clean

clean:
	rm *.o mains maind  
