int __fastcall sub_80E87A4(int a1)
{
  signed __int16 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = 0;
  if ( !(a1 << 24) )
    v1 = 1;
  *(_WORD *)(v20010A8 + 48) = v1;
  *(_WORD *)(v20010A8 + 36) = 0;
  return v3;
}
