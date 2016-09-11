signed int __fastcall sub_8125974(int a1)
{
  int v1; // r10@1
  unsigned int v2; // r8@1
  unsigned int v3; // r9@1
  int v4; // r6@1
  signed int v5; // r5@1
  unsigned int v6; // r4@1
  int v7; // r6@10
  signed int v8; // r5@10
  unsigned int v9; // r4@10
  signed int v10; // r1@16
  int *v11; // r0@26
  int v12; // r3@26
  signed int result; // r0@36
  signed int v14; // [sp+0h] [bp-24h]@7

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    sub_8125BF8((unsigned __int8)v6, dword_3005EB0);
    if ( *(int **)(dword_3005EB0 + 4088) == (int *)((char *)&08012024 + 1) )
    {
      v5 = 1;
      if ( *(_WORD *)(dword_3005EB0 + 4086) == (unsigned __int16)sub_8125C10(
                                                                   dword_3005EB0,
                                                                   *(_WORD *)(8 * *(_WORD *)(dword_3005EB0 + 4084)
                                                                            + v1
                                                                            + 4)) )
      {
        v2 = *(_DWORD *)(dword_3005EB0 + 4092);
        v4 |= 1 << *(_WORD *)(dword_3005EB0 + 4084);
      }
    }
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 0xD );
  if ( v5 )
  {
    v14 = 255;
    if ( v4 == 0x3FFF )
      v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  do
  {
    sub_8125BF8((v9 + 14) & 0xFF, dword_3005EB0);
    if ( *(int **)(dword_3005EB0 + 4088) == (int *)((char *)&08012024 + 1) )
    {
      v8 = 1;
      if ( *(_WORD *)(dword_3005EB0 + 4086) == (unsigned __int16)sub_8125C10(
                                                                   dword_3005EB0,
                                                                   *(_WORD *)(8 * *(_WORD *)(dword_3005EB0 + 4084)
                                                                            + v1
                                                                            + 4)) )
      {
        v3 = *(_DWORD *)(dword_3005EB0 + 4092);
        v7 |= 1 << *(_WORD *)(dword_3005EB0 + 4084);
      }
    }
    v9 = (v9 + 1) & 0xFFFF;
  }
  while ( v9 <= 0xD );
  if ( v8 )
  {
    v10 = 255;
    if ( v7 == 0x3FFF )
      v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( v14 == 1 )
  {
    if ( v10 == 1 )
    {
      if ( (v2 != -1 || v3) && (v2 || v3 != -1) )
      {
        if ( v2 >= v3 )
        {
          v11 = &dword_3005EAC;
          v12 = v2;
          goto _08125B10;
        }
        dword_3005EAC = v3;
      }
      else
      {
        if ( v2 + 1 < v3 + 1 )
        {
          v11 = &dword_3005EAC;
          v12 = v3;
_08125B10:
          *v11 = v12;
          return 1;
        }
        dword_3005EAC = v2;
      }
      return 1;
    }
    dword_3005EAC = v2;
    if ( v10 != 255 )
      return 1;
    return 255;
  }
  if ( v10 == 1 )
  {
    dword_3005EAC = v3;
    if ( v14 != 255 )
      return 1;
    return 255;
  }
  if ( v14 || v10 )
  {
    dword_3005EAC = 0;
    word_3005E9C = 0;
    result = 2;
  }
  else
  {
    dword_3005EAC = 0;
    word_3005E9C = 0;
    result = 0;
  }
  return result;
}
