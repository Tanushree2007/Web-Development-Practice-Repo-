#include"stdio.h"
int main()
{
        char name[100];
        int i = 0;
        printf("Enter an uppercase name: ");
        fgets(name, sizeof(name), stdin);
        while (name[i] != '\0')
        {
                if (name[i] >= 'A' && name[i] <= 'Z')
                {
                        name[i] = name[i] + 32;
                }
                i++;
        }
        printf("Lowercase name: %s\n", name);
        return 0;
}
