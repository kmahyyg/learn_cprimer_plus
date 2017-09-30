# Keyword announced in the Standard

K&R :
```int long short unsigned char float double```

C90 :
```signed void```

'signed' is used to offer other forms of the int , such as : unsigned short int , long long int
'char' is used to offer characters or some small int.
'float' 'double' 'long double' is used to save the floats.

C99 :

```_Bool _Complex _Imaginary```

# Memory Usage in saving data

Float : 4 Bytes

Double: 8 Bytes

```printf("The length of the char is :",sizeof(char))```

# Data Type in C

int : ```int short long```
<1> signed : only +
<2> unsigned : both + and -

float :
<1> ```float``` : R
<2> ```double```
<3> ```long double```

```char```

# Constant and Variety

```#``` is pre-processed mark.

```# define N 9``` is going to define a constant N=9.

```int ija=9;``` is going to define a var ija=9.

# Operators

1.单目运算符

```++ --```: a++ a-- <=> a+1 a-1
If you input a character then do a ++ , it will respect the ASCII Code.

http://bbs.csdn.net/topics/330189207

2.双目运算符

```+ - * / % < > ==```

3.三目运算符

```? :```

4.其他运算符(面向过程 VS 面向对象)

```{}  []```

## 结合性

```int a=1;```  右结合

```a++ a--``` 自增自减同样是右结合

http://blog.csdn.net/hitwhylz/article/details/14526569

# Priorty of Running

```
#include <stdio.h>

int main(void)
{
    int qn = 129;
    float qp = 3.123445873599473;
    double qs= 5.4837234728947257;
    printf("That is one: %d \n",qn);
    printf("That is shit: %d \n",qp);
    printf("That is fuck: %d \n",printf("Hello world!"));
    printf("That is killed: %d \n",printf("%d \n",qs));
    printf("This is open:%d \n",printf("%d \n",qp));
    getchar();
    return 1;
}
```

https://zhidao.baidu.com/question/235468526.html

# Data Type Convert

### Force

### Incognito

