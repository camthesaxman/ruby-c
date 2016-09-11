int __fastcall DoTracksGroundEffect_Footprints(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v6; // [sp+0h] [bp-10h]@1
  int v7; // [sp+Ch] [bp-4h]@1

  v3 = a1;
  v4 = a3;
  memcpy(&v6, &gSandFootprints_FieldEffectData, 4);
  v202FF84 = *(_WORD *)(v3 + 20);
  v202FF88 = *(_WORD *)(v3 + 22);
  v202FF8C = 149;
  v202FF90 = 2;
  v202FF94 = *(_BYTE *)(v3 + 24) & 0xF;
  FieldEffectStart(*((_BYTE *)&v6 + 2 * v4));
  return v7;
}
