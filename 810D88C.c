int __fastcall sub_810D88C(unsigned int a1, unsigned __int8 a2)
{
  unsigned int v2; // r5@1
  __int16 v3; // r8@1
  int v4; // r4@1
  unsigned int v5; // r4@1
  int v7; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int16)VarGet(16424);
  v5 = v4 + (VarGet(16425) << 16);
  if ( v5 > v2 || !v5 )
  {
    VarSet(0x4028u, v2);
    VarSet(0x4029u, SHIWORD(v2));
    VarSet(0x4027u, v3);
  }
  return v7;
}
