int __fastcall sub_8056CBC(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r0@3
  unsigned int v7; // r2@3
  __int16 v9; // [sp+0h] [bp-14h]@3
  int v10; // [sp+10h] [bp-4h]@8

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 1) )
    {
      if ( *(_BYTE *)(a1 + 1) != 1 )
      {
        LZ77UnCompVram(*(_DWORD *)(a1 + 8), 0x2000000);
        LoadPalette(0x2000000, (unsigned __int16)v4, (unsigned __int16)v5);
        return v10;
      }
      v6 = *(_DWORD *)(a1 + 8) + 192;
      a2 = (unsigned __int16)a2;
      v7 = a3 << 16;
    }
    else
    {
      v9 = *(_BYTE *)(a1 + 1);
      LoadPalette(&v9, (unsigned __int16)a2, 2);
      v6 = *(_DWORD *)(v3 + 8) + 2;
      a2 = (v4 + 1) & 0xFFFF;
      v7 = (v5 - 2) << 16;
    }
    LoadPalette(v6, a2, v7 >> 16);
  }
  return v10;
}
