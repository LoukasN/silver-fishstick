For int (signed/unsigned):
```
[-+]?(0|[1-9]+[0-9]*)
```

For double:
```
([-+]?([1-9][0-9]*|0)([eE][0-9]+)?\.([0-9]+)?([eE][-+]?)?[0-9]+)|([-+]?[0-9]+[eE][-+]?[0-9]+)
```

For string:
```
\"([^\\"]|\\[\\n"])*\"
```

For comment:
```
;.*
```
For delimiter:
```
[ \t]+
```

For variables:
```
\?[A-Za-z0-9]+
```

For names and definitions:
```
[A-Za-z][A-Za-z0-9_-]*
```
