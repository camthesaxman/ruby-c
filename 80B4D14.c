int __fastcall GetBerryNameByBerryType(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  char *v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = GetBerryInfo(a1);
  memcpy(v2, v3, 6);
  *(_BYTE *)(v2 + 6) = -1;
  return v5;
}
