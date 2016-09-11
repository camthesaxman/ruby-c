int __fastcall sub_8051684(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = -2 * ++*(_WORD *)(a1 + 46);
  *(_WORD *)(v1 + 38) = v2;
  if ( v2 < -12 )
    *(_WORD *)(v1 + 38) = -12;
  if ( *(_BYTE *)(v1 + 63) & 0x10 )
    DestroySprite(v1);
  return v4;
}
