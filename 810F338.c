int SpawnScriptFieldObject()
{
  int *v0; // r1@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = &dword_30048A0[9
                    * (unsigned __int8)SpawnSpecialFieldObjectParametrized(
                                         7,
                                         8,
                                         127,
                                         (signed __int16)(v2025734 + 7),
                                         (signed __int16)(v2025736 + 7),
                                         3)];
  *((_BYTE *)v0 + 1) |= 0x20u;
  CameraObjectSetFollowedObjectId(*((_BYTE *)v0 + 4));
  return v2;
}
