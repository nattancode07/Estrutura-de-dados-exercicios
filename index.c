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

/*Registros*/

/*Registros contem todos os dados para identificar uma entidade do mundo real,
e que em computação são representados por variáveis.*/

struct Aluno  {
  char nome[100];
  int matricula;
  char nascimento[11];
  char sexo;
  char telefone[15];
  char email[100];
};

/*declaração de struct*/

struct Aluno;

/*Estrutura Aninhada*/

struct Motor {
  int potencia;
  char tipo[20];
};

struct Carro {
  char modelo[50];
  int ano;
  struct Motor motor;
};