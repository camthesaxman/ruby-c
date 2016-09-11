int __fastcall sub_810CB44(int a1, _BYTE *a2)
{
  _BYTE *v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = sub_810CA9C(a1, 0);
  StringCopy(v2, (&gUnknown_083F7EB8)[4 * v3 & 0x3FF]);
  return v5;
}
