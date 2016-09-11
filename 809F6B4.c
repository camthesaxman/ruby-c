signed int __fastcall sub_809F6B4(int a1, _BYTE *a2, int a3)
{
  int v3; // r4@1
  _BYTE *v4; // r7@1
  int v6; // r2@4
  int v7; // ST04_4@4
  unsigned __int16 v8; // r5@5
  int v9; // r2@5
  int v10; // r6@5
  int v11; // r2@5
  int v12; // r0@5
  int v13; // r4@5

  v3 = a1;
  v4 = a2;
  if ( *a2 )
  {
    if ( *a2 != 1 )
      return (unsigned __int8)sub_80A1808(a1);
    v8 = GetMonData(a1, 65, a3);
    v10 = GetMonData(v3, 0, v9);
    v12 = GetMonData(v3, 1, v11);
    v13 = sub_80409C8(v8, v12, v10);
    LoadCompressedObjectPalette((_DWORD *)v13);
    GetMonSpriteTemplate_803C56C(*(_WORD *)(v13 + 4), 1u);
  }
  else
  {
    v7 = (unsigned __int16)GetMonData(a1, 65, a3);
    GetMonData(v3, 0, v6);
    sub_800D334((int)&gMonFrontPicTable[2 * v7], gMonFrontPicCoords[4 * v7], gMonFrontPicCoords[4 * v7 + 1]);
  }
  ++*v4;
  return 255;
}
