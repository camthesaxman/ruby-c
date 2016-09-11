int __fastcall sub_813AA30(unsigned __int8 a1, char a2)
{
  _BYTE *v2; // r4@1
  unsigned int v3; // r5@1
  int v4; // r3@4
  int v5; // r1@8
  int v6; // r0@8
  int v8; // [sp+8h] [bp-4h]@0

  v2 = &byte_3004B28[40 * a1];
  v3 = (*v2 + v2[2]) & 0xFF;
  *((_WORD *)v2 + 9) = 0;
  if ( v2[4] <= v3 || v2[16] == v3 || a2 )
  {
    if ( v3 == *((_WORD *)v2 + 2) )
      sub_813AD58(0xFFFF);
    else
      sub_813AD58(*(_WORD *)(4 * v3 + 0x2025BCC));
    v5 = *((_WORD *)v2 + 8);
    v6 = *((_WORD *)v2 + 1);
  }
  else
  {
    v4 = *(_DWORD *)(4 * *((_WORD *)v2 + 8) + 0x2025BCC);
    *(_DWORD *)(4 * *((_WORD *)v2 + 8) + 0x2025BCC) = *(_DWORD *)(4 * v3 + 0x2025BCC);
    *(_DWORD *)(4 * v3 + 0x2025BCC) = v4;
  }
  return v8;
}
