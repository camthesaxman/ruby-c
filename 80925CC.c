int __fastcall sub_80925CC(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r6@1
  _BYTE *v3; // r1@1
  char **v4; // r0@1
  _WORD *v5; // r5@1
  _WORD *v6; // r1@1
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  sub_8092C8C(0);
  v2 = &dword_3004B20[10 * v1];
  v3 = &byte_3004B28[40 * v1];
  v4 = &(&gUnknown_083B5A7C)[8 * *((_BYTE *)v2 + 10)];
  v5 = &v3[2 * *((_BYTE *)v4 + 4)];
  v6 = &v3[2 * *((_BYTE *)v4 + 5)];
  *((_WORD *)v2 + 18) = *v5;
  *((_WORD *)v2 + 19) = *v6;
  sub_8092D78(v1);
  sub_814AC58(16, 0xFFFF, 12, 11679);
  sub_80925B4(*v5);
  *v2 = (int)sub_8092644;
  return v8;
}
