int __fastcall sub_80A5E1C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 1 || word_300179E & 2 )
  {
    LOWORD(dword_3004B20[10 * a1 + 7]) = 0;
    sub_80A41D4();
    sub_80A5D38(v1);
  }
  return v3;
}
