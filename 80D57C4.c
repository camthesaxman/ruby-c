int __fastcall sub_80D57C4(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r8@1
  __int16 v6; // r9@1
  int v7; // r4@1
  int v8; // r4@2
  char v9; // r0@2
  unsigned int v10; // r6@4
  unsigned int v11; // r5@4
  unsigned __int8 v12; // r0@5
  char *v13; // r4@6
  __int16 v15; // [sp+0h] [bp-2Ch]@4
  int v16; // [sp+8h] [bp-24h]@4
  int v17; // [sp+28h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = sub_80D5940(a1);
  v7 = *(_WORD *)&gSprites[68 * v3 + 32];
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v8 = (v7 + 16) & 0xFFFF;
    v9 = -1;
  }
  else
  {
    v8 = (v7 - 12) & 0xFFFF;
    v9 = 1;
  }
  v10 = 0;
  v11 = 0;
  v16 = v8 << 16;
  v15 = v9;
  do
  {
    v12 = CreateSprite((int)&gSpriteTemplate_83D96C4, SHIWORD(v16), v6);
    if ( v12 != 64 )
    {
      v13 = &gSprites[68 * v12];
      *((_WORD *)v13 + 2) = *((_WORD *)v13 + 2) & 0xFC00 | ((*((_WORD *)v13 + 2) & 0x3FF) + 4 * v11 + 64) & 0x3FF;
      v11 = (v11 + 1) & 0xFFFF;
      if ( v11 > 4 )
        v11 = 0;
      sub_80D5994(v13, (signed __int16)(gUnknown_083D96DC[2 * v10] * v15), word_83D96DE[2 * v10]);
      *((_WORD *)v13 + 29) = v4;
      *((_WORD *)v13 + 30) = v5;
      ++*((_WORD *)&byte_3004B28[40 * v4] + v5);
    }
    v10 = (v10 + 1) & 0xFFFF;
  }
  while ( v10 <= 6 );
  return v17;
}
