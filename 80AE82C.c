int __fastcall sub_80AE82C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    *(_WORD *)(2 * v2 + 0x2038670) = sub_80AE770(v2, v1);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  return v4;
}
