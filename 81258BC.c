signed int __fastcall sub_81258BC(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r7@1
  int v4; // r5@1
  int v5; // r1@2
  int v6; // r4@4
  int v7; // r3@4
  unsigned int i; // r2@6

  v2 = a2;
  v3 = 14 * (dword_3005EAC & 1) & 0xFFFF;
  v4 = 0;
  do
  {
    sub_8125BF8((v4 + v3) & 0xFF, dword_3005EB0);
    v5 = *(_WORD *)(dword_3005EB0 + 4084);
    if ( !*(_WORD *)(dword_3005EB0 + 4084) )
      word_3005E9C = v4;
    v6 = 8 * v5 + v2;
    v7 = (unsigned __int16)sub_8125C10(dword_3005EB0, *(_WORD *)(v6 + 4));
    LOWORD(v4) = v4 + 1;
    if ( *(int **)(dword_3005EB0 + 4088) == (int *)((char *)&08012024 + 1) && *(_WORD *)(dword_3005EB0 + 4086) == v7 )
    {
      for ( i = 0; i < *(_WORD *)(v6 + 4); i = (i + 1) & 0xFFFF )
        *(_BYTE *)(*(_DWORD *)v6 + i) = *(_BYTE *)(dword_3005EB0 + i);
    }
    v4 = (unsigned __int16)v4;
  }
  while ( (unsigned __int16)v4 <= 0xDu );
  return 1;
}
