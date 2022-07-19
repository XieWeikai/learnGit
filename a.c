#include <stdio.h>

int main(){
	printf("hello,wcs!!!!!!!!!!!!\n");  // 注意我在test分支改了这一行

	printf("hello,xwk!!!!!!!!!!!!!\n"); // 在新的test分支修改了这一行

	printf("hello,dogdog!\n")

	printf("hello,wql!!!!!!!!!!!!!!!\n"); // 注意我在master分支改了这一行

	int a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	int add(int,int);
	printf("a + b = %d\n",add(a,b)); // test function add
	return 0;
}