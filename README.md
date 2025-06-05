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
\"([^\n\\\"]|\\[n\\"])*\"
```

For comment:
```
;.*
```
For delimiter:
```
[\s\t]+
```

For variables:
```
\?[A-Za-z0-9]+
```

For names and definitions:
```
[A-Za-z][A-Za-z0-9_-]*
```

# Comments
## In all.fsm
- Could be better -> S2 and S7 is the same (It would take many years to change this oversight)
- When no connect goes to bad
- When double circle with \n you go to GOOD
- This will not work 1e1.3
