#include<stdio.h>

int main(void)
{
	int flag = 1, tam, i, placeholder, contador;
	int array[] = {10,321,0,4,13,101,93,2,14,100};
 	
 	tam = sizeof(array) / 4;
 	
 	while(flag)
 	{
 		contador = 0;
 		for(i = 0; i < tam-1; i++)
 		{
 			if(array[i] > array[i+1])
 			{
 				placeholder = array[i];
 				array[i] = array[i+1];
 				array[i+1] = placeholder;
			}
			else
			{
				contador++;
				if(contador == tam-1)
				{
					flag = 0;
				}
			}
		}	
	}
	
	for(i = 0; i < tam; i++)
	{
		printf("%d ", array[i]);
	}
	
	return 0;
}
