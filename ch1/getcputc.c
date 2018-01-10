/***********************************************
#
#      Filename: getcputc.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-10 10:49:35
# Last Modified: 2018-01-10 10:49:35
***********************************************/
#include "apue.h"

int main(void)
{
	int c;
	while((c = getc(stdin)) != EOF)
		if (putc(c, stdout) == EOF)
			err_sys("output error");

	if (ferror(stdin))
		err_sys("input error");
	exit(0);
}
