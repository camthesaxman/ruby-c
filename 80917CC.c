int __fastcall sub_80917CC(int a1, __int16 a2)
{
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = (a1 << 11) & 0x7FFFFFF;
  *(_WORD *)(v2 + 100663858) = a2 - 4096;
  *(_WORD *)(v2 + 100663860) = a2 - 4095;
  *(_WORD *)(v2 + 100663922) = a2 - 4094;
  *(_WORD *)(v2 + 100663924) = a2 - 4093;
  return v4;
}
