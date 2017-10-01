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
> ++i表示，i自增1后再参与其它运算；而i++ 则是i参与运算后，i的值再自增1

>  i++的理解应该是执行完整个表达式的其他操作后，然后才自增

>  ++j是先自增然后再参加其它运算，所以b＝6＋6＝12

>原理表达式中除了预算法本身的优先级外，还有一个结合性问题。在++j + ++j + ++j;中，因为存在两个同级的＋运算，根据＋运算符的左结合性，在编译时，其实是先处理前面的（++j + ++j）这部分，然后再将此结果再和++j相加。具体过程参见汇编代码：
 
``` 
int b = ++j + ++j + ++j;
0040B7DD   mov         ecx,dword ptr [ebp-8]
0040B7E0   add         ecx,1
0040B7E3   mov         dword ptr [ebp-8],ecx  // 第一个++j
0040B7E6   mov         edx,dword ptr [ebp-8]
0040B7E9   add         edx,1
0040B7EC   mov         dword ptr [ebp-8],edx  // 第二个++j
0040B7EF   mov         eax,dword ptr [ebp-8]
0040B7F2   add         eax,dword ptr [ebp-8]  // ++j + ++j 
0040B7F5   mov         ecx,dword ptr [ebp-8]
0040B7F8   add         ecx,1
0040B7FB   mov         dword ptr [ebp-8],ecx  // 第三个++j
0040B7FE   add         eax,dword ptr [ebp-8]  // ++j + ++j + ++j
0040B801   mov         dword ptr [ebp-10h],eax  // 赋值给b 
```
 
> 另外我们看看a = i++ + i++ + i++;的汇编代码：

```
 int a = i++ + i++ + i++;
 0040B7B6   mov         eax,dword ptr [ebp-4]
 0040B7B9   add         eax,dword ptr [ebp-4]    // i+i
 0040B7BC   add         eax,dword ptr [ebp-4]   // i+i+i
 0040B7BF   mov         dword ptr [ebp-0Ch],eax // 赋值给a
 0040B7C2   mov         ecx,dword ptr [ebp-4]
 0040B7C5   add         ecx,1
 0040B7C8   mov         dword ptr [ebp-4],ecx  // 第一次i++
 0040B7CB   mov         edx,dword ptr [ebp-4]
 0040B7CE   add         edx,1
 0040B7D1   mov         dword ptr [ebp-4],edx  // 第二次i++
 0040B7D4   mov         eax,dword ptr [ebp-4]
 0040B7D7   add         eax,1
 0040B7DA   mov         dword ptr [ebp-4],eax  // 第三次i++
``` 
 
> 果然不出所料。到此，++运算符前置后置的问题应该彻底解决了。


2.双目运算符

```+ - * / % < > ==```

3.三目运算符

```? :```

4.其他运算符(面向过程 VS 面向对象)

```{}  []```

## 结合性

```int a=1;```  右结合

```a++ a--``` 自增自减同样是右结合



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

https://stackoverflow.com/questions/9644327/how-to-convert-floating-value-to-integer-with-exact-precision-like-123-3443-to-1
# Data Type Convert

### Force

### Incognito

