#include<iostream>

using namespace std;
int main()
{
	FILE *imageFile;
	int x, y, pixel, height = 100, width = 256;

	imageFile = fopen("image.pgm", "wb");
	if (imageFile == NULL) {
		perror("ERROR: Cannot open output file");
		exit(EXIT_FAILURE);
	}

	fprintf(imageFile, "P5\n");           // P5 filetype
	fprintf(imageFile, "%d %d\n", width, height);   // dimensions
	fprintf(imageFile, "255\n");          // Max pixel

										  /* Now write a greyscale ramp */
	for (x = 0; x<height; x++) {
		for (y = 0; y<width; y++) {
			pixel = y;
			fputc(pixel, imageFile);
		}
	}

	fclose(imageFile);

}