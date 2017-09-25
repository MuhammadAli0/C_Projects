
int main(int argc, char* argv[])
{
	if (argc != 3) {return 0;}
	if (strncmp(argv[1], "-r", 2) == 0){
		DeleteFileA(argv[2]);
	}
	return 0;
}
