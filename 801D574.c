int __fastcall unref_sub_801D574(int a1)
{
  int v1; // r1@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = (100 - (Random(a1) & 0xF)) & 0xFFFF;
  if ( v2024BEC )
  {
    v2024BEC *= v1;
    v2024BEC /= 100;
    if ( !v2024BEC )
      v2024BEC = 1;
  }
  return v3;
}
