int i=7, j=3; // Declara duas variáveis do tipo inteiro, onde 'i' recebe 7 e 'j' recebe 3
int *p; // Declara um ponteiro do tipo inteiro chamado 'p' 
int **r; // Declara um ponteiro do tipo inteiro de outro ponteiro
p = &i; // O ponteiro 'p' recebe o endereço de memória de 'i'
r = &p; // O ponteiro 'r' recebe o endereço de memória do ponteiro 'p'
c = **r + j; // Uma variável 'c' (que não foi declarada) recebe o valor da soma entre o ponteiro do ponteiro 'p' e 'j', o que seria igual a 10. 