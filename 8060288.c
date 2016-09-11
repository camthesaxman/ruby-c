int __fastcall sub_8060288(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  char *v3; // r1@2
  unsigned __int8 v5; // [sp+0h] [bp-8h]@1
  int v6; // [sp+4h] [bp-4h]@3

  if ( !(TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v5) << 24) )
  {
    v3 = &gSprites[68 * LOBYTE(dword_30048A0[9 * v5 + 1])];
    *((_WORD *)v3 + 30) |= 4u;
  }
  return v6;
}
