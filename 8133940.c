int __fastcall sub_8133940(unsigned __int16 a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  _BYTE *v4; // r1@3
  int v5; // r1@4
  _BYTE *v6; // r1@5
  unsigned int v7; // r5@10
  unsigned int v8; // r4@12
  unsigned int v9; // r5@18
  unsigned int v10; // r4@20
  int v12; // [sp+0h] [bp-48h]@1
  int v13; // [sp+44h] [bp-4h]@25

  v2 = a2;
  v3 = a1;
  StringCopy(&v12, &gExpandedPlaceholder_Empty);
  if ( (unsigned int)*(_BYTE *)(v2 + 2) - 1 <= 6 )
  {
    switch ( *(_BYTE *)(v2 + 2) )
    {
      case 2:
        v4 = &gBattleMoves[12 * v3];
        if ( (unsigned int)v4[1] <= 1 )
          goto _081339B4;
        v5 = v4[1];
        goto _081339CE;
      case 4:
        v6 = &gBattleMoves[12 * v3];
        if ( v6[3] )
        {
          v5 = v6[3];
_081339CE:
          sub_8072C14((int)&v12, v5, 0x20u, 2u);
        }
        else
        {
_081339B4:
          sub_8072C74((int)&v12, (int)&OtherText_ThreeDashes2, 0x20u, 2u);
        }
        MenuPrint((int)&v12, *(_BYTE *)v2, *(_BYTE *)(v2 + 1));
        break;
      case 6:
        MenuZeroFillWindowRect(*(_BYTE *)v2, *(_BYTE *)(v2 + 1), *(_BYTE *)v2, *(_BYTE *)(v2 + 1) + 1);
        v7 = gContestEffects[4 * gContestMoves[8 * v3] + 1] / 0xAu;
        if ( v7 == 255 )
          v7 = 0;
        v8 = 0;
        do
        {
          if ( v8 >= v7 )
            StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_30007B0 + v8 + 7)], 0);
          else
            StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_30007B0 + v8 + 7)], 1);
          v8 = (v8 + 1) & 0xFF;
        }
        while ( v8 <= 7 );
        break;
      case 7:
        MenuZeroFillWindowRect(*(_BYTE *)v2, *(_BYTE *)(v2 + 1), *(_BYTE *)v2, *(_BYTE *)(v2 + 1) + 1);
        v9 = gContestEffects[4 * gContestMoves[8 * v3] + 2] / 0xAu;
        if ( v9 == 255 )
          v9 = 0;
        v10 = 0;
        do
        {
          if ( v10 >= v9 )
            StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_30007B0 + v10 + 15)], 2);
          else
            StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_30007B0 + v10 + 15)], 3);
          v10 = (v10 + 1) & 0xFF;
        }
        while ( v10 <= 7 );
        break;
      default:
        return v13;
    }
  }
  return v13;
}
