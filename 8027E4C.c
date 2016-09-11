int sub_8027E4C()
{
  int v0; // r2@2
  int v1; // r4@2
  int v3; // [sp+18h] [bp-4h]@0

  if ( *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0x1000000 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    v0 = *(_WORD *)(88 * v2024C08 + 0x2024AA8);
    v1 = (*(_WORD *)(88 * v2024C07 + 0x2024AA8) + v0) >> 1;
    v2024BEC = v0 - v1;
    v2016014 = v0 - v1;
    v2016015 = (unsigned __int16)((v0 - v1) & 0xFF00) >> 8;
    v2016016 = ((v0 - v1) & 0xFF0000) >> 16;
    v2016017 = (unsigned int)(v0 - v1) >> 24;
    v2024BEC = *(_WORD *)(88 * v2024C07 + 0x2024AA8) - v1;
    *(_DWORD *)(20 * v2024C08 + 0x2024D6C) = 0xFFFF;
    v2024C10 += 5;
  }
  return v3;
}
