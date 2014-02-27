prog: main.o readLine.o execCmds.o person5.o reverse.o
	gcc -o prog main.o readLine.o execCmds.o person5.o reverse.o

main.o: main.c readLine.h execCmds.h reverse.h
	gcc -c main.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

reverse.o: reverse.c reverse.h
	gcc -c reverse.c

person5.o: person5.c person5.h
	gcc -c person5.c

clean:
	rm -f *.o prog
