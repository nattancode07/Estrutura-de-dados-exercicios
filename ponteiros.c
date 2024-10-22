/*Ponteiros*/

/*Os ponteiros são declarados pelo símbolo "*", A forma geral da declaração é:

Tipo_da_variável*Nome_da-Variável

Exemplos:*/

int *p;

float *q;

char *r;

/*Operadores*/

int x = 5;

int *pt_x;

/*Ponteiro pt_x recebe o endereço de memória da variável x */

pt_x = &x;

/*Alterando o valor da variável "x" pelo ponteiro "pt_x"*/

*pt_x = 50;