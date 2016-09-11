int __fastcall sub_8115DA0(unsigned __int8 a1)
{
  int *v1; // r6@1
  __int16 v2; // r0@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *(_BYTE *)((v201901A & 0xF) + 0x201901B) = *((_WORD *)v1 + 8);
  *((_WORD *)v1 + 6) = (unsigned __int8)sub_8117380(*(_BYTE *)((v201901A & 0xF) + 0x201901B));
  sub_811829C(*(_BYTE *)((v201901A & 0xF) + 0x201901B));
  v2 = *((_WORD *)v1 + 17) - v2019019;
  *((_WORD *)v1 + 17) = v2;
  if ( v2 & 0x8000 )
    *((_WORD *)v1 + 17) = 0;
  sub_81180F4(*((_WORD *)v1 + 17));
  *v1 = (int)sub_8115D58;
  return v4;
}
