int __fastcall sub_813A198(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r6@1
  _BYTE *v4; // r4@1
  int v5; // r0@1
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 5 * a1;
  v3 = 2 * v2;
  v4 = &byte_3004B28[8 * v2];
  sub_8072DEC(v2);
  MenuZeroFillWindowRect(0, 0, 0xBu, 9u);
  v5 = (unsigned __int8)sub_80A96E4();
  *((_WORD *)v4 + 2) = v5;
  if ( v5 )
  {
    MenuZeroFillWindowRect(0, 0xEu, 0x1Du, 0x13u);
    *((_WORD *)v4 + 6) = 2;
    *(_WORD *)v4 = 0;
    *((_WORD *)v4 + 1) = 0;
    sub_813A240(v1);
    sub_813AE6C(v1, 2);
    dword_3004B20[v3] = (int)sub_813A280;
  }
  else
  {
    DisplayItemMessageOnField(v1, (int)"Œ‹ŸÊŸ", (int)sub_8139E40, 0);
  }
  return v7;
}
