int __fastcall unref_sub_814ABE4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  CpuSet(*(&gUnknown_0842F5BC + a1), 33792896, 40);
  if ( v203A3D0 != 64 )
    SetSubspriteTables((int)&gSprites[68 * v203A3D0], (int)&gUnknown_0842F758 + 8 * v1);
  if ( v203A3D1 != 64 )
    SetSubspriteTables((int)&gSprites[68 * v203A3D1], (int)&gUnknown_0842F758 + 8 * v1);
  return v3;
}
