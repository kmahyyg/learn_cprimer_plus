# Printf() to force transform

see showf_pt.c

# Float type exception :  overflow and underflow

1. 当计算导致数字过大，超过当前类型能够表达的范围，发生overflow.

在当前标准下，若发生overflow，则给变量赋值为表示无穷大的特定值，且printf()显示为infinity.

2. 当计算导致数字过小，超过当前类型允许的指数的最小值，则尾数部分右移，空出一个二进制位，同时丢弃末尾数字，即损失了原末尾有效位上的数字，称之为underflow.

语言标准将其称之为subnormal float.

> 特殊浮点值 NaN  = not a number ， 常见的返回此值的情况主要为定义域或值域为空集。

# Float舍入错误

see floaterr.c