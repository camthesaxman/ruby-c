int __fastcall sub_807C7E4(int a1)
{
  unsigned int v1; // r1@1
  int v2; // r2@2
  __int16 v4; // [sp+0h] [bp-8h]@3
  int v5; // [sp+4h] [bp-4h]@6

  v1 = a1 << 24;
  if ( !((a1 << 24) & 0x3000000) )
  {
    v2 = (v1 >> 26) & 0x1F;
    if ( (v1 >> 26) & 0x20 )
      v4 = (31 - (_WORD)v2) << 10;
    else
      v4 = (_WORD)v2 << 10;
    LoadPalette((int)&v4, 239, 2);
  }
  return v5;
}
