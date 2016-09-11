int __fastcall sub_805BD48(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int *v3; // r1@2
  unsigned __int8 v5; // [sp+0h] [bp-8h]@1
  int v6; // [sp+4h] [bp-4h]@3

  if ( !(TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v5) << 24) )
  {
    v3 = &dword_30048A0[9 * v5];
    *((_BYTE *)v3 + 3) &= 0xFBu;
    *(_BYTE *)v3 |= 4u;
  }
  return v6;
}
