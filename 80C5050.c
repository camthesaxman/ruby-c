int sub_80C5050()
{
  unsigned int v0; // r6@2
  unsigned int v1; // r8@2
  unsigned int v2; // r9@2
  int *v3; // r5@2
  int v4; // r4@2
  int v5; // r0@2
  int v7; // [sp+28h] [bp-4h]@0

  if ( (unsigned __int8)FindTaskIdByFunc((int)sub_80C5190) == 255 )
  {
    MenuDrawTextWindow(0xAu, 3u);
    v0 = *(_WORD *)((v202E8D0 << 6) + 0x2038570);
    v1 = *(_DWORD *)((v202E8D0 << 6) + 0x20385A8);
    v2 = *(_DWORD *)((v202E8D0 << 6) + 0x20385AC);
    v3 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_80C5190, 80)];
    *((_WORD *)v3 + 4) = 0;
    *((_WORD *)v3 + 5) = v0;
    sub_800D334((int)&gMonFrontPicTable[2 * v0], gMonFrontPicCoords[4 * v0], gMonFrontPicCoords[4 * v0 + 1]);
    v4 = sub_80409C8(v0, v2, v1);
    LoadCompressedObjectPalette((_DWORD *)v4);
    GetMonSpriteTemplate_803C56C(v0, 1u);
    v2024E8E = *(_WORD *)(v4 + 4);
    v5 = (unsigned __int8)CreateSprite(33705612, 120, 64);
    *((_WORD *)v3 + 6) = v5;
    *((_WORD *)v3 + 7) = 10;
    *((_WORD *)v3 + 8) = 3;
    dword_2020020[17 * v5] = (int)SpriteCallbackDummy;
    gSprites[68 * v5 + 5] &= 0xF3u;
  }
  return v7;
}
