/***********************************************
#
#      Filename: mycat.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-10 10:40:47
# Last Modified: 2018-01-10 10:40:47
***********************************************/
#include "apue.h"

#define BUFFSIZE 4096

int main(void)
{
	int n;
	char buf[BUFFSIZE];

	while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
		if (write(STDOUT_FILENO, buf, n) != n)
			err_sys("write error");
	
	if (n < 0)
		err_sys("read error");
	exit(0);
}
