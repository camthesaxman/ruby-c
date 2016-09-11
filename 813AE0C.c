int __fastcall sub_813AE0C(unsigned __int8 a1)
{
  _BYTE *v1; // r4@1
  int v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = &byte_3004B28[40 * a1];
  v2 = (*(_WORD *)v1 + *((_WORD *)v1 + 1)) & 0xFFFF;
  sub_813ABE8(a1);
  if ( !*((_WORD *)v1 + 9) )
  {
    if ( (signed __int16)v2 == *((_WORD *)v1 + 2) )
      sub_813AD58(0xFFFFu);
    else
      sub_813AD58(*(_WORD *)(4 * (signed __int16)v2 + 0x2025BCC));
  }
  return v4;
}
