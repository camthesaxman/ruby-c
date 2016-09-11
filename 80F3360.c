int __fastcall sub_80F3360(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v20087DC == v20087DA - 1 )
    v2 = 4;
  else
    v2 = 5;
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF | 16 * IndexOfSpritePaletteTag(v2);
  return v4;
}
