#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<errno.h>
#include<string.h>

//int main()
//{
//	FILE* p_file=fopen("test.txt", "w");
//	if (p_file == NULL)//��ʧ��
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	fclose(p_file);
//	p_file = NULL;
//	return 0;
//}

//int main()
//{
//	FILE*ptr = fopen("test.txt", "w");
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', ptr);
//	fputc('i', ptr);
//	fputc('t', ptr);
//	fclose(ptr);
//	ptr = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pread = fopen("..\\..\\test.txt", "r");
//	if (pread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	fclose(pread);
//	pread = NULL;
//	return 0;
//}
//int main()
//{
//	int ch = fgetc(stdin);//�Ӽ�������
//	fputc(ch, stdout);//�������Ļ
//	return 0;
//}
//int main()
//{
//	FILE*pf =fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	/*fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);*/
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char arr[1000] = { 0 };
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(arr, 1000, pf);
//	printf("%s", arr);//����txt��
//	//�����Ѿ����˻���ָ�����������⻻��
//	fgets(arr, 1000, pf);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	char arr[1000] = { 0 };
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs("hello\nworld\n", pf);
//	fputs("china", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char arr[1000] = { 0 };
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(arr, 1024, stdin);
//	fputs(arr, pf);
//	puts(arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
struct Peo
{
	char name[10];
	int age;
	char adress[30];
};
//int main()
//{
//	struct Peo s = {"���Ƿ�",99,"�����ѧA��"};
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fprintf(pf, "%s %d %s", s.name, s.age, s.adress);
//	//printf("%s %d %s", s.name, s.age, s.adress);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	struct Peo s = {0};
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fscanf(stdin, "%s %f %s",s.name, &(s.age), s.adress);
//	fprintf(stdout,"%s %.2f %s", s.name, s.age, s.adress);
//	fprintf(pf, "%s %.4f %s", s.name, s.age, s.adress);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	struct Peo s = { "abx",33,"cqu" };
//	char arr[20] = { 0 };
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	sprintf(arr, "%s %f %s", s.name, s.age, s.adress);
//	fprintf(pf, "%s", arr);
//	fscanf(pf, "%s %f %s", s.name, &(s.age), s.adress);
//
//	fprintf(stdout, "%s %f %s", s.name, s.age, s.adress);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	struct Peo s = { "������", 33, "�����ѧ" };
//	char arr[50] = { 0 };
//	sprintf(arr, "%s %d %s", s.name, s.age, s.adress);
//	//fputs(arr, pf);
//	fscanf(pf, "%s %d %s", s.name, &(s.age), s.adress);
//	fprintf(stdout, "%s %d %s", s.name, s.age, s.adress);
//	return 0;
//}
struct S
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct S s = { 0};
	FILE*pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fread(&s, sizeof(s), 1, pf);
	//fclose(pf);
	printf("%s %d %.3lf", s.name, s.age, s.score);
	return 0;
}