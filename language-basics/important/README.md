# Overflow, Precision Errors, Calculation order

```C++
int a = 3/2; // 1
int b = 3/2.0; // 1
double c = 3/2; // 1
double d = 3/2.0; // 1.5
```

## Operator Precedence
<table>
<tr><b>
<td><b>Category</b></td>
<td><b>Operator</td>
<td><b>Associativity</td></b>
</tr>
<tr>
<td>     Postfix    </td>
<td>() [] -> . ++ - -</td>
<td> Left to right</td>
</tr>
<tr>
<td> Unary  </td>
<td>+ - ! ~ ++ - - (type)* & sizeof</td>
<td>Right to left</td>
</tr>
<tr>
<td>Multiplicative</td>
<td>* / %</td>
<td>   Left to right</td>
</tr>
<tr>
<td>Additive</td>
<td>+ -    </td>
<td>Left to right</td>
</tr>
<tr>
<td>    Shift  </td>
<td><< >></td>
<td>Left to right</td>
</tr>
<tr>
<td>Relational </td>
<td>< <= > >=</td>
<td>Left to right</td>
</tr>
<tr>
<td>Equality </td>
<td>== !=</td>
<td>Left to right</td>
</tr>
<tr>
<td>Bitwise AND</td>
<td>&</td>
<td>Left to right</td>
</tr>
<tr>
<td>Bitwise XOR</td>
<td>^</td>
<td>Left to right</td>
</tr>
<tr>
<td>Bitwise OR</td>
<td>|</td>
<td>Left to right</td>
</tr>
<tr>
<td>Logical AND</td>
<td>&&</td>
<td>Left to right</td>
</tr>
<tr>
<td>Logical OR</td>
<td>||</td>
<td>Left to right</td>
</tr>
<tr>
<td>Conditional</td>
<td>?:</td>
<td>Right to left</td>
</tr>
<tr>
<td>Assignment</td>
<td>= += -= *= /= %=>>= <<= &= ^= |=</td>
<td>Right to left</td>
</tr>
<tr>
<td>Comma</td>
<td> ,</td>
<td> Left to right</td>
</tr>
</table>










## Overflow
