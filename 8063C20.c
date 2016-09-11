int __fastcall FieldObjectSetSpriteOamTableForLongGrass(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _BYTE *v4; // r4@4
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( !(*(_BYTE *)a1 & 0x10)
    && MetatileBehavior_IsLongGrass(*(_BYTE *)(a1 + 30)) << 24
    && MetatileBehavior_IsLongGrass(*(_BYTE *)(v2 + 31)) << 24 )
  {
    v4 = (_BYTE *)(v3 + 66);
    *v4 = *v4 & 0xC0 | 4;
    if ( (unsigned __int8)ZCoordToPriority((unsigned int)*(_BYTE *)(v2 + 11) >> 4) == 1 )
      *v4 = *v4 & 0xC0 | 5;
  }
  return v6;
}
