int __fastcall sub_812C40C(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50);
  *(_WORD *)(v1 + 50) = v2 + 1;
  if ( v2 > 9 )
  {
    *(_BYTE *)(v1 + 62) &= 0xFBu;
    *(_BYTE *)(v1 + 44) &= 0x7Fu;
    if ( *(_BYTE *)(v1 + 63) & 0x20 )
      *(_DWORD *)(v1 + 28) = sub_812C450;
  }
  return v4;
}
