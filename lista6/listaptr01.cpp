void procedure(int *p, int *q){
int *temp;
*temp = *p;
*p = *q;
*q = *temp;
}
// A variavel temp nao deveria ser um ponteiro
