int __fastcall DoGroundEffects_OnSpawn(_BYTE *a1, int a2)
{
  _BYTE *v2; // r4@1
  int v3; // r5@1
  unsigned int v5; // [sp+0h] [bp-10h]@2
  int v6; // [sp+Ch] [bp-4h]@3

  v2 = a1;
  v3 = a2;
  if ( *a1 & 4 )
  {
    v5 = 0;
    FieldObjectUpdateZCoordAndPriority((int)a1, a2);
    GetAllGroundEffectFlags_OnSpawn((int)v2, (int)&v5);
    FieldObjectSetSpriteOamTableForLongGrass((int)v2, v3);
    sub_8064218((int)v2, v3, v5);
    *v2 &= 0xEBu;
  }
  return v6;
}
