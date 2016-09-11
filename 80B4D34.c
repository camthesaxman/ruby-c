int __fastcall ResetBerryTreeSparkleFlag(unsigned __int8 a1)
{
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = GetBerryTreeInfo(a1);
  *(_BYTE *)(v1 + 1) &= 0x7Fu;
  return v3;
}
