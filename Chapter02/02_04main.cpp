void my_function(void)
{

}

int main()
{
	//void my_void; void는 메모리를 차지않기 때문에 불가능.
	int i = 123;
	float f = 123.456f;

	void* my_void;
	my_void = (void*)&i;
	my_void = (void*)&f;

	return 0;
}