int __fastcall sub_8105F54(int a1)
{
  int v1; // r1@1
  int v2; // r0@1
  __int16 v3; // r0@4
  __int16 v4; // r0@6
  int v6; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v4 = *(_WORD *)(v1 + 34) + 2;
      *(_WORD *)(v1 + 34) = v4;
      if ( v4 > 47 )
      {
        *(_WORD *)(v1 + 34) = 48;
        ++*(_WORD *)(v1 + 46);
        *(_WORD *)(v1 + 60) = 0;
      }
    }
  }
  else
  {
    v3 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 > 8 )
      ++*(_WORD *)(v1 + 46);
  }
  return v6;
}
