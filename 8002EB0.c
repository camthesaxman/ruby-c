int __fastcall sub_8002EB0(int a1, int a2, __int16 a3, char a4, unsigned __int8 a5)
{
  int v5; // r7@1
  int v6; // r4@2
  int v8; // [sp+18h] [bp-4h]@0

  v5 = a1;
  word_30017A6 = 3;
  word_30017A4 = 0;
  sWaitType = 0;
  sLineLength = 26;
  InitWindow(a1, a2, a3, a4, a5);
  *(_BYTE *)(v5 + 11) = -1;
  if ( !*(_BYTE *)v5 )
  {
    v6 = *(_DWORD *)(v5 + 36) + (32 * GetCursorTileNum(v5, 0, 0) & 0x1FFFFF);
    ApplyColors_UnshadowedFont(&sBlankTile, v6, *(_BYTE *)(v5 + 4), *(_BYTE *)(v5 + 4));
    ApplyColors_UnshadowedFont(&unk_81E3D60, v6 + 32, *(_BYTE *)(v5 + 3), *(_BYTE *)(v5 + 4));
    *(_WORD *)(v5 + 28) = 2;
  }
  return v8;
}
