prog: main.o readLine.o execCmds.o person5.o
	gcc -o prog main.o readLine.o execCmds.o person5.o

main.o: main.c readLine.h execCmds.h 
	gcc -c main.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

person5.o: person5.c person5.h
	gcc -c person5.c

clean:
	rm -f *.o prog
