/***********************************************
#
#      Filename: myerror.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-10 11:14:00
# Last Modified: 2018-01-10 11:14:00
***********************************************/
#include "apue.h"
#include <errno.h>

int main(int argc, char *argv[])
{
	fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
	errno = ENOENT;
	perror(argv[0]);
	exit(0);
}
