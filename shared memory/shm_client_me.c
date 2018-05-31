#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>

void main() {

	key_t key = 4711;

	int shmid = shmget(key, 5, 0666);

	char* shmptr = shmat(shmid, NULL, 0);

	printf("Server says %s\n", shmptr);

}
