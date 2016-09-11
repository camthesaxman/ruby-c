int __fastcall sub_80D6A1C(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@4
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    *(_BYTE *)(a1 + 1) &= 0x3Fu;
    *(_BYTE *)(a1 + 3) = *(_BYTE *)(a1 + 3) & 0x3F | 0x40;
  }
  else
  {
    *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0x3F | 0x80;
    *(_BYTE *)(a1 + 3) &= 0x3Fu;
  }
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 == 15 )
    DestroySprite(v1);
  return v4;
}
