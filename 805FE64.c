int __fastcall sub_805FE64(int a1, int a2, char a3)
{
  char v3; // r2@2
  int v5; // [sp+0h] [bp-4h]@0

  if ( !(*(_BYTE *)(a1 + 1) & 0x10) )
  {
    *(_BYTE *)(a2 + 42) = a3;
    v3 = 3;
    if ( (unsigned int)*(_BYTE *)(a2 + 43) <= 1 )
      v3 = 1;
    SeekSpriteAnim(a2, v3);
  }
  return v5;
}
