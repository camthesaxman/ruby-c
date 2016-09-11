int __fastcall sub_81371DC(int a1)
{
  int v1; // r1@1
  signed int v2; // r0@1
  __int16 v3; // r0@2
  __int16 v4; // r0@6
  int v6; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 > 5 )
  {
    if ( v2 > 11 )
      goto _081371F8;
    v3 = *(_WORD *)(v1 + 38) + 2;
  }
  else
  {
    v3 = *(_WORD *)(v1 + 38) - 2;
  }
  *(_WORD *)(v1 + 38) = v3;
_081371F8:
  v4 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v4;
  if ( v4 > 60 )
  {
    DestroySprite(v1);
    --*(_BYTE *)(v2039304 + 84);
  }
  return v6;
}
