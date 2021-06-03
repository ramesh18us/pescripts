Action()
{
		lr_start_transaction("TR01");
	
	sleep(1000 * (rand() % 10));
	
	lr_end_transaction("TR01", LR_AUTO);
	
	return 0;
}
