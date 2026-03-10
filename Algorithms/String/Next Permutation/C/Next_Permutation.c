f#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
    int p=-1;
    char *pivot;
    for(int i = n-2; i >= 0; i--){
        if(strcmp(s[i], s[i+1]) < 0){
            pivot = s[i];
            p=i;
            break;
        }
    }
    if(p==-1)
        return 0;
    for(int j = n-1; j >= 0; j--){
        if(strcmp(s[j], pivot) > 0){
            char *temp = s[j];
            s[j] = pivot;
            s[p] = temp;
            break;
        }
    }
    
    int strt = p + 1, end = n-1;
    
    while (strt < end) {
        char *temp = s[strt];
        s[strt] = s[end];
        s[end] = temp;
        strt++;
        end--;
    }
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}