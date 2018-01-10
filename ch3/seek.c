/***********************************************
#
#      Filename: seek.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-10 14:22:14
# Last Modified: 2018-01-10 14:22:14
***********************************************/
#include "apue.h"

int main()
{
	if (lseek(STDIN_FILENO, 0, SEEK_CUR) == -1)
		printf("cannot seek\n");
	else
		printf("seek ok\n");
	exit(0);
}
