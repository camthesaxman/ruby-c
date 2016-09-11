int __fastcall sub_8042B68(int a1, char a2, int a3)
{
  unsigned int v3; // r0@1
  unsigned int v4; // r4@1
  unsigned __int8 v5; // r5@1
  int v6; // r9@1
  unsigned int *v7; // r7@1
  int v8; // r5@8
  int v9; // r2@8
  int v10; // ST00_4@8
  _DWORD *v11; // r0@8
  int v12; // r0@9

  v3 = a1 << 24;
  v4 = v3 >> 24;
  a3 = (unsigned __int8)a3;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( !(v3 >> 24) )
  {
    v7 = &dword_3004360[25 * (unsigned __int8)a3];
    v5 = 1;
  }
  if ( v3 >> 24 == 1 )
  {
    v7 = &dword_3004360[25 * a3];
    v5 = 3;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v12 = sub_8040990((int)v7);
      GetMonSpriteTemplate_803C56C(*(_WORD *)(v12 + 4), v5);
      v6 = (unsigned __int8)CreateSprite(33705612, 120, 70);
      gSprites[68 * v6 + 62] |= 4u;
      dword_2020020[17 * v6] = (int)SpriteCallbackDummy;
    }
  }
  else
  {
    v8 = (unsigned __int16)GetMonData((int)v7, 11, a3);
    GetMonData((int)v7, 0, v9);
    v10 = gUnknown_081FAF4C[2 * v4 + 1];
    sub_800D334((int)&gMonFrontPicTable[2 * v8], gMonFrontPicCoords[4 * v8], gMonFrontPicCoords[4 * v8 + 1]);
    v11 = (_DWORD *)sub_8040990((int)v7);
    LoadCompressedObjectPalette(v11);
  }
  return v6;
}
