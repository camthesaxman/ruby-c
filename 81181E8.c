int __fastcall sub_81181E8(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  int v2; // r0@3
  int v3; // r0@10
  int v5; // [sp+0h] [bp-10h]@1
  unsigned __int8 v6; // [sp+4h] [bp-Ch]@15

  v1 = a1;
  memcpy(&v5, (const char *)&gUnknown_083FA608, 5);
  if ( v1 > 0x13 )
    v1 = 0;
  v2 = *((_BYTE *)&gUnknown_083F8C00 + 20 * v1 + 1) & 0xF;
  if ( v2 == 4 )
  {
    if ( (unsigned int)*(_BYTE *)(((v1 - 1) & 0xFF) + 0x2019012) <= 2 )
    {
      v3 = *(_BYTE *)(((v1 - 1) & 0xFF) + 0x2019012) + 2;
      return *((_BYTE *)&v5 + v3);
    }
  }
  else if ( v2 > 4 )
  {
    if ( v2 == 12 && !(v2019008 & *((_DWORD *)&unk_83F8C08 + 5 * v1)) )
      return v6;
  }
  else if ( v2 == 3 && (unsigned int)*(_BYTE *)(((v1 / 5 - 1) & 0xFF) + 0x2019016) <= 3 )
  {
    v3 = *(_BYTE *)(((v1 / 5 - 1) & 0xFF) + 0x2019016) + 1;
    return *((_BYTE *)&v5 + v3);
  }
  return 0;
}
