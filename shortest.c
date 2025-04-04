#include <time.h>
#include <stdlib.h>
#include <stdio.h>



int main(void)
{
    int r = 1;
    int c = 1;

    srand(time(NULL));   // Initialization, should only be called once.
    int r = rand() / (RAND_MAX - 1) * 20;      // Returns a pseudo-random integer between 0 and RAND_MAX.
        // Generate a second number until it's different from the first
        do {
            c = rand() % 100;
        } while (c == r);

        int *data = malloc(c * r * sizeof(int));
        int **map = malloc(r * sizeof(int*));

        for (int i = 0; i < r; i++) {
            map[i] = &data[i * c];
        }

    
        
}


void add_obstacles