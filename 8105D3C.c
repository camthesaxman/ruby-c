int __fastcall sub_8105D3C(int a1)
{
  int v1; // r2@1
  signed int v2; // r0@1
  __int16 v3; // r0@8
  __int16 v4; // r0@10
  int v5; // r0@12
  int v7; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    v4 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v4;
    if ( v4 > 90 )
      goto _08105D8E;
  }
  else if ( v2 > 1 )
  {
    if ( v2 == 2 )
    {
      v5 = *(_WORD *)(v1 + 32) + 4;
      *(_WORD *)(v1 + 32) = v5;
      if ( v5 << 16 > 17760256 )
        goto _08105D8E;
    }
    else if ( v2 == 3 )
    {
      *(_WORD *)(v1 + 60) = 0;
    }
  }
  else if ( !v2 )
  {
    v3 = *(_WORD *)(v1 + 32) + 4;
    *(_WORD *)(v1 + 32) = v3;
    if ( v3 > 207 )
    {
      *(_WORD *)(v1 + 32) = 208;
_08105D8E:
      ++*(_WORD *)(v1 + 46);
      return v7;
    }
  }
  return v7;
}
