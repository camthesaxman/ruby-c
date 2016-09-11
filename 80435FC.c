int sub_80435FC()
{
  int v0; // r2@1
  __int16 v1; // r6@1
  __int16 v2; // r5@1
  unsigned int v3; // ST04_4@1
  int v5; // [sp+14h] [bp-4h]@0

  v0 = *(_BYTE *)(dword_300481C + 58);
  v1 = gEggShardVelocities[2 * v0];
  v2 = gEggShardVelocities[2 * v0 + 1];
  *(_BYTE *)(dword_300481C + 58) = v0 + 1;
  v3 = ((Random() << 16) & 0x30000) >> 16;
  sub_8043654(120, 60, v1, v2);
  return v5;
}
