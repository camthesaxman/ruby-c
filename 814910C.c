int __fastcall sub_814910C(int a1)
{
  int v1; // r2@1
  signed int v2; // r0@3
  __int16 v3; // r0@6
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( v203935C )
  {
    DestroySprite(a1);
  }
  else
  {
    v2 = ((*(_WORD *)(a1 + 32) << 16) | *(_WORD *)(a1 + 50)) + *(_WORD *)(a1 + 48);
    *(_WORD *)(v1 + 32) = HIWORD(v2);
    *(_WORD *)(v1 + 50) = v2;
    if ( v2 >> 16 > 255 )
      *(_WORD *)(v1 + 32) = -32;
    if ( *(_WORD *)(v1 + 46) )
      v3 = v203935A + v2039358;
    else
      v3 = v2039358;
    *(_WORD *)(v1 + 38) = -v3;
  }
  return v5;
}
