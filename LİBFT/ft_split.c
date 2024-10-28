/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurganci <gurganci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:48:27 by gurganci          #+#    #+#             */
/*   Updated: 2024/10/28 11:53:25 by gurganci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_word_counter (char const *s, char c)
{
    int count;
    int i;
    count =0;
    i=0;
    while (s[i] != '\0')
    {
        if(s[i] == c)
            i++;
        else 
        {
            count++;
            while (s[i] != c && s[i] != '\0') 
                i++;
        }
    }
    return count;
}

char	**ft_split(char const *s, char c)
{
    char **str;
    unsigned int word_counts;
	if (!s)
		return (NULL);
    word_counts = ft_word_counter(s,c);
    str = (char **)malloc (sizeof(char *) * (word_counts + 1));
    if(!str)
        return NULL;
    
}


