#define _CRT_SECURE_NO_WARNINGS 1

int* test()
{
	int a = 10;
	return &a;
    //���˾ֲ��ռ��a�����٣���Ӧ��ַ�ռ�
    //����������������ַ���ܻᱻ�������������
    //����ٸ����ݵ�ַ���ÿ��ܻ������
    //������Ҳ�Ǹ�Ұָ��
}
int main()
{
	int *p = test();
	*p = 20;
	return 0;
}