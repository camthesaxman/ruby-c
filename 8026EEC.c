int sub_8026EEC()
{
  int v0; // r0@4
  int v1; // r0@7
  int v2; // r1@11
  signed int v3; // r0@14
  int v5; // [sp+Ch] [bp-4h]@0

  if ( (unsigned __int8)sub_8018324(0x13u, 0, 0xDu, 0, 0) || sub_8018324(0x13u, 0, 0x4Du, 0, 0) << 24 )
  {
    v2024BEC = 0;
    goto _08027024;
  }
  if ( v2024DB8 & 0x18 )
  {
    v0 = *(_BYTE *)(88 * v2024C07 + 0x2024AA1);
    if ( v0 == 5
      || v0 == 8
      || v0 == 4
      || (v1 = *(_BYTE *)(88 * v2024C07 + 0x2024AA2), v1 == 5)
      || v1 == 8
      || v1 == 4
      || *(_BYTE *)(88 * v2024C07 + 0x2024AA0) == 8
      || (v2 = *(_DWORD *)(4 * v2024C07 + 0x2024C98), v2 & 0x80)
      || v2 & 0x40000 )
    {
      v3 = 0;
    }
    else
    {
      v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C07 + 0x2024AAC) >> 4;
      if ( v2024BEC )
        goto _08026FAE;
      v3 = 1;
    }
    v2024BEC = v3;
  }
_08026FAE:
  if ( v2024DB8 & 0x80 )
  {
    if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA1) == 15
      || *(_BYTE *)(88 * v2024C07 + 0x2024AA2) == 15
      || *(_DWORD *)(4 * v2024C07 + 0x2024C98) & 0x80
      || *(_DWORD *)(4 * v2024C07 + 0x2024C98) & 0x40000 )
    {
      v2024BEC = 0;
    }
    else
    {
      v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C07 + 0x2024AAC) >> 4;
      if ( !v2024BEC )
        v2024BEC = 1;
    }
  }
_08027024:
  if ( v2024C0C & gBitTable[v2024C07] )
    v2024BEC = 0;
  ++v2024C10;
  return v5;
}
