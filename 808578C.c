int __fastcall FieldEffectScript_LoadTiles(int a1)
{
  _DWORD *v1; // r4@1
  int v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = (_DWORD *)a1;
  v2 = FieldEffectScript_ReadWord(a1);
  if ( GetSpriteTileStartByTag(*(_WORD *)(v2 + 6)) << 16 == -65536 )
    LoadSpriteSheet(v2);
  *v1 += 4;
  return v4;
}
