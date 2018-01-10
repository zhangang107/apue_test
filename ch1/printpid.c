/***********************************************
#
#      Filename: printpid.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-10 10:56:01
# Last Modified: 2018-01-10 10:56:01
***********************************************/
#include "apue.h"

int main(void)
{
	printf("hello world from process ID: %ld\n", (long)getpid());
	exit(0);
}
