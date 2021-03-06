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



```printf("The length of the char is :",sizeof(char))```

# Data Type in C

## char

```objectivec
int main(void){
    char grade = 'A';  //Please use ' instead of "
    char broiled;
    broiled = "T" //Strings 
    broiled = 'T' // Char
    broiled = T // Var Name
    char fucku = 65;  // This means when u use a ASCII-based OS you could make fucku as A
    // C always treat char constant as a int.
}
```

If you save a string constant 'FATE' but point it to char(grade) , then u'll just see 'E'.

### 3 Methods to see the char

1. Use the ASCII int code.
2. Use the Escape sequence.

|Escape sequence|Explanation|
|:--------------:|:----------:|
|\a|Alert (ANSI C)|
|\b|Backspace|
|\f|Next Page|
|\r|Enter|
|\t|Sheet Text (vertical)|
|\v|Sheet Text (horizon)|
|\\|\|
|\'|'|
|\"|"|
|\?|?|
|\O45|45(oct)|
|\x6F|6F(hex)|

3. 
## int

int : ```int short long```
<1> signed : only +
<2> unsigned : both + and -

ISO C : int -32768~32767 (16bit)

(32bit long) [-2147483647,2147483647]

(32bit unsigned short/int) [0,65535]

(32bit unsigned long)[0,4294967295]

(64bit long long)[-9223372036854775807,9223372036854775807]

(64bit unsigned long long) [0,18446744073709551615]

related source file : toobig.c , print2.c

#### Overflow Int

For example , more details plz see exp342.exe ;
you might see that it returns for the beginning of the date type range.

### Your choice

short > int > long(especially 32bit) > long long (especially 64bit)

Notice : If you need a small constant to be treated as long , you should add 'L' after the int.

If it should be treated as long long , use 'LL' instead.

Simply , unsigned can be represented using 'U'.

I strongly suggest you use the upper case of the characters to prevent from misunderstanding.
But If you are going to do a force-transform , use lower case instead.

### Compiler Choice

int > unsigned int > long > unsigned long > long long > unsigned long long

#### Comparison

|Types  |Abbr    |Length     |Signed | Place-Taking note|
|:-------:|:------:|:---------:|:------:|:-----------------:|
|short int|short |<int|+-|%hd(dec)/%ho(oct)|
|long int |long  |>int|+-|%ld/%lx(HEX)/%lo(oct)|
|long long int|long long|+-|X|%lld/%llu|
|unsigned int|unsigned|+/0~65535|X|%lu|
|signed long/long int/short|X|X|Y|%l %ld %h|
|unsigned long long|X|X|X|%llu|


### Declaration and initialize

```
int erns;
int hogs,cows,goats;
cows = 122;
int hos = 12;
int dogs,cats = 94 ;  /* Should be avoided */
```

### HEX or other form

%d  dec
%o  八进制
%x  hex

如果需要显示0 / 0x / 0X前缀：
%#o %#x %#X

10000000  1.0e8
123000  1.23e5
0.01 1.0e-2

## float

<1> ```float``` : 

Float : 4 Bytes  (%f)   [at least 6bit available numbers , from 1.0e-36 to 1.0e+36 , use 32bit ram]

Available float constant examples:

[3.14156]  [.2]   [4e16]   [.8E-5]    [100.]

<2> ```double```  

Double: 8 Bytes  (%lf)  [at least 32bit available numbers , use 64bit ram]

Compiler will normally choose the float as double and then cut it using float to show the result which will slow down the compiling speed.

If you add f/F after a float number , compiler will take it as float.

If you add l/L(suggested using L to prevent from misunderstanding) to tranfer to <long double>.


<3> ```long double```

# char

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

# Data Type Convert

https://stackoverflow.com/questions/9644327/how-to-convert-floating-value-to-integer-with-exact-precision-like-123-3443-to-1


# Jetbrains CLion : scanf() or strtol()

>Anna Filippova (IntelliJ)
Oct 2, 15:04 CEST

>Hello!

>Clang-tidy is a clang-based C++ “linter” tool. Its purpose is to provide an extensible framework for diagnosing and fixing typical programming errors, like style violations, interface misuse, or bugs that can be deduced via static analysis. We have integrated clang-tidy in CLion since CLion 2017.2. Please take a look at our blog post: https://blog.jetbrains.com/clion/2017/07/clion-2017-2-released-clang-tidy-and-more/#clang-tidy. To disable it in CLion 2017.2 you need to set special clang-tidy option in File | Settings | Editor | Inspections - General - Clang-Tidy, add -cert-err34-c to Options and click Ok. You can find out more in clang-tidy documentation: http://clang.llvm.org/extra/clang-tidy/#using-clang-tidy.

>Best Regards,

>Anna Filippova
JetBrains
http://www.jetbrains.com
The Drive to Develop

# Cross Platform Type : stdint.h & inttypes.h

## Defined in stdint.h

|Name|Description|
|:------:|:--------------:|
|int32_t|32bit signed int|
|int_least8_t|8bit signed int|
|int_fast8_t|8bit signed fastest int|
|unitmax_t|max unsigned int|
|intmax_t|max signed int|

Data type transfer : PRId32 inttypes.h