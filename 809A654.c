int sub_809A654()
{
  int v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = *(_BYTE *)((unsigned __int8)get_preferred_box() + 0x2038462);
  if ( v2000CCA )
    CpuSet((char *)&gUnknown_083BB0A8 + 4 * v0, 2 * v2000CEE + 33745608, 2);
  else
    CpuSet((char *)&gUnknown_083BB0A8 + 4 * v0, 2 * v2000CEC + 33745608, 2);
  return v2;
}
