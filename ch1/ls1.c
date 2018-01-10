/***********************************************
#
#      Filename: ls1.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-10 10:26:21
# Last Modified: 2018-01-10 10:26:21
***********************************************/
#include "apue.h"
#include <dirent.h>

int main(int argc, char *argv[])
{
	DIR *dp;
	struct dirent *dirp;

	if (argc != 2)
		err_quit("usage: ls directory_name");

	if ((dp=opendir(argv[1])) == NULL)
		err_sys("can't open %s", argv[1]);
	while((dirp=readdir(dp)) != NULL)
		printf("%s\n", dirp->d_name);

	closedir(dp);
	exit(0);
}
