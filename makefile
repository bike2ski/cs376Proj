prog: main.o readLine.o execCmds.o sort.o sortLen.o
	gcc -o prog main.o readLine.o execCmds.o sort.o sortLen.o

main.o: main.c readLine.h execCmds.h sort.h sortLen.h
	gcc -c main.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

sort.o: sort.c sort.h
	gcc -c sort.c

sortLen.o: sortLen.c sortLen.h
	gcc -c sortLen.c

clean:
	rm -f *.o prog
