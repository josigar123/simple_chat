#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <inet/arpa.h>

void err_n_die(char *msg){
	fprintf(stderr, "%s\n", msg);
	exit(EXIT_FAILURE);
}

#endif /*COMMON_H*/
