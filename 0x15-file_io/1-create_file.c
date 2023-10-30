#include "main.h"


/**
 * create_file - Create file.
 * @filename: the name of the file to created.
 * @text_content: content of the file.
 * Under the snow with EmEch
 *
 * Return: If the function fails - -1
 */

int create_file(const char *filename, char *text_content)
{
	int folder, wri, mle = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (mle = 0; text_content[mle];)
			mle++;
	}

	folder = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wri = write(folder, text_content, mle);

	if (folder == -1 || wri == -1)
		return (-1);

	close(folder);

	return (1);
}
