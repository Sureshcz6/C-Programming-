#include<stdio.h>
void Vowel(char str_vow[100]);

   void Vowel(char con_vow[])
                {
                    int count=0;
                    for(int i=0;con_vow[i]!='\0';i++)
                        {
                            if(con_vow[i]=='a'||con_vow[i]=='i'||con_vow[i]=='e'||con_vow[i]=='o'||con_vow[i]=='u'||con_vow[i]=='A'||con_vow[i]=='E'||con_vow[i]=='I'||con_vow[i]=='O'||con_vow[i]=='U')
                                    {
                                        ++count;
                                    }
                        }
                    printf("Occupie of vowel of given sentences = %d", count);
                }     

int main()
    {
        char Str_vow[100];
        printf("Enter any sentences  ");
        // scanf("%s",&Str_vow);
        fgets(Str_vow,100,stdin);
        Vowel(Str_vow);
        return 0;
    }
   