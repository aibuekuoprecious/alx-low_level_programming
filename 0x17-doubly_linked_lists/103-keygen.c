/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, checksum, product;
	size_t username_length, sum;
	char *s = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	username_length = strlen(argv[1]);
	key[0] = s[(username_length ^ 59) & 63];

	for (i = 0, sum = 0; i < username_length; i++)
		sum += argv[1][i];

	key[1] = s[(sum ^ 79) & 63];
	for (i = 0, product = 1; i < username_length; i++)
		product *= argv[1][i];
	key[2] = s[(product ^ 85) & 63];

	for (product = argv[1][0], i = 0; i < username_length; i++)
	{
		if ((char)product <= argv[1][i])
			product = argv[1][i];
	}
	srand(product ^ 14);
	key[3] = s[rand() & 63];

	for (product = 0, i = 0; i < username_length; i++)
		product += argv[1][i] * argv[1][i];
	key[4] = s[(product ^ 239) & 63];

	for (product = 0, i = 0; (char)i < argv[1][0]; i++)
		product = rand();
	key[5] = s[(product ^ 229) & 63];
	printf("%s\n", key);

	return (0);
}

