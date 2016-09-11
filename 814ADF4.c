int __fastcall sub_814ADF4(unsigned __int8 a1)
{
  int v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( a1 > 0x12u )
    v1 = 0;
  if ( v203A3D2 != 64 )
    SetSubspriteTables((int)&gSprites[68 * v203A3D2], (int)&gUnknown_0842F6C0 + 8 * v1);
  return v3;
}
