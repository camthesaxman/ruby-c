int __fastcall sub_805FE28(int a1, int a2, char a3)
{
  int v3; // r3@1
  int v4; // r2@2
  char *v5; // r1@2
  int v7; // [sp+4h] [bp-4h]@0

  v3 = a2;
  if ( !((unsigned int)*(_BYTE *)(a1 + 1) << 27 >> 31) )
  {
    *(_BYTE *)(a2 + 42) = a3;
    v4 = *(_BYTE *)(a2 + 43);
    v5 = (char *)(a2 + 43);
    if ( v4 == 1 )
    {
      *v5 = 2;
    }
    else if ( v4 == 3 )
    {
      *v5 = 0;
    }
    SeekSpriteAnim(v3, *v5);
  }
  return v7;
}
