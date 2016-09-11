int __fastcall sub_80C25C0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8007ECC() << 24 )
  {
    DestroyTask(v1);
    dword_3004B20[10 * v2018002] = (int)sub_80C2600;
    sub_80C3764();
  }
  return v3;
}
