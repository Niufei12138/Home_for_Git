void (*signal(int , void(*)(int)))(int);
// �������ֱ����ͬ
typedef void (* pfun_t )(int);
pfun_t signal(int , void(*)(int));