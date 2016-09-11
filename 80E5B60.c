int __fastcall sub_80E5B60(int a1, unsigned __int16 a2)
{
  char v2; // r5@1
  int v3; // r2@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a2;
  v3 = sub_80E5CF4(a2) & 0xFF;
  if ( v3 == (v202E864 & 0xF) )
  {
    if ( v202E86C <= 0xFEu )
      ++v202E86C;
  }
  else
  {
    sub_80E5C7C(v3);
    v202E863 = 0;
  }
  if ( (v2 & 0xF) == (v202E868 & 0xF) )
  {
    if ( v202E874 <= 0xFEu )
      ++v202E874;
  }
  else
  {
    sub_80E5CB8(v2 & 0xF);
    v202E863 = 0;
  }
  return v5;
}
