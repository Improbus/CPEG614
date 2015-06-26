sig A, B, C{
	
u : A->B->C
}


pred test{

	{a->b: A->B | a->b->C in u}

}

run test for 2
