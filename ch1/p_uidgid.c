/***********************************************
#
#      Filename: p_uidgid.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ---
#        Create: 2018-01-10 11:17:58
# Last Modified: 2018-01-10 11:17:58
***********************************************/
#include "apue.h"

int main(void)
{
	printf("uid = %d, gid = %d\n", getuid(), getgid());
	exit(0);
}
