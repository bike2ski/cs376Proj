prog: main.o readLine.o execCmds.o encryptLine.o decryptLine.o
	gcc -o prog main.o readLine.o execCmds.o encryptLine.o decryptLine.o

main.o: main.c readLine.h execCmds.h encryptLine.h decryptLine.h
	gcc -c main.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

encryptLine.o: encryptLine.c encryptLine.h
	gcc -c encryptLine.c

decryptLine.o: decryptLine.c decryptLine.h
	gcc -c decryptLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

clean:
	rm -f *.o prog
