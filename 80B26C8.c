int __fastcall sub_80B26C8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  _BYTE *v2; // r2@3
  signed int v3; // r4@3
  char *v4; // r1@4
  signed int v5; // r4@5
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( gSprites[68 * v2019338 + 63] & 0x20 )
  {
    if ( LOBYTE(dword_3004B20[10 * a1 + 2]) == 1 )
    {
      v2 = (_BYTE *)33657656;
      v3 = 3;
      do
      {
        v4 = &gSprites[68 * *v2 + 62];
        *v4 |= 4u;
        v2 += 4;
        --v3;
      }
      while ( v3 >= 0 );
    }
    v5 = 0;
    do
      FreeSpriteOamMatrix((int)&gSprites[68 * *(_BYTE *)(4 * v5++ + 0x2019338)]);
    while ( v5 <= 3 );
    v201920B &= 0xFDu;
    DestroyTask(v1);
  }
  return v7;
}
