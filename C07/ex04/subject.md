<div>
<h2>Chapter  VII</h2>
<h3>Exercise 04 : ft_convert_base</h3>
<table align="center">
	<tr>
		<th colspan="2">
			ft_convert_base
		</th>
	</tr>
	<tr>
		<th>Turn-in directory :</th>
		<td>ex04/</td>
	</tr>
	<tr>
		<th>Files to turn in :</th>
		<td> ft_convert_base.c, ft_convert_base2.c</td>
	</tr>
	<tr>
		<th>Allowed functions :</th>
		<td>malloc, free</td>
	</tr>
</table>
	
<p>• Create a function that returns the result of the conversion of the string nbr from a
base base_from to a base base_to.</p>
<p>• nbr, base_from, base_to may be not writable</p>
<p>• nbr will follow the same rules as ft_atoi_base (from an other module). Beware of ’+’, ’-’ and whitespaces.</p>
<p>• The number represented by nbr must fit inside an int.</p>
<p>• If a base is wrong, NULL should be returned</p>
<p>• The returned number must be prefix only by a single and uniq ’-’ if necessary, no whitespaces, no ’+’.</p>
<p>• Here’s how it should be prototyped :
</p>

```C
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
```

</div>
