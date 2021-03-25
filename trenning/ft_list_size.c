#include <stdio.h>
#include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int		ft_list_size(t_list *begin_list)
{
	int size = 0;

	while (begin_list != 0)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

int main()
{
	t_list *list;

	list = malloc(sizeof(t_list));
	list->data = "asd";
	list->next = malloc(sizeof(t_list));
	list->next->data = "awdas";
	list->next->next = malloc(sizeof(t_list));
	list->next->next->data = "asdas";
	list->next->next->next = NULL;

	printf("size = %d\n", ft_list_size(list));

}
