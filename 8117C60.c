int __fastcall sub_8117C60(int a1, unsigned __int8 a2)
{
  int v2; // r9@1
  unsigned int v3; // r5@1
  char *v4; // r0@2
  _BYTE *v5; // r4@4
  char *v6; // r0@6
  char *v7; // r1@7
  int v9; // [sp+1Ch] [bp-4h]@0

  v2 = a2;
  v3 = 0;
  if ( a1 << 24 )
  {
    do
    {
      v4 = &gSprites[68 * *(_BYTE *)(v3 + 33656941) + 62];
      *v4 |= 4u;
      v3 = (v3 + 1) & 0xFF;
    }
    while ( v3 <= 5 );
  }
  else
  {
    do
    {
      v5 = (_BYTE *)(v3 + 33656844);
      if ( *(_BYTE *)(v3 + 33656844) && v3 != v2 )
      {
        v7 = &gSprites[68 * *(_BYTE *)(v3 + 33656941) + 62];
        *v7 &= 0xFBu;
        *(_WORD *)&gSprites[68 * *(_BYTE *)(v3 + 33656941) + 32] = 8
                                                                 * (*((_BYTE *)&gUnknown_083F8C00 + 20 * *v5 + 3) + 1)
                                                                 + 4;
        *(_WORD *)&gSprites[68 * *(_BYTE *)(v3 + 33656941) + 34] = 8
                                                                 * (*((_BYTE *)&gUnknown_083F8C00 + 20 * *v5 + 4) + 1)
                                                                 + 3;
      }
      else
      {
        v6 = &gSprites[68 * *(_BYTE *)(v3 + 33656941) + 62];
        *v6 |= 4u;
      }
      v3 = (v3 + 1) & 0xFF;
    }
    while ( v3 <= 5 );
  }
  return v9;
}
