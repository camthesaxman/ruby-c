int __fastcall sub_8100930(int a1)
{
  _BYTE *v1; // r0@1
  int v3; // [sp+8h] [bp-4h]@0

  v20391AC = 0;
  v20391AD &= 0xC0u;
  v1 = &gUnknown_083EC900[4 * a1 & 0x3FF];
  v20391AD = *v1 << 6;
  v20391AE &= 0xFE00u;
  v20391AF &= 0xC1u;
  v20391AF = v20391AF & 0x3F | (v1[1] << 6);
  v20391B0 &= 0xFC00u;
  v20391B1 = (v20391B1 & 0xF3 | 4) & 0xF;
  return v3;
}
