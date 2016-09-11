int __fastcall sub_80E8760(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@5
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( v2001096 )
  {
    if ( *(_WORD *)(a1 + 50) )
    {
      if ( *(_WORD *)(a1 + 50) != 2 )
        return v4;
      v2 = *(_WORD *)(v200109C + 32) + 21;
    }
    else
    {
      v2 = *(_WORD *)(v200109C + 32) + 64;
    }
    *(_WORD *)(v1 + 32) = v2;
    *(_WORD *)(v1 + 34) = *(_WORD *)(v200109C + 34);
  }
  return v4;
}
