_BOOL4 __fastcall sub_8060234(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // [sp+0h] [bp-8h]@1

  return !(TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v4) << 24)
      && *(_WORD *)&gSprites[68 * LOBYTE(dword_30048A0[9 * v4 + 1]) + 60] & 2;
}
