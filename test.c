#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <errno.h>
#include <string.h>


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");//FILE 系统创建的结构体变量
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf=fopen("test2.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//写文件
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	fputc('a', pfWrite);
//	fputc('b', pfWrite);
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//读文件
// 
// fgetc 字符输入函数，从文件流中读取一个字符fgetc(stdin/pfRead（文件指针）)，从二者中读取一个字符，返回int
// fputc 字符输出函数，将一个字符写入文件流fputc('a', stdout/pfWrite（文件指针）);a 要写入的字符，输出的地方，返回int
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	printf("%c ", fgetc(pfRead));//%c打印单个字符。%d打印ascii值。
//	printf("%c ", fgetc(pfRead));//fgetc返回的是int类型是为了表示0-255ascii值和-1EOF值
//	printf("%c ", fgetc(pfRead));
//
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//
//int main()
//{
//	int a = fgetc(stdin);
//	fputc(a, stdout);
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(buf, 1024, pf);
//	puts(buf);
//	//printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	/*fgets(buf, 1024, pf);
//	puts(buf);*/
//	//printf("%s", buf);
//	fputs("hello\n", pf);
//	fputs("tom\n", pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入读取
//	//fputs(buf, stdout);//输出到标准输出
//
//	//默认标准输入，输出到标准输出
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,0.28f,"hello" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化形式写文件(输出)
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//把结构体内的信息以格式化的形式输出到文件里
//
//
//	fclose(pf);
//	pf = NULL;
//
//	
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化形式(输入)数据
//	fscanf(pf, "%d %f %s",&(s.n), &(s.score), &(s.arr));//把文件内的信息以格式化的形式输入到结构体内
//	printf("%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//
//
//	return 0;
//}


////标准输入输出流
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));//把键盘输入信息格式化输入到相应结构体地址
//	fprintf(stdout, "%d %.2f %s", s.n,s.score, s.arr);//把结构体相应信息，输出到屏幕
//
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,0.28f,"hello" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);//把结构体内容输出到字符串
//	//printf("%s", buf);
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));//把字符串内容输入到结构体
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}

//scanf/printf 是针对标准输入流/标准输出流的 格式化输入/输出语句
//fscanf/fprintf 是针对所有输入流/所有输出流的 格式化输入/输出语句
//sscanf 是从字符串中读取格式化数据
//sprintf 是把格式化数据输出成（存储成）字符串

//struct S
//{
//	char arr[10];
//	int age;
//	double score;
//
//};
//
//int main()
//{
//	//struct S s = { "张三",18,9.8 };
//	struct S tmp = {0};
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.arr, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件的随机读取
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//
//	}
//	//定位文件指针
//	fseek(pf, -2, SEEK_END);
//	//读取文件
//	int tmp = fgetc(pf);
//	printf("%c\n", tmp);
//	rewind(pf);
//	tmp = fgetc(pf);
//	printf("%c\n", tmp);
//	/*int pos=ftell(pf);
//	printf("%d\n", pos);*/
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//feof
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		perror("wrong");
		return 0;

	}
	//读文件
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)//fgetc 当读取失败时或者遇到文件结尾时，都会返回EOF
	{
		putchar(ch);
	}

	if (ferror(pf))//判断是否读取失败返回EOF
	{
		printf("error\n");
	}
	else if (feof(pf))//还是文件结尾返回EOF
	{
		printf("end of file.\n");

	}


	fclose(pf);
	pf = NULL;
	return 0;
}