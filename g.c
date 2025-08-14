	last_a = *a; 
	while(last_a->next->next)
		last_a = last_a->next;
	new_head_a = last_a->next;
	last_a->next = NULL;
	new_head_a->next = *a;
	*a = new_head_a;