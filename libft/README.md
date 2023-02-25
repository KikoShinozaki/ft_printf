誰の役にも立たない
ft_atoiの小泉構文の書き方

	while (ft_isdigit(*str))
	{
		if ((ans * 10 + (*str - '0')) / 10 == ans)
			ans = ans * 10 + *str++ - '0';
		else
			return (check_ans(pm));
	}
	return (pm * ans);
}

オーバーフロー判定を実際にオーバーフローを起こすことで行っている
