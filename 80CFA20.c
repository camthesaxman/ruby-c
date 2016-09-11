int __fastcall sub_80CFA20(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r5@1
  int v3; // r0@1
  int v4; // r3@2
  int v5; // r4@2
  int v6; // r0@2
  __int16 v7; // r12@2
  char *v8; // r6@2
  int v9; // r0@2
  int *v10; // r4@7
  char v11; // r0@7
  int v13; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  *((_WORD *)v2 + 4) = v3 - 1;
  if ( v3 << 16 <= 0 )
  {
    v4 = *((_BYTE *)v2 + 12);
    v5 = *((_BYTE *)v2 + 10);
    v6 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83D74BC, *((_WORD *)v2 + 13), *((_WORD *)v2 + 14));
    v7 = v6;
    v8 = &gSprites[68 * v6];
    v9 = *((_WORD *)v2 + 8);
    if ( v9 == 1 )
    {
      v8[3] = v8[3] & 0xC1 | 2 * (((unsigned int)(unsigned __int8)v8[3] << 26 >> 27) | 0x18);
    }
    else if ( v9 == 2 )
    {
      v8[3] = v8[3] & 0xC1 | 0x10;
    }
    v10 = &dword_3004B20[10 * v1];
    *((_WORD *)v8 + 23) = *((_WORD *)v10 + 9) - *((_WORD *)v10 + 10);
    *((_WORD *)v8 + 30) = v1;
    *((_WORD *)&byte_3004B28[40 * v1] + *((_WORD *)v10 + 5) + 13) = v7;
    *((_WORD *)v10 + 4) = *((_WORD *)v10 + 7);
    ++*((_WORD *)v10 + 5);
    v11 = sub_8076F98(0xC1u);
    audio_play_and_stuff(0x9Au, v11);
    if ( (signed int)*((_WORD *)v10 + 5) > 2 )
      *v10 = (int)sub_80CF9F8;
  }
  return v13;
}
