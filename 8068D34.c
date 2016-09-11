signed int __fastcall map_warp_check(int a1, unsigned __int16 a2, unsigned __int16 a3, unsigned __int8 a4)
{
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r4@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r3@1
  int v10; // r2@1
  signed int result; // r0@6

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = *(_DWORD *)(v7 + 8);
  v9 = *(_BYTE *)(v7 + 1);
  v10 = 0;
  if ( v9 <= 0 )
  {
_08068D72:
    result = -1;
  }
  else
  {
    while ( *(_WORD *)v8 != v4 || *(_WORD *)(v8 + 2) != v5 || *(_BYTE *)(v8 + 4) != v6 && *(_BYTE *)(v8 + 4) )
    {
      ++v10;
      v8 += 8;
      if ( v10 >= v9 )
        goto _08068D72;
    }
    result = (char)v10;
  }
  return result;
}
