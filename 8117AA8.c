int __fastcall sub_8117AA8(int a1, unsigned __int8 a2)
{
  int v2; // r8@1
  unsigned int v3; // r3@3
  char *v4; // r0@4
  unsigned int v5; // r3@6
  char *v6; // r0@9
  char *v7; // r1@10
  char *v8; // r1@13
  int v10; // [sp+18h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v2 = a2;
  if ( (_BYTE)a1 )
  {
    if ( a1 == 1 )
    {
      v3 = 0;
      do
      {
        v4 = &gSprites[68 * *(_BYTE *)(v3 + 33656921) + 62];
        *v4 |= 4u;
        v3 = (v3 + 1) & 0xFF;
      }
      while ( v3 <= 0x12 );
    }
  }
  else
  {
    v5 = 0;
    do
    {
      if ( v2019008 & gUnknown_083F8D94[2 * v5] && *((_BYTE *)&gUnknown_083F8D90 + 8 * v5 + 2) != v2 )
      {
        v6 = &gSprites[68 * *(_BYTE *)(v5 + 33656921) + 62];
        *v6 |= 4u;
      }
      else
      {
        v7 = &gSprites[68 * *(_BYTE *)(v5 + 33656921) + 62];
        *v7 &= 0xFBu;
      }
      v5 = (v5 + 1) & 0xFF;
    }
    while ( v5 <= 0xB );
    for ( ; v5 <= 0x12; v5 = (v5 + 1) & 0xFF )
    {
      v8 = &gSprites[68 * *(_BYTE *)(v5 + 33656921) + 62];
      *v8 &= 0xFBu;
    }
  }
  return v10;
}
