int __fastcall sub_80C2D80(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v203869A & 1 )
  {
    sub_80C3698("Æİâß");
    sub_800832C();
    dword_3004B20[10 * v1] = (int)sub_80C2DD8;
  }
  else
  {
    dword_3004B20[10 * a1] = (int)sub_80C2E14;
  }
  return v3;
}
