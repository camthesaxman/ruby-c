int __fastcall sub_8140930(unsigned __int8 a1)
{
  int v1; // r9@1
  int *v2; // r7@1
  int v3; // r8@1
  char v4; // r6@2
  int v5; // r3@2
  unsigned int v6; // r4@2
  char *v7; // r2@2
  unsigned int v8; // r0@2
  int v10; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 19) & 0xFF;
  if ( (signed int)*((_WORD *)v2 + 4) > 15 )
    goto LABEL_10;
  v4 = *((_BYTE *)v2 + 14);
  v5 = *((_BYTE *)v2 + 16);
  v6 = 68
     * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840B3B4[24 * v3], *((_BYTE *)v2 + 10), *((_BYTE *)v2 + 12));
  StartSpriteAnim((int)&gSprites[v6], gUnknown_0840B378[v3]);
  dword_2020020[v6 / 4] = (int)sub_8140A08;
  v7 = &gSprites[v6];
  v7[5] = v7[5] & 0xF3 | 4 * (v4 & 3);
  v8 = *((_BYTE *)v2 + 8);
  if ( v8 > 7 )
    v8 = (v8 - 8) & 0xFF;
  *((_WORD *)v7 + 23) = 32 * v8;
  if ( *((_WORD *)v2 + 4) != 15 )
  {
LABEL_10:
    ++LOWORD(dword_3004B20[10 * v1 + 2]);
  }
  else
  {
    *((_WORD *)v7 + 30) = 1;
    DestroyTask(v1);
  }
  return v10;
}
