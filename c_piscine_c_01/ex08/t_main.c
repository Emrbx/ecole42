#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {10, 7, 8, 9, 1, 5};
	int size;
	
	size = 6;

	printf("Orijinali: ");
	putarr(tab, size);

	ft_sort_int_tab(tab, size);

	printf("Öbürüsümüsüşüsü: ");
	putarr(tab, size);
}