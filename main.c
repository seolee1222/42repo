int	main(void)
{
	int	nbr = 42;
	int	*nbr2 = (void *)0;

	return (0);
}

typedef struct int2
{
	int a;
	int b;
} t_struct;

int main(void)
{
	t_struct temp;
	t_struct *i;

	temp.a = 2;
	temp.b = 3;

	temp.a += temp.b;
	5
	i = &temp; //고정스택에서의 간섭 이렇게 되면 위에 temp.a 의 값이 바뀜
	i->a = 2;
	i->b = 1;
	i = malloc(sizeof(t_struct)); // 동적메모리(새로운 공간 할당)에 의한 값이라 temp.a 의 값이 바뀌지않음
	i->a = 3;
}
int pop(t_stack *a, int data)
{
    t_node *temp;
    int value;

    if (a->head == NULL)
        return (-1);
    value= temp->data;
    temp = a->head;
    a->head = temp->next;
    if (a->head)
        a->head->prev = NULL;
    free(temp);
    a->len--;
    return(value);
}
int	main(void)
{
	int	nbr = 42;
	int	*nbr2 = (void *)0;

	return (0);
}

typedef struct int2
{
	int a;
	int b;
} t_struct;

int main(void)
{
	t_struct temp;
	t_struct *i;

	temp.a = 2;
	temp.b = 3;

	temp.a += temp.b;
	5
	i = &temp; //고정스택에서의 간섭 이렇게 되면 위에 temp.a 의 값이 바뀜
	i->a = 2;
	i->b = 1;
	i = malloc(sizeof(t_struct)); // 동적메모리(새로운 공간 할당)에 의한 값이라 temp.a 의 값이 바뀌지않음
	i->a = 3;
}


void    sa(t_stack *a, t_stack *b)
{
    t_node  *origin_head;
    t_node  *temp;

    origin_head = a->head;
    a->head = a->head->next;   
    a->head->prev = a->tail;
    temp = a->head->next;
    a->head->next = origin_head;
    origin_head->next = temp;
    temp->prev  = origin_head;
    a->tail->next = a->head;
    origin_head->prev = a->head;
}
