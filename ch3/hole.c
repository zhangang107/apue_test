/***********************************************
#
#      Filename: hole.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-10 14:29:07
# Last Modified: 2018-01-10 14:29:07
***********************************************/
#include "apue.h"
#include <fcntl.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main()
{
	int fd;

	if ((fd = creat("file.hole", FILE_MODE)) < 0)
		err_sys("creat error");

	if (write(fd, buf1, 10) != 10)
		err_sys("buf1 write error");
	// offset now = 10
	
	if (lseek(fd, 16345, SEEK_SET) == -1)
		err_sys("lseek error");
	// offset now = 16345
	
	if (write(fd, buf2, 10) != 10)
		err_sys("buf2 write error");
	// offset now = 16355
	exit(0);
}
