int __fastcall sub_813A6FC(unsigned __int8 a1)
{
  unsigned int v1; // r6@1
  _BYTE *v2; // r4@1
  _WORD *v3; // r5@1
  int *v4; // r0@2
  int (*v5)(); // r1@2
  int v7; // [sp+10h] [bp-4h]@0

  v1 = 40 * a1;
  v2 = &byte_3004B28[v1];
  v3 = (_WORD *)((4 * (byte_3004B28[v1 + 2] + byte_3004B28[v1]) & 0x3FF) + 33709004);
  if ( (unsigned __int8)sub_80A9424(
                          *(_WORD *)((4 * (byte_3004B28[v1 + 2] + byte_3004B28[v1]) & 0x3FF) + 0x2025BCC),
                          *(_WORD *)&byte_3004B28[v1 + 6]) == 1 )
  {
    itemid_copy_name(*v3, &gStringVar1);
    ConvertIntToDecimalStringN(gStringVar2, *((_WORD *)v2 + 3), 0, 3);
    sub_813AD58(65533);
    v4 = &dword_3004B20[v1 / 4];
    v5 = sub_813A8F0;
  }
  else
  {
    *((_WORD *)v2 + 3) = 0;
    sub_813AD58(65530);
    v4 = &dword_3004B20[v1 / 4];
    v5 = sub_813A984;
  }
  *v4 = (int)v5;
  return v7;
}
