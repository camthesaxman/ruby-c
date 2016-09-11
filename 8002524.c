int __fastcall AllocSpriteTileRange(__int16 a1, __int16 a2, __int16 a3)
{
  __int16 v3; // r4@1
  __int16 v4; // r5@1
  __int16 v5; // r6@1
  int v6; // r0@1
  int v8; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int8)IndexOfSpriteTileTag(0xFFFFu);
  sSpriteTileRangeTags[v6] = v3;
  v6 *= 4;
  *(__int16 *)((char *)sSpriteTileRanges + v6) = v4;
  *(__int16 *)((char *)word_3000082 + v6) = v5;
  return v8;
}
