int atkC0_recoverbasedonsunlight()
{
  int v1; // [sp+14h] [bp-4h]@0

  v2024C08 = v2024C07;
  if ( *(_WORD *)(88 * v2024C07 + 0x2024AA8) == *(_WORD *)(88 * v2024C07 + 0x2024AAC) )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    if ( !v2024DB8 || (unsigned __int8)sub_8018324(0x13u, 0, 0xDu, 0, 0) || sub_8018324(0x13u, 0, 0x4Du, 0, 0) << 24 )
    {
      v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C07 + 0x2024AAC) >> 1;
    }
    else if ( v2024DB8 & 0x60 )
    {
      v2024BEC = 20 * *(_WORD *)(88 * v2024C07 + 0x2024AAC) / 30;
    }
    else
    {
      v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C07 + 0x2024AAC) >> 2;
    }
    if ( !v2024BEC )
      v2024BEC = 1;
    v2024BEC = -v2024BEC;
    v2024C10 += 5;
  }
  return v1;
}
