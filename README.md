# 8ool
Need 8 booleans? Only have enough memory for 1 character? Worry no longer! 8ool provides two simple c files which work as a library for utilizing a single character as 8 booleans!
## Examples
```
 unsigned char* ool = ool_Allocate();
 ool_Initialize(ool);

 for(int i = 0; i < 8; i++)
 {
		if(ool_GetIndex(ool, i)) printf("%d: TRUE", i);
		else printf("\n%d: FALSE", i);
 }

 for(int i = 0; i < 8; i++)
 {
		if(i % 2 == 0) ool_ToggleIndex(ool, i);
 }

 for(int i = 0; i < 8; i++)
 {
		if(ool_GetIndex(ool, i)) printf("\n%d: TRUE", i);
		else printf("\n%d: FALSE", i);
 }

 free(ool);
```

*outputs:*
0: FALSE
1: FALSE
2: FALSE
3: FALSE
4: FALSE
5: FALSE
6: FALSE
7: FALSE
0: TRUE
1: FALSE
2: TRUE
3: FALSE
4: TRUE
5: FALSE
6: TRUE
7: FALSE
