int sub_8054050()
{
  unsigned __int8 v0; // r0@2
  unsigned int v1; // r4@3
  __int16 v2; // r0@3
  signed __int16 v4; // [sp+0h] [bp-Ch]@1
  int v5; // [sp+8h] [bp-4h]@4

  PlayerGetDestCoords(&v4, &v4 + 1);
  if ( v2029816 != 1
    || (v0 = MapGridGetMetatileBehaviorAt(v4, *(&v4 + 1)), MetatileBehavior_IsSurfableWaterOrUnderwater(v0) << 24) )
  {
    v1 = ((unsigned __int16)Random() % 0x58u + 212) & 0xFF;
    v2 = (unsigned __int16)Random() % 0x1Eu;
    sub_8075090(v2029814, (char)v1, (char)(v2 + 50), 1);
  }
  return v5;
}
