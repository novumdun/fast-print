#include <stdarg.h>
#include <stdio.h>

#include "macro_paras_opt.h"
#include "macro_struct.h"
#include "macro_type.h"

#include "fast_print_ext.h"

#include <oneos_config.h>
#include <os_task.h>
#include <shell.h>


#ifdef PYTHON_SATRT
#warning "ddddddddddddddddddddddd"
#endif

extern void
console_output_bin(char *buff, int data_len);

int test_2()
{
	char t0 = 01;
	unsigned char t1 = 2;
	short t2 = 3;
	unsigned short t3 = 4;
	int t4 = 5;
	unsigned int t5 = 6;
	float t6 = 1.0;
	double t7 = 9;

	while (1)
	{
		STR_BUF_WRITE_STRU("hellddddd");
		os_task_msleep(200);
		STR_BUF_WRITE_STRU("hellddddd %d %d %d %d %d", 0, 1, 2, 3, 4);
		os_task_msleep(200);
		t0 = 1, t1 = 2, t2 = 3, t3 = 4, t4 = 5, t5 = 6;
		STR_BUF_WRITE_STRU("hellddddd %d %d %d %d %d %d", t0, t1, t2, t3, t4, t5);
		os_task_msleep(200);
		t0 = 2, t1 = 3, t2 = 4, t3 = 5, t4 = 6, t5 = 7;
		STR_BUF_WRITE_STRU("hellddddd %d %d %d %d %d %d %f %f", t1, t1, t2, t3, t4, t5, t6, t7);
		os_task_msleep(200);
	}

	return 0;
}
SH_CMD_EXPORT(fast_print_test_2, test_2, "fast print test")