#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int i;
	t_list *aux;
	
	aux = lst;
	while (lst->next != 0)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			i = lst->data;
			lst->data = lst->next->data;
			lst->next->data = i;
			lst = aux;
		}
		else
			lst = lst->next;
	}
	lst = aux;
	return (lst);
}
