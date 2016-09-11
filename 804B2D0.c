int __fastcall sub_804B2D0(unsigned __int8 a1, char a2, int a3)
{
  int v3; // r7@1
  unsigned __int8 v4; // r4@1
  char *v5; // r10@1
  int v6; // r5@8
  int v7; // r2@8
  int v8; // r7@8
  int v9; // ST00_4@8
  _DWORD *v10; // r0@8
  int v11; // r0@9
  char v12; // r0@9
  char *v13; // r0@9
  int v15; // [sp+28h] [bp-4h]@0

  v3 = a1;
  v4 = 0;
  v5 = 0;
  if ( !a1 )
  {
    v5 = (char *)&dword_3004360[25 * v20297D8];
    v4 = 1;
  }
  if ( a1 == 1 )
  {
    v5 = (char *)&unk_30045C0 + 100 * (v20297D9 % 6u);
    v4 = 3;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v11 = sub_8040990((int)v5);
      GetMonSpriteTemplate_803C56C(*(_WORD *)(v11 + 4), v4);
      v12 = CreateSprite(33705612, 120, 60);
      *(_BYTE *)(dword_3004828 + 184 + v3) = v12;
      v13 = &gSprites[68 * *(_BYTE *)(dword_3004828 + 184 + v3) + 62];
      *v13 |= 4u;
      dword_2020020[17 * *(_BYTE *)(dword_3004828 + 184 + v3)] = (int)SpriteCallbackDummy;
    }
  }
  else
  {
    v6 = (unsigned __int16)GetMonData((int)v5, 65, a3);
    GetMonData((int)v5, 0, v7);
    v8 = 2 * v3;
    v9 = gUnknown_081FAF4C[v8 + 1];
    sub_800D334((int)&gMonFrontPicTable[2 * v6], gMonFrontPicCoords[4 * v6], gMonFrontPicCoords[4 * v6 + 1]);
    v10 = (_DWORD *)sub_8040990((int)v5);
    LoadCompressedObjectPalette(v10);
    *(_WORD *)(dword_3004828 + 288 + v8) = v6;
  }
  return v15;
}
