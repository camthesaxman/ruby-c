int __fastcall sub_8088D3C(int a1)
{
  int v1; // r4@1
  int *v2; // r5@2
  int v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(FieldEffectActiveListContains(6u) << 24) )
  {
    v2 = &dword_30048A0[9 * v202E85D];
    v3 = *(_WORD *)(v1 + 38) & 8;
    if ( v3 )
    {
      sub_8127ED0(*((_BYTE *)v2 + 26), 2);
      v3 = sub_8127EFC(*((_BYTE *)v2 + 26), 0);
    }
    *(_WORD *)(v1 + 10) = (unsigned __int8)sub_8088F60(v3);
    ++*(_WORD *)(v1 + 8);
  }
  return v5;
}
