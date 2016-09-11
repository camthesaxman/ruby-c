int __fastcall sub_811829C(unsigned __int8 a1)
{
  char *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &gSprites[68 * v2019055];
  v1[43] = sub_81181E8(a1);
  *((_WORD *)v1 + 2) = *((_WORD *)v1 + 2) & 0xFC00 | (*(_WORD *)(4 * (unsigned __int8)v1[43] + **((_DWORD **)v1 + 2))
                                                    + *((_WORD *)v1 + 32)) & 0x3FF;
  return v3;
}
