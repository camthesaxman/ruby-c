int __fastcall sub_80DCB5C(int a1)
{
  __int16 v1; // r1@3
  __int16 v2; // r1@4
  int v4; // [sp+0h] [bp-4h]@0

  if ( (signed int)*(_WORD *)(a1 + 50) > 19 )
  {
    v1 = *(_WORD *)(a1 + 48);
    *(_WORD *)(a1 + 48) = v1 + 1;
    if ( v1 & 1 )
    {
      v2 = *(_WORD *)(a1 + 46) - 1;
      *(_WORD *)(a1 + 46) = v2;
      v4000052 = v2 | ((16 - v2) << 8);
      if ( !*(_WORD *)(a1 + 46) )
      {
        *(_BYTE *)(a1 + 62) |= 4u;
        *(_DWORD *)(a1 + 28) = sub_80DCBB4;
      }
    }
  }
  else
  {
    ++*(_WORD *)(a1 + 50);
  }
  return v4;
}
