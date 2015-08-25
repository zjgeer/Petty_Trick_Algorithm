CC = gcc
Non_Rep: Non_Repetition_Rand.o
	$(CC) $(LDFLAGS) Non_Repetition_Rand.o -o Non_Repetition_Rand
Non_Repetition_Rand.o: Non_Repetition_Rand.c
	$(CC) $(CFLAGS) -c Non_Repetition_Rand.c

clean:
	rm -rf *.o *~ *.exe Non_Rep
