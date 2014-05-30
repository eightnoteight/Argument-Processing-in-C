/*
	Author		: eightnoteight (Srinivas Devaki)
	Date	 	  : Wed May 28
	Time		  : 9:44:31 AM
	e-mail		: mr.eightnoteight [at] gmail [dot] com
	website		: http://eightnoteight.wordpress.com
	ABSTRACT	: The deafult strcmp() merely returns info 
				      about which string is lexographically 
				      greater, but e_strcmp() returns the 
				      difference between the words where the 
				      first char difference between the strings.

	Description	: If the returned integer is positive then
				          *p string is lexographically greater than *q.
				        If the returned integer is negative then
				          *p string is lexographically lesser than *q.
				        If the returned integer is 0 *p is identical
				          to *q.
				        If the returned integer is greater than 27
				          then the *q string is a substring of *p string.
				        If the returned integer is less than -27 then
				          the *p string is a substring  of *q string.
*/
inline int e_strcmp(char const *p, char const *q)
{
    while(*p)
    {
        if(*q=='\0')
            return *p-*q;
        if(*p > *q)
            return *p-*q;
        if(*p < *q)
            return *p-*q;
        p++;
        q++;
    }
    if(*q)
        return *p-*q;
    return 0;
}
/*Default Implemantion*/
/*Default Implemantion*/
/*Default Implemantion*/
/*Default Implemantion*/
/*Default Implemantion*/
/*
inline int strcmp(char const *p, char const *q)
{
	while(*p)
	{
		if (*q == '\0')
			return 1;
		if (*p > *q)
			return 1;
		if (*p < *q)
			return -1;
		p++;
		q++;
	}
	if(*q)
		return -1;
	return 0;
}
*/
