int __fastcall sub_8071684(unsigned __int8 *a1, int a2)
{
  int v2; // r5@1
  _BYTE *v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a2;
  v3 = StringExpandPlaceholders(&gStringVar4, a1);
  MenuDisplayMessageBox(v3);
  sub_8072044(&gStringVar4);
  byte_30006AD = 1;
  dword_30006A8 = v2;
  return v5;
}
