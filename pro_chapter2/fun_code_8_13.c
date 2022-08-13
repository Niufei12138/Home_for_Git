void (*signal(int , void(*)(int)))(int);
// 上下两种表达相同
typedef void (* pfun_t )(int);
pfun_t signal(int , void(*)(int));