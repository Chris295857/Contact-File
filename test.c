#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <errno.h>
#include <string.h>


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");//FILE ϵͳ�����Ľṹ�����
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
//	//�򿪳ɹ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//д�ļ�
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	fputc('a', pfWrite);
//	fputc('b', pfWrite);
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//���ļ�
// 
// fgetc �ַ����뺯�������ļ����ж�ȡһ���ַ�fgetc(stdin/pfRead���ļ�ָ�룩)���Ӷ����ж�ȡһ���ַ�������int
// fputc �ַ������������һ���ַ�д���ļ���fputc('a', stdout/pfWrite���ļ�ָ�룩);a Ҫд����ַ�������ĵط�������int
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	printf("%c ", fgetc(pfRead));//%c��ӡ�����ַ���%d��ӡasciiֵ��
//	printf("%c ", fgetc(pfRead));//fgetc���ص���int������Ϊ�˱�ʾ0-255asciiֵ��-1EOFֵ
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
//	//fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
//	//fputs(buf, stdout);//�������׼���
//
//	//Ĭ�ϱ�׼���룬�������׼���
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
//	//��ʽ����ʽд�ļ�(���)
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//�ѽṹ���ڵ���Ϣ�Ը�ʽ������ʽ������ļ���
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
//	//��ʽ����ʽ(����)����
//	fscanf(pf, "%d %f %s",&(s.n), &(s.score), &(s.arr));//���ļ��ڵ���Ϣ�Ը�ʽ������ʽ���뵽�ṹ����
//	printf("%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//
//
//	return 0;
//}


////��׼���������
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
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));//�Ѽ���������Ϣ��ʽ�����뵽��Ӧ�ṹ���ַ
//	fprintf(stdout, "%d %.2f %s", s.n,s.score, s.arr);//�ѽṹ����Ӧ��Ϣ���������Ļ
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
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);//�ѽṹ������������ַ���
//	//printf("%s", buf);
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));//���ַ����������뵽�ṹ��
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}

//scanf/printf ����Ա�׼������/��׼������� ��ʽ������/������
//fscanf/fprintf ���������������/����������� ��ʽ������/������
//sscanf �Ǵ��ַ����ж�ȡ��ʽ������
//sprintf �ǰѸ�ʽ����������ɣ��洢�ɣ��ַ���

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
//	//struct S s = { "����",18,9.8 };
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

//�ļ��������ȡ
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//
//	}
//	//��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	//��ȡ�ļ�
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
	//���ļ�
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)//fgetc ����ȡʧ��ʱ���������ļ���βʱ�����᷵��EOF
	{
		putchar(ch);
	}

	if (ferror(pf))//�ж��Ƿ��ȡʧ�ܷ���EOF
	{
		printf("error\n");
	}
	else if (feof(pf))//�����ļ���β����EOF
	{
		printf("end of file.\n");

	}


	fclose(pf);
	pf = NULL;
	return 0;
}