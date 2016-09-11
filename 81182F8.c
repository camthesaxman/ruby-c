int __fastcall sub_81182F8(unsigned __int8 a1)
{
  signed int v1; // r5@1
  unsigned int v2; // r4@5
  char *v3; // r1@6
  int v4; // r0@6
  char *v5; // r2@8
  _BYTE *v6; // r0@8
  int v7; // r0@9
  char *v8; // r3@9
  char *v9; // r4@9
  __int16 v10; // r1@9
  int v11; // r0@11
  int v12; // r0@13
  unsigned int v13; // r4@15
  int v14; // r0@16
  int v16; // [sp+14h] [bp-4h]@0

  v1 = 0;
  if ( v2019019 == 1 )
    v1 = 2;
  if ( a1 > 6u )
  {
def_811831E:
    v13 = 0;
    do
    {
      v14 = 68 * *(_BYTE *)(v13 + 33656918);
      *(_WORD *)&gSprites[v14 + 4] = *(_WORD *)&gSprites[v14 + 4] & 0xFC00 | (*(_WORD *)(4 * v1
                                                                                       + **(_DWORD **)((char *)&unk_202000C + v14)
                                                                                       + 8)
                                                                            + *(_WORD *)&gSprites[v14 + 64]) & 0x3FF;
      v13 = (v13 + 1) & 0xFF;
    }
    while ( v13 <= 2 );
  }
  else
  {
    switch ( a1 )
    {
      case 6u:
        v2 = 0;
        do
        {
          v3 = &gSprites[68 * *(_BYTE *)(v2 + 33656918) + 62];
          *v3 &= 0xFBu;
          v4 = 68 * *(_BYTE *)(v2 + 33656918);
          *(_WORD *)&gSprites[v4 + 4] = *(_WORD *)&gSprites[v4 + 4] & 0xFC00 | (***(_WORD ***)((char *)&unk_202000C + v4)
                                                                              + *(_WORD *)&gSprites[v4 + 64]) & 0x3FF;
          v2 = (v2 + 1) & 0xFF;
        }
        while ( v2 <= 2 );
        return v16;
      case 5u:
        v5 = gSprites;
        v6 = (_BYTE *)33656920;
        goto _08118426;
      case 4u:
        v7 = 68 * v2019058;
        v8 = &gSprites[v7];
        v9 = &gSprites[v7 + 64];
        v10 = *(_WORD *)(4 * v1 + **(_DWORD **)((char *)&unk_202000C + v7) + 8);
        break;
      case 3u:
        v5 = gSprites;
        v6 = (_BYTE *)33656919;
        goto _08118426;
      case 2u:
        v11 = 68 * v2019057;
        v8 = &gSprites[v11];
        v9 = &gSprites[v11 + 64];
        v10 = *(_WORD *)(4 * v1 + **(_DWORD **)((char *)&unk_202000C + v11) + 8);
        break;
      case 1u:
        v5 = gSprites;
        v6 = (_BYTE *)33656918;
_08118426:
        v12 = 68 * *v6;
        v8 = &v5[v12];
        v9 = &v5[v12 + 64];
        v10 = *(_WORD *)(4 * v1 + **(_DWORD **)&v5[v12 + 8] + 4);
        break;
      default:
        goto def_811831E;
    }
    *((_WORD *)v8 + 2) = *((_WORD *)v8 + 2) & 0xFC00 | (v10 + *(_WORD *)v9) & 0x3FF;
  }
  return v16;
}
