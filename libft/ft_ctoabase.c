char			*ft_ctoabase(char nbr, const char *base)
{
	char	*str;
	t_uc	cp_nbr;
	int		i;
	int		base_len;

	if (!nbr || !base || !*base)
		return (ft_strdup("0"));
	cp_nbr = (t_uc)nbr;
	base_len = ft_strlen(base);
	i = 0;
	while (cp_nbr)
	{
		cp_nbr /= base_len;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = 0;
	cp_nbr = (t_uc)nbr;
	while (--i >= 0)
	{
		str[i] = base[cp_nbr % base_len];
		cp_nbr /= base_len;
	}
	return (str);
}
