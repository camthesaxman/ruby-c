int sub_80F1934()
{
  unsigned __int8 v0; // r0@2
  int v1; // r4@2
  _BYTE *v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(4 * v20087DC + 0x200893F) & 0x40 )
  {
    v0 = sub_8137124(v20087DC);
    v1 = (unsigned __int8)GetNature((int)&dword_3004360[25 * v0]);
    v2 = StringCopy((_BYTE *)0x2008788, &gUnknown_08410E76);
    sub_8072C74((int)v2, (int)*(&gNatureNames + v1), 0x57u, 0);
  }
  else
  {
    sub_8072C74(33589128, (int)&gEmptyString_81E72B0, 0x57u, 0);
  }
  sub_80729D8(33589128, 1, 112, 1u);
  return v4;
}
