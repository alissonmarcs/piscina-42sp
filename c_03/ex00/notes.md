## Funcionamento da função strcmp()
```c
strcmp(char *s1, char *s2);
```

Recebe duas strings e compara elas caracterer por caracterer, e retorna `-1` caso a primeira (`*s1`) seja menor, `0` caso as strings sejam iguais, ou `1` caso a primeira seja maior.

***IMPORTANTE***: a função `strcmp()` ***NÃO*** compara o comprimento das strings, ela encontra o caractere que difere e compara com o correspondente na segunda string, e retorna `-1` caso o caractere que difere, na primeira string, seja menor que o correspondente na segunda string (tabela ascii), ou 1 caso o caractere que difere, na primeira string, seja maior que o correspondente na segunda string (tabela ascii). E retorna 0 caso as strings sejam iguais. Exemplos:

```c
strcmp("carla", "carlaa");
```

O caractere que difere é o `'\0'` da primeira string, e seu correspondente é o `'a'` da segunda string. Como o `'\0'`  da primeira string é menor que o `'a'` da segunda string (tabela ascii), a função retorna `-1`. 

```c
strcmp("carla", "carla");
```
Retorna `0` porque as strings são iguais.

```c
strcmp("carlaa", "carla");
```
O caractere que difere é o ultimo `'a'` da primeira string, e seu correspondente é o `'\0'` da segunda string. Como o `'a'` da primeira string é maior que o `'\0'` da segunda string (tabela ascii), a função retorna `1`.

## Minha implementação

Se o primeiro caracter em ambas são iguais, verifica o segundo caracter, se o segundo caractere em ambas são iguais, verifica o terceiro caractere, e assim vai. É fácil de entender quando um caractere é maior ou menor que outro, então eu não desenvolvi essa parte, foquei mais em explicar o porque quando o ``` if (*s1 == *s2)``` for verdadeiro, temos a certeza de que todos os caracteres anteiores são iguais.

```c
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		// se o (*s1 == *s2) do while for verdadeiro para todos, temos
		// que todos os caracteres anteriores são iguais. como podemos
		// verificar se o (*s1 == *s2) do while deu verdadeiro para todos?
		// caso o (*s1 == *s2) do while fosse falso, a condição desse if
		// também seria. perceba que estamos dentro do bloco executado
		// caso o if seja verdadeiro. então, nesse ponto, podemos afirmar que
		// todos os caracteres anteriores são iguais, porque, caso não, a
		// condição desse if seria falso e não entraría-mos nesse bloco de 
		// execução.
		return (0);
	else if (*s1 > *s2)
		return (1);
	else
		return (-1);
}
```
