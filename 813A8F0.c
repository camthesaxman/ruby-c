int __fastcall sub_813A8F0(unsigned __int8 a1)
{
  int v1; // r6@1
  _BYTE *v2; // r5@1
  __int16 v3; // r4@3
  int v4; // r0@3
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  if ( word_300179E & 1 || word_300179E == 2 )
  {
    sub_80A97F4((v2[2] + *v2) & 0xFF, *((_WORD *)v2 + 3));
    v3 = *((_WORD *)v2 + 2);
    v4 = (unsigned __int8)sub_80A96E4();
    *((_WORD *)v2 + 2) = v4;
    if ( v3 != v4 && v3 < *((_WORD *)v2 + 4) + (signed int)*((_WORD *)v2 + 1) && *((_WORD *)v2 + 1) )
      --*((_WORD *)v2 + 1);
    sub_813A240(v1);
    sub_813A9EC(v1);
    InitMenu(0, 16, 2, v2[8], *v2, 13);
  }
  return v6;
}
