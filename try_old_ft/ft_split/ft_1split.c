#include <stdlib.h>
#include <stdio.h>

int     ft_check(char c)
{
    if (c == ' ' || c == '\n' || c == '\t')
        return (0);
    else
        return (1);
}

int     ft_all_words(char *str)
{
    int i = 0;
    int size = 0;
    
    while (str[i])
    {
        while (str[i] && ft_check(str[i]) == 0)
            i++;
        if (str[i] && ft_check(str[i]) == 1)
        {
            size++;
            while (str[i] && ft_check(str[i]) == 1)
                i++;
        }
    }
    return (size);
}

int     ft_word(char *str, int i)
{
  int word = 1;
    while (str[i] && ft_check(str[i]) == 1)
    {
      word++;
      i++;
    }
    return (word);
}

char    **ft_split(char *str)
{
    int     i;
    int     j;
    int     s;
    char    **arr;
    
    j = 0;
    s = 0;
    if (!(arr = (char **)malloc(sizeof(char *) * ft_all_words(str) + 1)))
        return (NULL);
    while (ft_check(str[s]) == 0)
        s++;
    while (str[s])
    {
        i = 0;
        if (!(arr[j] = (char *)malloc(sizeof(char) * ft_word(str, s) + 1)))
            return (NULL);
        while (str[s] && ft_check(str[s]) == 1)
        {
            arr[j][i] = str[s];
            i++;
            s++;
        }
         while (ft_check(str[s]) == 0)
               s++;
        arr[j][i] = '\0';
        j++;
    }
    arr[j] = NULL;
    return (arr);
}

int        main()
{
    char    **arr;
    char    *s;

    s = "  sef asdasdasdasdsadgdagagsrgsdrgsdgdsfgsdfgdgsergsdrgsdrgdeeeeeeeaaa aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaadsasdasdsdfsadfsaefasefasefzsdcasefaskhfksjdfkjashdfbjsabdckajshbcaskeboidsjfgklsdjf;glkdsf;lgkdslfgkdslfkjvsldjkljk123 bksdbfckajsbdckjahsbdkcjhbasdkfjhbasdjkbcalsjdbcnaksdjbnclaksd jcnlakjsdnckjabsnljdbc,jhbzlsuhdclkjbzs,dkjdselksjdfnb;ksdmfnvlskdjvksdmflv;jsdf;ljkvs df;ljv;sldkfvl;dskfv;dslkjfv;kldsnfvkndskn435";
    arr = ft_split(s);
    int        i = 0;
    while (arr[i] != NULL)
    {
        printf("%s\n", arr[i]);
        i++;
    }
}
