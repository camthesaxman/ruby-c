int __fastcall sub_80DF018(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@5
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( (signed int)*(_WORD *)(a1 + 48) > 1 )
    {
      *(_WORD *)(a1 + 48) = 0;
      v2 = *(_WORD *)(a1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v2;
      v4000052 = (16 - v2) | (v2 << 8);
      if ( *(_WORD *)(v1 + 50) == 16 )
      {
        *(_BYTE *)(v1 + 62) |= 4u;
        *(_DWORD *)(v1 + 28) = sub_80DF090;
      }
    }
    else
    {
      ++*(_WORD *)(a1 + 48);
    }
  }
  else
  {
    v4000050 = 16192;
    v4000052 = 16;
    ++*(_WORD *)(a1 + 46);
    *(_WORD *)(a1 + 48) = 0;
    *(_WORD *)(a1 + 50) = 0;
  }
  return v4;
}
