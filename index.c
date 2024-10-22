//Estrutura de Dados Heterogêneas

/*Struct: é o conjunt de variáveis de diferentes tipos organizadas sob um único nome. 
Criar uma struct é equivalente a criar um novo tipo de dado.*/

struct Pessoa {
  char nome[50];
  int idade;
  float salario;
};

/*Vetor: Usado para armazenar uma lista de elementos do mesmo tipo*/

int numeros[5] = {1,2,3,4,5};

/*Matriz: Uma matriz é essencialmente um vetor de vetores, 
permitindo a organização de dados em duas (ou mais) dimensões.
Todos os elementos de uma matriz devem ser do mesmo tipo.*/

int matriz[3][3] = {
  {1,2,3},
  {4,5,6},
  {7,8,9}
};

/*Classes são uma evolução das structs oferencendo funcionalidades mais avançadas
como métodos, encapsulamento e herança.*/