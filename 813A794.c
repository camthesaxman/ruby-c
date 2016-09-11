int __fastcall sub_813A794(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  unsigned int v2; // r7@1
  _BYTE *v3; // r4@1
  _WORD *v4; // r5@1
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 40 * a1;
  v3 = &byte_3004B28[v2];
  v4 = (_WORD *)((4 * (byte_3004B28[v2 + 2] + byte_3004B28[v2]) & 0x3FF) + 33709004);
  if ( itemid_is_unique(*(_WORD *)((4 * (byte_3004B28[v2 + 2] + byte_3004B28[v2]) & 0x3FF) + 0x2025BCC)) << 24 )
  {
    *((_WORD *)v3 + 3) = 0;
    sub_813AD58(65529);
    dword_3004B20[v2 / 4] = (int)sub_813A8F0;
  }
  else
  {
    itemid_copy_name(*v4, &gStringVar1);
    ConvertIntToDecimalStringN(gStringVar2, *((_WORD *)v3 + 3), 0, 3);
    sub_813AD58(65528);
    DisplayYesNoMenu(7u, 6u, 1);
    sub_80F914C(v1, (int)&gUnknown_084062E0);
  }
  return v6;
}
