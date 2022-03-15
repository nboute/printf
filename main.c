#include "main.h"
#include <limits.h>
int		main(void)
{

	printf("|%d\n", _printf("%5c", 'a'));
	printf("|%d\n", printf("%5c", 'a'));

	printf("|%d\n", _printf("%-5c", 'a'));
	printf("|%d\n", printf("%-5c", 'a'));

	printf("|%d\n", _printf("%-5c", 'a'));
	printf("|%d\n", printf("%-5c", 'a'));

	printf("|%d\n", _printf("%10p", -1));
	printf("|%d\n", printf("%10p", -1));

	printf("|%d\n", _printf("%10p", NULL));
	printf("|%d\n", printf("%10p", NULL));

	printf("|%d\n", _printf("%-10p", -1));
	printf("|%d\n", printf("%-10p", -1));

	printf("|%d\n", _printf("%-10p", NULL));
	printf("|%d\n", printf("%-10p", NULL));

	printf("|%d\n", _printf("%10s", "hello"));
	printf("|%d\n", printf("%10s", "hello"));

	printf("|%d\n", _printf("%10s", NULL));
	printf("|%d\n", printf("%10s", NULL));

	printf("|%d\n", _printf("%-10s", "hello"));
	printf("|%d\n", printf("%-10s", "hello"));

	printf("|%d\n", _printf("%-10s", NULL));
	printf("|%d\n", printf("%-10s", NULL));


	printf("|%d\n", _printf("%2p", -1));
	printf("|%d\n", printf("%2p", -1));

	printf("|%d\n", _printf("%2p", NULL));
	printf("|%d\n", printf("%2p", NULL));

	printf("|%d\n", _printf("%-2p", -1));
	printf("|%d\n", printf("%-2p", -1));

	printf("|%d\n", _printf("%-2p", NULL));
	printf("|%d\n", printf("%-2p", NULL));

	printf("|%d\n", _printf("%2s", "hello"));
	printf("|%d\n", printf("%2s", "hello"));

	printf("|%d\n", _printf("%2s", NULL));
	printf("|%d\n", printf("%2s", NULL));

	printf("|%d\n", _printf("%-2s", "hello"));
	printf("|%d\n", printf("%-2s", "hello"));

	printf("|%d\n", _printf("%-2s", NULL));
	printf("|%d\n", printf("%-2s", NULL));


	printf("|%d\n", _printf("%d", -1));
	printf("|%d\n", printf("%d", -1));

	printf("|%d\n", _printf("%d", INT_MAX));
	printf("|%d\n", printf("%d", INT_MAX));

	printf("|%d\n", _printf("%-d", -1));
	printf("|%d\n", printf("%-d", -1));

	printf("|%d\n", _printf("%-d", INT_MAX));
	printf("|%d\n", printf("%-d", INT_MAX));

	printf("|%d\n", _printf("%-d", 0));
	printf("|%d\n", printf("%-d", 0));

	printf("|%d\n", _printf("%10s", "hello"));
	printf("|%d\n", printf("%10s", "hello"));

	printf("|%d\n", _printf("%10s", NULL));
	printf("|%d\n", printf("%10s", NULL));

	printf("|%d\n", _printf("%-10s", "hello"));
	printf("|%d\n", printf("%-10s", "hello"));

	printf("|%d\n", _printf("%-10s", NULL));
	printf("|%d\n", printf("%-10s", NULL));


	printf("|%d\n", _printf("%2d", -1));
	printf("|%d\n", printf("%2d", -1));

	printf("|%d\n", _printf("%2d", INT_MAX));
	printf("|%d\n", printf("%2d", INT_MAX));

	printf("|%d\n", _printf("%2d", 0));
	printf("|%d\n", printf("%2d", 0));

	printf("|%d\n", _printf("%-2d", -1));
	printf("|%d\n", printf("%-2d", -1));

	printf("|%d\n", _printf("%-2d", INT_MAX));
	printf("|%d\n", printf("%-2d", INT_MAX));

	printf("|%d\n", _printf("%-2d", 0));
	printf("|%d\n", printf("%-2d", 0));

	printf("|%d\n", _printf("%2s", "hello"));
	printf("|%d\n", printf("%2s", "hello"));

	printf("|%d\n", _printf("%2s", NULL));
	printf("|%d\n", printf("%2s", NULL));

	printf("|%d\n", _printf("%-2s", "hello"));
	printf("|%d\n", printf("%-2s", "hello"));

	printf("|%d\n", _printf("%-2s", NULL));
	printf("|%d\n", printf("%-2s", NULL));
	printf("|%d\n", _printf("%-10s", "Best School"));
	printf("|%d\n", printf("%-10s", "Best School"));
	printf("|%d\n", _printf("%0-5s", "Best School"));
	printf("|%d\n", printf("%0-5s", "Best School"));
	printf("|%d\n", _printf("%020s", "Best School"));
	printf("|%d\n", printf("%020s", "Best School"));

	printf("|%d\n", _printf("%10d", -65432));
	printf("|%d\n", printf("%10d", -65432));
	printf("|%d\n", _printf("%05d", -65432));
	printf("|%d\n", printf("%05d", -65432));
	printf("|%d\n", _printf("%020d", -65432));
	printf("|%d\n", printf("%020d", -65432));

	printf("|%d\n", _printf("%+10d", 65432));
	printf("|%d\n", printf("%+10d", 65432));
	printf("|%d\n", _printf("%+05d", 65432));
	printf("|%d\n", printf("%+05d", 65432));
	printf("|%d\n", _printf("%+020d", 65432));
	printf("|%d\n", printf("%+020d", 65432));


	printf("|%d\n", _printf("% 10d", 65432));
	printf("|%d\n", printf("% 10d", 65432));
	printf("|%d\n", _printf("% 05d", 65432));
	printf("|%d\n", printf("% 05d", 65432));
	printf("|%d\n", _printf("% 020d", 65432));
	printf("|%d\n", printf("% 020d", 65432));
	printf("|%d\n", _printf("%#10x", -65432));
	printf("|%d\n", printf("%#10x", -65432));
	printf("|%d\n", _printf("%#05x", -65432));
	printf("|%d\n", printf("%#05x", -65432));
	printf("|%d\n", _printf("%#020x", -65432));
	printf("|%d\n", printf("%#020x", -65432));
	printf("|%d\n", _printf("%#20x", -65432));
	printf("|%d\n", printf("%#20x", -65432));

	printf("|%d\n", _printf("% #20x", -65432));
	printf("|%d\n", printf("% #20x", -65432));
	printf("|%d\n", _printf("%+#20x", -65432));
	printf("|%d\n", printf("%+#20x", -65432));

	printf("|%d\n", _printf("% #20d", -65432));
	printf("|%d\n", printf("% #20d", -65432));
	printf("|%d\n", _printf("%+#20d", -65432));
	printf("|%d\n", printf("%+#20d", -65432));

	printf("|%d\n", _printf("%*X", 10, -1));
	printf("|%d\n", printf("%*X", 10, -1));
	return (0);
}
