int __fastcall sub_80C226C(unsigned __int8 a1)
{
  int v1; // r5@1
  _BYTE *v2; // r2@2
  _BYTE *v3; // r0@4
  _BYTE *v4; // r2@4
  int v5; // r4@5
  int v7; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( a1 == v2038695 )
    v2 = StringCopy((_BYTE *)0x20238CC, &gUnknown_083D17DC);
  else
    v2 = (_BYTE *)33700044;
  *v2 = -4;
  v2[1] = 6;
  v2[2] = 4;
  v3 = StringCopy(v2 + 3, (_BYTE *)((v1 << 6) + 33785202));
  *v3 = -4;
  v3[1] = 19;
  v3[2] = 50;
  v4 = StringCopy(v3 + 3, &gUnknown_083D17E0);
  if ( v203869A & 1 )
  {
    v5 = 8 * v1;
    StringCopy(v4, &byte_3002978[28 * v1]);
  }
  else
  {
    StringCopy(v4, (_BYTE *)((v1 << 6) + 33785213));
    v5 = 8 * v1;
  }
  sub_8003460(33745160, 33700044, (unsigned int)(((v5 + v1) << 18) + 50462720) >> 16, 7, 3 * v1 + 4);
  return v7;
}
