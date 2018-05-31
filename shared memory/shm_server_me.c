#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>

void main() {

	key_t key = 4711;

	int shmid = shmget(key, 1024, IPC_CREAT | 0666);

	char* shmptr = shmat(shmid, NULL, 0);

	sprintf(shmptr, "This is Doctor Hugo Strange. Return to your cells immediately.");

}
