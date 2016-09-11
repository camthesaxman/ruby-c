int __fastcall sub_80AF630(unsigned __int8 a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = sub_80AF688(a1);
  v1 *= 2;
  *(_WORD *)(v1 + 33785480) = v2;
  *(_WORD *)(v1 + 33785464) = v2 + *(_WORD *)(v1 + 33785456);
  return v4;
}
