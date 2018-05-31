#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void main() {

	int fd[2];

	pipe(fd);

	if (fork() == 0) {

		char *msg = "Hello";
		write(fd[1], msg, strlen(msg) + 1);

	} else {

		char buf[1024];
		read(fd[0], buf, 1024);
		printf("Message Recieved: %s", buf);

	}

}
