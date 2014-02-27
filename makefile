
prog: main.o readLine.o execCmds.o encryptLine.o decryptLine.o person5.o reverse.o sort.o sortLen.o
	gcc -o prog main.o readLine.o execCmds.o encryptLine.o decryptLine.o person5.o reverse.o sort.o sortLen.o

main.o: main.c readLine.h execCmds.h encryptLine.h decryptLine.h reverse.h sortLen.h sort.h person5.h
	gcc -c main.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

encryptLine.o: encryptLine.c encryptLine.h
	gcc -c encryptLine.c

decryptLine.o: decryptLine.c decryptLine.h
	gcc -c decryptLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

sort.o: sort.c sort.h
	gcc -c sort.c

sortLen.o: sortLen.c sortLen.h
	gcc -c sortLen.c

reverse.o: reverse.c reverse.h
	gcc -c reverse.c

person5.o: person5.c person5.h
	gcc -c person5.c


clean:
	rm -f *.o prog
