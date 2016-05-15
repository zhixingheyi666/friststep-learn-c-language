/* columns.h */
#define		MAX_COL 20

int       read_column_numbers(int columns[],int max);
void      rearrange(char *output, char const *input, int n_columns, int const columns[]);
