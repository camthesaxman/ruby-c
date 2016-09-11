int __fastcall sub_80F8560(int a1, _BYTE *a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r4@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = (int)a2;
  v3 = 7 * a1 + 33719504;
  v4 = (unsigned __int8)StringLength(a2);
  memset(v3, 255, 7);
  StringCopyN(v3, v2, v4);
  return v6;
}
